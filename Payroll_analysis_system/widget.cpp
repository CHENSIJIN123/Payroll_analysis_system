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

    ui->lb_time_show->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));

    my_logicdeal = new LogicDeal();   //创建逻辑处理对象
    employee_display = new EmployeeDisplay();    //创建普通用户对象
    admin_display = new AdministratorDisplay();    //创建管理员对象

    mytimer = new QTimer(this);
    mytimer->start(1000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(dealtime()));
    connect(my_logicdeal,SIGNAL(tellTheWidgetIfItCanLoginSuccess(bool)),this,SLOT(dealtellTheWidgetIfItCanLoginSuccess(bool)));
    connect(my_logicdeal,SIGNAL(tellTheWidgetIfItCanPunchSuccess(bool)),this,SLOT(dealtellTheWidgetIfItCanPunchSuccess(bool)));
    connect(employee_display,SIGNAL(table_show_salary_info(QString)),my_logicdeal,SLOT(dealtable_show_salary_info(QString)));
    connect(my_logicdeal,SIGNAL(tellTheEmployeeShowSalaryInfo(QString)),employee_display,SLOT(dealtellTheEmployeeShowSalaryInfo(QString)));
    connect(employee_display,SIGNAL(show_multi_salary_info(QString)),my_logicdeal,SLOT(dealshow_multi_salary_info(QString)));
    connect(my_logicdeal,SIGNAL(tellTheEmployeeShowMultiSalaryInfo(QString)),employee_display,SLOT(dealtellTheEmployeeShowMultiSalaryInfo(QString)));
    connect(employee_display,SIGNAL(SalaryRankingView()),my_logicdeal,SLOT(dealSalaryRankingView()));
    connect(my_logicdeal,SIGNAL(tellTheEmployeeShowSalaryRanking(QString)),employee_display,SLOT(dealtellTheEmployeeShowSalaryRanking(QString)));
    connect(admin_display,SIGNAL(admin_change_employee_info(QString)),my_logicdeal,SLOT(dealadmin_change_employee_info(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminEmployeeInfo(QString)),admin_display,SLOT(dealtellTheAdminEmployeeInfo(QString)));
    connect(admin_display,SIGNAL(ModifyEmployeeInformationSubmission(QString)),my_logicdeal,SLOT(dealModifyEmployeeInformationSubmission(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminCommitSucceed(QString)),admin_display,SLOT(dealtellTheAdminCommitSucceed(QString)));
    connect(admin_display,SIGNAL(AddEmployeeInformation(QString)),my_logicdeal,SLOT(dealAddEmployeeInformation(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminInsertSucceed(QString)),admin_display,SLOT(dealtellTheAdminInsertSucceed(QString)));
    connect(admin_display,SIGNAL(DeleteEmployeeInfomation(QString)),my_logicdeal,SLOT(dealDeleteEmployeeInfomation(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminDeleteSucceed(QString)),admin_display,SLOT(dealtellTheAdminDeleteSucceed(QString)));
    connect(admin_display,SIGNAL(admin_table_show_salary_info(QString)),my_logicdeal,SLOT(deal_Admin_table_show_salary_info(QString)));
    connect(my_logicdeal,SIGNAL(tellTheEmployeeShowSalaryInfo(QString)),admin_display,SLOT(dealtellTheEmployeeShowSalaryInfo(QString)));
    connect(admin_display,SIGNAL(signal_count_salary_time(QString)),my_logicdeal,SLOT(slot_count_salary_time(QString)));
    connect(admin_display,SIGNAL(signal_search_attendance(QString)),my_logicdeal,SLOT(slot_search_attendance(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminAttendanceRate(QString)),admin_display,SLOT(dealtellTheAdminAttendanceRate(QString)));
    connect(admin_display,SIGNAL(signal_search_attendance_rate(QString)),my_logicdeal,SLOT(slot_search_attendance_rate(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminAttendancePieRate(QString)),admin_display,SLOT(dealtellTheAdminAttendancePieRate(QString)));
    connect(employee_display,SIGNAL(show_employee_attendance_table_view(QString)),my_logicdeal,SLOT(deal_show_employee_attendance_table_view(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminAttendanceRate(QString)),employee_display,SLOT(slottellTheAdminAttendanceRate(QString)));
    connect(employee_display,SIGNAL(show_employee_attendace_pie_view(QString)),my_logicdeal,SLOT(dealshow_employee_attendace_pie_view(QString)));
    connect(my_logicdeal,SIGNAL(tellTheAdminAttendancePieRate(QString)),employee_display,SLOT(deal_tellTheAdminAttendancePieRate(QString)));
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
    }else{
        my_logicdeal->ifTheAccountPswIsCorrect(ui->le_name->text(),ui->le_psw->text());
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
