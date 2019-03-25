#include "widget.h"
#include "ui_widget.h"
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    cout << "hello widget";

    ui->lb_time_show->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));

    my_logicdeal = new LogicDeal();
    employee_display = new EmployeeDisplay();
    admin_display = new AdministratorDisplay();

    mytimer = new QTimer(this);
    mytimer->start(1000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(dealtime()));
    connect(my_logicdeal,SIGNAL(tellTheWidgetIfItCanLoginSuccess(bool)),this,SLOT(dealtellTheWidgetIfItCanLoginSuccess(bool)));
    connect(my_logicdeal,SIGNAL(tellTheWidgetIfItCanPunchSuccess(bool)),this,SLOT(dealtellTheWidgetIfItCanPunchSuccess(bool)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::dealtellTheWidgetIfItCanPunchSuccess(bool isPunch)
{
    if(isPunch)
    {
        QMessageBox::information(this,"打卡","打卡成功",QMessageBox::Ok);   //输出提示信息
        //显示打卡成功提示框
    }else{
        ui->le_name->setText("");
        ui->le_psw->setText("");
        QMessageBox::information(this,"打卡","打卡失败，请重新输入账号和密码",QMessageBox::Ok);   //输出提示信息
        //显示打卡失败提示框
    }
}

void Widget::dealtellTheWidgetIfItCanLoginSuccess(bool islogin)
{
    if(islogin)
    {
           //登录后进入新的界面
        employee_display->show();
        this->close();
    }else{
        ui->le_name->setText("");
        ui->le_psw->setText("");
        QMessageBox::information(this,"登录","登录失败，请重新输入账号和密码",QMessageBox::Ok);   //输出提示信息
        //通知重新输入正确的账号和密码
    }
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
    if(ui->le_name->text() == "123")  //如果是管理员的话，显示管理员界面
    {
        if(ui->le_psw->text() == "123")
        {
            admin_display->show();
            this->close();
        }else
        {
            QMessageBox::information(this,"登录","登录失败，请重新管理员正确的密码",QMessageBox::Ok);   //输出提示信息
        }
    }
}



void Widget::on_pb_punch_clicked()   //打卡按钮按下
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
        my_logicdeal->ifTheAccountPswIsCorrectAndPunch(ui->le_name->text(),ui->le_psw->text(),ui->lb_time_show->text());
    }
}
