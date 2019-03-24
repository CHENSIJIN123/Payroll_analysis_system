#include "widget.h"
#include "ui_widget.h"
#include <QDateTime>
#include <QDebug>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    cout << "hello widget";

    ui->lb_time_show->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));

    my_logicdeal = new LogicDeal();
    mytimer = new QTimer(this);


    cout << "sdadasdadada";
    //connect(deal,&dealMsg::returnToLoginButtonResult,this,&Widget::dealreturnToLoginButtonResult);
   /* connect(deal,&dealMsg::returnToLoginButtonResult,this,
                [=]()
                {
                    cout << "1111111111";
                }
                );*/
    mytimer->start(1000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(dealtime()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::dealtime()
{
    ui->lb_time_show->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));
}

void Widget::on_pb_login_clicked()  //登录按钮按下
{
    if(ui->le_name->text()=="")
    {
            ui->le_name->setPlaceholderText("请输入账号");

    }
    if(ui->le_psw->text()=="")
    {
       ui->le_psw->setPlaceholderText("请输入密码");
    }
    else{
        my_logicdeal->ifTheAccountPswIsCorrect(ui->le_name->text(),ui->le_psw->text());
    }
}


