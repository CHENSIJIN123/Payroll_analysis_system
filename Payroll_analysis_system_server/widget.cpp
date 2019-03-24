#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <iostream>
#include <QDebug>

using namespace std;
#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    init_tcp_socket();
    msg = new MyProtocol();
}

void Widget::init_tcp_socket()
{
    tcpserver = new QTcpServer(this);
    tcpserver->listen(QHostAddress::Any,8888);

    connect(tcpserver,&QTcpServer::newConnection,this,
            [=]()
            {
               cout << "成功连接"<<endl;
               tcpsocket = tcpserver->nextPendingConnection();
               connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(recvMsg()));

            }
           );
}

void Widget::recvMsg(void)
{
    QDataStream in(tcpsocket);
    in.setVersion(QDataStream::Qt_4_6);     //设置数据流版本，这里要和服务器端相同
    msg->unpackageMsg(in);
    deal.judge_operator(msg);

    sendMessage();
}

void Widget::sendMessage(void)
{
    //用于暂存我们要发送的数据
    QByteArray block;
    block = *(msg->packageMsg());
    tcpsocket->write(block);
    cout <<"发送成功";
}

Widget::~Widget()
{
    delete ui;
}
