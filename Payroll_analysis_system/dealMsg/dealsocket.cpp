#include "dealsocket.h"
#include <QDataStream>
#include <iostream>
#include <QDebug>
#include "logicdeal.h"

using namespace  std;
QTcpSocket *dealSocket::tcpsocket;

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
dealSocket::dealSocket(QWidget *parent):QWidget(parent)
{

    tcpsocket = new QTcpSocket(this);
    tcpsocket->abort();
    tcpsocket->connectToHost("localhost",8888);
    cout <<"试图连接"<<endl;
    connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(dealmsg()));    //信息来和信息处理的信号和槽
}

void dealSocket::dealmsg(void)
{
    QDataStream in(tcpsocket);
    in.setVersion(QDataStream::Qt_4_6);     //设置数据流版本，这里要和服务器端相同
    msg.unpackageMsg(in);
    //cout << msg->getMsgContent();
    LogicDeal::deal->judge_operator(&msg);
}
