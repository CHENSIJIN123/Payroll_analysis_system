#include "administratordisplay.h"
#include "ui_administratordisplay.h"
#include <QMessageBox>
#include <QDebug>
#include "pie.h"

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
AdministratorDisplay::AdministratorDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdministratorDisplay)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
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
    QString employee = ui->le_name->text() + "/" + ui->le_job_id->text()+ "/" +
    ui->le_post->text() + "/" + ui->le_entry_time->text() + "/" + ui->le_turn_time->text()+"/"+
    ui->le_education->text() + "/"+  ui->le_basic_wage->text() + "/" + ui->le_transport->text()+"/"+
    ui->le_meal->text() + "/"+ ui->le_house->text()+ "/"+ui->le_pwd->text()+ "/"+ui->le_department->text();
    cout << employee;

    emit ModifyEmployeeInformationSubmission(employee);
}

/*
 * 提示是否 提交员工修改信息成功
*/
void AdministratorDisplay::dealtellTheAdminCommitSucceed(QString info)
{
    if(info == "ok")
    {
        QMessageBox::information(this,"修改员工信息","修改员工信息成功",QMessageBox::Ok);   //输出提示信息
    }else{
        QMessageBox::information(this,"修改员工信息","修改员工信息失败，请重试",QMessageBox::Ok);   //输出提示信息
    }
}

/*
 * 增加员工信息
*/
void AdministratorDisplay::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/*
 * 提交 增加员工信息
*/
void AdministratorDisplay::on_pb_inrease_employee_clicked()
{
    if(ui->lb_name_2->text() == "" || ui->lb_job_id_2->text() == "")
    {
        QMessageBox::information(this,"增加员工信息","姓名与工号不能为空",QMessageBox::Ok);   //输出提示信息
    }
    QString employee = ui->le_name_2->text() + "/" + ui->le_job_id_2->text()+ "/" +
    ui->le_post_2->text() + "/" + ui->le_entry_time_2->text() + "/" + ui->le_turn_time_2->text()+"/"+
    ui->le_education_2->text() + "/"+  ui->le_basic_wage_2->text() + "/" + ui->le_transport_2->text()+"/"+
    ui->le_meal_2->text() + "/"+ ui->le_house_2->text()+ "/"+ui->le_pwd_2->text()+ "/"+ui->le_department_2->text();
    cout << employee;

    emit AddEmployeeInformation(employee);
}

/*
 * 收到服务器的插入成功信息
*/
void AdministratorDisplay::dealtellTheAdminInsertSucceed(QString info)
{
    cout << info;
    if(info == "ok")
        QMessageBox::information(this,"增加员工信息","添加员工信息成功",QMessageBox::Ok);   //输出提示信息
    else
        QMessageBox::information(this,"增加员工信息","添加员工信息失败，请重新录入信息",QMessageBox::Ok);   //输出提示信息

    ui->le_name_2->clear();
    ui->le_job_id_2->clear();
    ui->le_post_2->clear();
    ui->le_entry_time_2->clear();
    ui->le_turn_time_2->clear();
    ui->le_education_2->clear();
    ui->le_basic_wage_2->clear();
    ui->le_transport_2->clear();
    ui->le_meal_2->clear();
    ui->le_house_2->clear();
    ui->le_pwd_2->clear();
    ui->le_department_2->clear();
}

void AdministratorDisplay::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void AdministratorDisplay::on_pb_delete_clicked()
{
    if(ui->le_delete_name->text()=="")
        QMessageBox::information(this,"删除员工信息","请输入删除的员工名字",QMessageBox::Ok);   //输出提示信息
    else
        emit DeleteEmployeeInfomation(ui->le_delete_name->text());
}

void AdministratorDisplay::dealtellTheAdminDeleteSucceed(QString info)
{
    if(info == "ok")
        QMessageBox::information(this,"删除员工信息","删除员工信息成功",QMessageBox::Ok);   //输出提示信息
    else
        QMessageBox::information(this,"删除员工信息","删除员工信息失败，请重新输入员工名字",QMessageBox::Ok);   //输出提示信息
    ui->le_delete_name->clear();
}

/*
 * 员工薪资查看按钮按下 处理事件
*/
void AdministratorDisplay::on_pb_watch_clicked()
{
    if(ui->le_search_name->text()== "")
    {
        QMessageBox::information(this,"查看员工薪资","员工名字不能为空",QMessageBox::Ok);   //输出提示信息
    }else{

        QString name = ui->le_search_name->text();
        QString choose_way = ui->cb_choose_view_way->currentText();
        QStringList tmp_year = ui->cb_choose_year->currentText().split("年");
        QStringList tmp_month = ui->cb_choose_month->currentText().split("月");
        QString search_info = tmp_year[0]+"/"+tmp_month[0] + "/" + name;

        if(choose_way == "表格显示")
        {
            ui->stackedWidget_3->setCurrentIndex(0);
            cout << search_info;
        }else{
            ui->stackedWidget_3->setCurrentIndex(1);
        }
        emit admin_table_show_salary_info(search_info);
    }
}

void AdministratorDisplay::dealtellTheEmployeeShowSalaryInfo(QString info)
{
  //  QString employee_info = info;
    if(ui->stackedWidget_3->currentIndex() == 0)
        ui->te_salary_info->setText(info);
    if(ui->stackedWidget_3->currentIndex() == 1)
    {
        QStringList salary_info = info.split("/");


        QVector<SectorInfo> result;

        SectorInfo info1;
        info1.description = "五险一金";
        info1.percent = (salary_info[14].toDouble()/salary_info[7].toDouble())*100;
        cout << info1.percent;
        result.push_back(info1);

        info1.description = "扣除税额";
        info1.percent = (salary_info[15].toDouble()/salary_info[7].toDouble())*100;
        cout << info1.percent;
        result.push_back(info1);

        info1.description = "缺勤扣除";
        info1.percent = (salary_info[16].toDouble()/salary_info[7].toDouble())*100;
        cout << info1.percent;
        result.push_back(info1);

        info1.description = "绩效奖金";
        info1.percent = (salary_info[17].toDouble()/salary_info[7].toDouble())*100;
        cout << info1.percent;
        result.push_back(info1);

        info1.description = "实发工资";
        info1.percent = (salary_info[18].toDouble()/salary_info[7].toDouble())*100;
        cout << info1.percent;
        result.push_back(info1);

        ui->w_admin_pie->setData(result);
    }
}
