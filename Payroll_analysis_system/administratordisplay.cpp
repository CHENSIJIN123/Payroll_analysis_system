#include "administratordisplay.h"
#include "ui_administratordisplay.h"
#include <QMessageBox>

AdministratorDisplay::AdministratorDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdministratorDisplay)
{
    ui->setupUi(this);
}

AdministratorDisplay::~AdministratorDisplay()
{
    delete ui;
}

void AdministratorDisplay::dealtellTheAdminEmployeeInfo(QString employee_info)
{
    QStringList employee = employee_info.split("/");
    ui->le_name->setText(employee[0]);
    ui->le_job_id->setText(employee[1]);
    ui->le_post->setText(employee[2]);
    ui->le_entry_time->setText(employee[3]);
    ui->le_turn_time->setText(employee[4]);
    ui->le_education->setText(employee[5]);
    ui->le_basic_wage->setText(employee[6]);
    ui->le_transport->setText(employee[7]);
    ui->le_meal->setText(employee[8]);
    ui->le_house->setText(employee[9]);
    ui->le_pwd->setText(employee[10]);
    ui->le_department->setText(employee[11]);
}

/*
 * 修改员工信息按钮按下
*/
void AdministratorDisplay::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/*
 * 修改 按钮按下处理 修改员工信息的操作
*/
void AdministratorDisplay::on_pb_choose_is_change_clicked()
{
    if(ui->le_choose_employee_name->text() == "")
    {
        QMessageBox::information(this,"修改员工信息","所修改员工姓名不能为空",QMessageBox::Ok);   //输出提示信息
    }else
    {
        emit admin_change_employee_info(ui->le_choose_employee_name->text());
    }
}

/*
 * 提交按钮按下
*/
void AdministratorDisplay::on_pb_commit_clicked()
{
    QStringList employee = ui->le_name->text() + "/" + ui->le_job_id->text()+
    ui->le_post->text() + "/" + ui->le_entry_time->text() + "/" + ui->le_turn_time->text()+"/"+
    ui->le_education->text() + "/"+  ui->le_basic_wage->text() + "/" + ui->le_transport->text()+"/"+
    ui->le_meal->text() + "/"+ ui->le_house->text()+ "/"+ui->le_pwd->text()+ "/"+ui->le_department->text();

    emit
}
