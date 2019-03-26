#include "employeedisplay.h"
#include "ui_employeedisplay.h"
#include <QDebug>
#include <QString>
#include "pie.h"

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"

EmployeeDisplay::EmployeeDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeDisplay)
{
    ui->setupUi(this);
    ui->show_way->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
}

EmployeeDisplay::~EmployeeDisplay()
{
    delete ui;
}

void EmployeeDisplay::dealtellTheEmployeeShowSalaryInfo(QString info)
{
    if(ui->show_way->currentIndex() == 0)
        ui->textEdit->setText(info);
    if(ui->show_way->currentIndex() == 1)
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

        ui->w_pie_view->setData(result);
    }
}
/*
 * 以柱状图得形式显示多个月工资
*/
void EmployeeDisplay::dealtellTheEmployeeShowMultiSalaryInfo(QString info)
{
    ui->w_his_view->SetMaxValue(10000);
    QStringList salary_info = info.split("/");
    for(int i = 0;i < salary_info.size() - 1;i++)
    {
        QStringList month_salary = salary_info[i].split("*");
        ui->w_his_view->AddItem(month_salary[0]+"月",month_salary[1].toDouble());
    }
}

/*
 * 函数功能:查看一个月的工资的详细信息
*/
void EmployeeDisplay::on_pb_view_one_month_info_clicked()
{
    //跳到stackedwidget的第二页
    ui->stackedWidget->setCurrentIndex(1);
}

/*
 * 函数功能：查看多个月的比较情况
*/
void EmployeeDisplay::on_pb_view_multi_month_info_clicked()
{
  ui->stackedWidget->setCurrentIndex(2);
}

/*
 * 函数功能：当点下tar键时，显示能够选择查看方式的那一页
*/
void EmployeeDisplay::on_tabWidget_tabBarClicked(int index)
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*
 * 函数功能：查看按钮按下
*/
void EmployeeDisplay::on_pb_watch_clicked()
{
    QString choose_way = ui->cb_choose_view_way->currentText();
    QStringList tmp_year = ui->cb_choose_year->currentText().split("年");
    QStringList tmp_month = ui->cb_choose_month->currentText().split("月");
    QString search_info = tmp_year[0]+"/"+tmp_month[0];

    if(choose_way == "表格显示")
    {
        ui->show_way->setCurrentIndex(0);
        cout << search_info;
    }else{
        ui->show_way->setCurrentIndex(1);
    }
    emit table_show_salary_info(search_info);
}

/*
 * 函数功能:在多月查询按钮按下后，向服务器端发送消息请求获得内容
*/
void EmployeeDisplay::on_pb_search_clicked()
{
    QStringList tmp_year = ui->cb_year_choose->currentText().split("年");
    cout << tmp_year[0];
    //发送查询多月得工资信息
    emit show_multi_salary_info(tmp_year[0]);

}
