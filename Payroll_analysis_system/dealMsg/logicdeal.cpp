#include "logicdeal.h"
#include <QDebug>
#include <QByteArray>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
dealMsg *LogicDeal::deal;
LogicDeal::LogicDeal(QWidget *parent) :
    QWidget(parent)
{
    msg = new MyProtocol();
    my_sock = new dealSocket();
    deal = new dealMsg();
    connect(deal,SIGNAL(returnToLoginButtonResult(QString)),this,SLOT(dealreturnToLoginButtonResult(QString)));
    connect(deal,SIGNAL(returnToLoginButtonResultPunch(QString)),this,SLOT(dealreturnToLoginButtonResultPunch(QString)));
    connect(deal,SIGNAL(signal_watch_table_display(QString)),this,SLOT(slot_watch_table_display(QString)));
    connect(deal,SIGNAL(signal_watch_multi_month_display(QString)),this,SLOT(slot_watch_multi_month_display(QString)));
    connect(deal,SIGNAL(signal_watchSalaryRankingView(QString)),this,SLOT(slot_watchSalaryRankingView(QString)));
    connect(deal,SIGNAL(signal_change_the_employee_info(QString)),this,SLOT(slot_change_the_employee_info(QString)));
    connect(deal,SIGNAL(signal_commit_modify_employee_info(QString)),this,SLOT(slot_commit_modify_employee_info(QString)));
    connect(deal,SIGNAL(signal_add_employee_information(QString)),this,SLOT(slot_add_employee_information(QString)));
    connect(deal,SIGNAL(signal_delete_employee_information(QString)),this,SLOT(slot_delete_employee_information(QString)));
    connect(deal,SIGNAL(signal_watch_attendance_rate_view(QString)),this,SLOT(slot_watch_attendance_rate_view(QString)));
}

void LogicDeal::slot_watch_attendance_rate_view(QString result)
{
    emit tellTheAdminAttendanceRate(result);
}

void LogicDeal::slot_delete_employee_information(QString info)
{
    emit tellTheAdminDeleteSucceed(info);
}

void LogicDeal::slot_add_employee_information(QString info)
{
    emit tellTheAdminInsertSucceed(info);
}

void LogicDeal::slot_commit_modify_employee_info(QString info)
{
    emit tellTheAdminCommitSucceed(info);
}

void LogicDeal::slot_change_the_employee_info(QString employee_info)
{
    emit tellTheAdminEmployeeInfo(employee_info);
}

void LogicDeal::slot_watch_multi_month_display(QString info)
{
    emit tellTheEmployeeShowMultiSalaryInfo(info);
}

void LogicDeal::slot_watch_table_display(QString result)
{
    emit tellTheEmployeeShowSalaryInfo(result);
}

/*
 * 获得薪资排名的处理函数
*/
void LogicDeal::slot_watchSalaryRankingView(QString info)
{
    emit tellTheEmployeeShowSalaryRanking(info);
}

/*
 * 槽函数： 判断账号和密码是否与数据库中的值匹配
 * 传入参数： 从服务器端收到的值： ok/no   ok表示该账号和密码是正确的，no表示 不正确或者是账号不存在
*/
void LogicDeal::dealreturnToLoginButtonResult(QString result)
{
   // cout << "槽函数";
    if(result == "ok")
    {
        //如果账号和密码都正确 则进入登录后的界面
        emit tellTheWidgetIfItCanLoginSuccess(true);

    }
    if(result == "no")
    {
        emit tellTheWidgetIfItCanLoginSuccess(false);
    }
}

/*
 * 槽函数： 判断账号和密码是否与数据库中的值匹配并已打卡
 * 传入参数： 从服务器端收到的值： ok/no   ok表示该账号和密码是正确的并且打卡，no表示 不正确或者是账号不存在
*/
void LogicDeal::dealreturnToLoginButtonResultPunch(QString result)
{
    if(result == "ok")
    {
        //如果账号和密码都正确 并且打卡成功
        emit tellTheWidgetIfItCanPunchSuccess(true);

    }
    if(result == "no")
    {
        emit tellTheWidgetIfItCanPunchSuccess(false);
    }
}

/*
 * 登录时判断账号和密码是否正确
 * 参数：账号、密码
 * 返回值：true:正确
 *       false:错误
*/
bool LogicDeal::ifTheAccountPswIsCorrect(QString account, QString password)
{
    cout << account << password;
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(account.toUtf8());
    name  = account;
    msg->setMsgOperate(LOGIN);
    msg->setMsgCommand(COMMAND_NONE);
    msg->setMsgContent(password.toUtf8());
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 登录时判断账号和密码是否正确并且打卡
 * 参数：账号、密码
 * 返回值：true:正确
 *       false:错误
*/
bool LogicDeal::ifTheAccountPswIsCorrectAndPunch(QString account, QString password,QString time)
{
    QString pwdAndtime = password+"/"+time;
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(account.toUtf8());
    name  = account;
    msg->setMsgOperate(PUNCH_THE_CLOCK);
    msg->setMsgCommand(COMMAND_NONE);
    msg->setMsgContent(pwdAndtime.toUtf8());
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 处理前端请求得多月柱状图显示，给服务器端发送消息，请求查询
*/
void LogicDeal::dealshow_multi_salary_info(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(WATCH_PAYROLL);
    msg->setMsgCommand(HISTOGRAM_DISPLAY);
    msg->setMsgContent(info);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 处理表格显示的前端请求，给服务器端发送消息，请求查询
*/
void LogicDeal::dealtable_show_salary_info(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(WATCH_PAYROLL);
    msg->setMsgCommand(TABLE_DISPLAY);
    msg->setMsgContent(info);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 管理员查看员工薪资信息
*/
void LogicDeal::deal_Admin_table_show_salary_info(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();
    cout << info;
    msg->setMsgOperate(WATCH_PAYROLL);
    msg->setMsgCommand(TABLE_DISPLAY);
    msg->setMsgContent(info);
    msg->setMsgStatus(ADMINISTRATOR);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 薪资排名查看
*/
void LogicDeal::dealSalaryRankingView(void)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(COMPETITIVE_ANALYSIS);
    msg->setMsgCommand(VIEW_RANKING);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 得到员工信息
*/
void LogicDeal::dealadmin_change_employee_info(QString employee_name)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(employee_name.toUtf8());
    msg->setMsgOperate(MODIFY_EMPLOYEE_INFO);
    msg->setMsgCommand(MODIFY_EMPLOYEE);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 提交给服务器 修改后得员工信息
*/
void LogicDeal::dealModifyEmployeeInformationSubmission(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(MODIFY_EMPLOYEE_INFO);
    msg->setMsgCommand(COMMIT_MODIFY_EMPLOYEE);
    msg->setMsgContent(info);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

/*
 * 提交服务器，添加员工信息
*/
void LogicDeal::dealAddEmployeeInformation(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(MODIFY_EMPLOYEE_INFO);
    msg->setMsgCommand(ADD_EMPLOYEE);
    msg->setMsgContent(info);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

void LogicDeal::dealDeleteEmployeeInfomation(QString info)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(MODIFY_EMPLOYEE_INFO);
    msg->setMsgCommand(DEL_EMPLOYEE);
    msg->setMsgContent(info);
    msg->setMsgStatus(EMPLOYEE);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

void LogicDeal::slot_count_salary_time(QString time)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(name.toUtf8());
    msg->setMsgOperate(SET_THE_DATE_OF_SALARY);
    msg->setMsgContent(time);
    msg->setMsgStatus(ADMINISTRATOR);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}

void LogicDeal::slot_search_attendance(QString cond)
{
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgOperate(WATCH_ATTENDANCE_RATE);
    msg->setMsgCommand(TABLE_DISPLAY);
    msg->setMsgContent(cond);
    msg->setMsgStatus(ADMINISTRATOR);
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}





