#include "employeedisplay.h"
#include "ui_employeedisplay.h"

EmployeeDisplay::EmployeeDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeDisplay)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

EmployeeDisplay::~EmployeeDisplay()
{
    delete ui;
}

/*
 * 函数功能:查看一个月的工资的详细信息
*/
void EmployeeDisplay::on_pb_view_one_month_info_clicked()
{
    //跳到stackedwidget的第二页
    ui->stackedWidget->setCurrentIndex(1);
}

void EmployeeDisplay::on_pb_view_multi_month_info_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
