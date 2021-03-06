#include "dealmsg.h"
#include <QDebug>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
QString dealMsg::salary_count_time="";
dealMsg::dealMsg()
{

}

void dealMsg::judge_operator(MyProtocol *msg)
{

    switch(msg->getMsgOperate())
    {
        case  LOGIN:                    //登录
        {
            judgeAccountPsw(msg);
            break;
         }
        case PUNCH_THE_CLOCK:           //打卡
        {
            judgeAccountPswAndPunch(msg);
            break;
        }
        case WATCH_PAYROLL:             //查看工资
        {
            switch(msg->getMsgStatus())
            {
                case EMPLOYEE:
                {
                    switch(msg->getMsgCommand())
                    {
                        case TABLE_DISPLAY:
                        {
                            watch_table_display(msg);
                            break;
                        }
                        case HISTOGRAM_DISPLAY:
                        {
                            watch_multi_display(msg);
                            break;
                        }
                    }
                    break;
                }
                case ADMINISTRATOR:
                {
                    switch(msg->getMsgCommand())
                    {
                        case TABLE_DISPLAY:
                        {
                            Admin_watch_table_display(msg);
                            break;
                        }
                    }
                    break;
                }
            }

            break;
        }
        case WATCH_ATTENDANCE_RATE:     //查看考勤率
        {
            switch(msg->getMsgCommand())
            {
                case TABLE_DISPLAY:
                {
                    if(msg->getMsgStatus() == ADMINISTRATOR)
                        watch_attendance_rate_view(msg);
                    if(msg->getMsgStatus() == EMPLOYEE)
                        watch_employee_attendance_rate_view(msg);
                    break;
                }
                case PIE_CHART_DISPLAY:
                {
                    if(msg->getMsgStatus() == ADMINISTRATOR)
                        watch_attendance_rate_pie_view(msg);
                    if(msg->getMsgStatus() == EMPLOYEE)
                        watch_employee_attendance_rate__pie_view(msg);
                    break;
                }
            }
            break;
        }
        case COMPETITIVE_ANALYSIS:
        {
            switch(msg->getMsgCommand())
            {
                case VIEW_RANKING:
                {
                    watch_SalaryRankingView(msg);
                    break;
                }
            }
        }
        case SET_THE_DATE_OF_SALARY:    //设置工资结算日期
        {
            set_date_of_salary_count(msg);
            break;
        }
        case MODIFY_EMPLOYEE_INFO:      //修改员工信息
        {
            switch(msg->getMsgCommand())
            {
                case MODIFY_EMPLOYEE:
                {
                    get_employee_info(msg);
                    break;
                }
                case COMMIT_MODIFY_EMPLOYEE:
                {
                    commit_modify_employee_info(msg);
                    break;
                }
                case ADD_EMPLOYEE:
                {
                    add_employee_info(msg);
                    break;
                }
                case DEL_EMPLOYEE:
                {
                    delete_employee_info(msg);
                    break;
                }
            }
            break;
        }
        case DEPARTMENT_SALARY_COMPARE:{}
    }
}

/*
 * 员工自己查看考勤率
*/
void dealMsg::watch_employee_attendance_rate__pie_view(MyProtocol *msg)
{
    QString result = db.EmployeeQueryWatchAttendanceRatePie(msg->getMsgName(),msg->getMsgContent());
    cout << result;
    msg->setMsgContent(result);
}

/*
 * 员工自己查看考勤情况
*/
void dealMsg::watch_employee_attendance_rate_view(MyProtocol *msg)
{
    QString result = db.EmployeeQueryWatchAttendanceRate(msg->getMsgName(),msg->getMsgContent());
    cout << result;
    msg->setMsgContent(result);
}

/*
 * 管理员查看员工某月考勤率
*/
void dealMsg::watch_attendance_rate_pie_view(MyProtocol *msg)
{
    QString result = db.AdminQueryWatchAttendanceRatePie(msg->getMsgContent());
    cout << result;
    msg->setMsgContent(result);
}

/*
 * 管理员查看员工考勤情况
*/
void dealMsg::watch_attendance_rate_view(MyProtocol *msg)
{
    QString result = db.AdminqueryWatchAttendanceRate(msg->getMsgContent());
    cout << result;
    msg->setMsgContent(result);
}

/*
 * 管理员设置工资结算日期
*/
void dealMsg::set_date_of_salary_count(MyProtocol *msg)
{
    salary_count_time = msg->getMsgContent();
}

/*
 * 管理员查看 员工薪资信息
*/
void dealMsg::Admin_watch_table_display(MyProtocol *msg)
{
    QString info = db.AdminqueryWatchTableDisplay(msg->getMsgContent());
    msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

/*
 * 删除员工信息，进行员工信息表的更新
*/
void dealMsg::delete_employee_info(MyProtocol *msg)
{
    QString info = db.delete_employee_infomation(msg->getMsgContent());
    msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

/*
 * 添加员工信息,进行员工信息表的更新
*/
void dealMsg::add_employee_info(MyProtocol *msg)
{
     QString info = db.add_employee_infomation(msg->getMsgContent());
     msg->setMsgContent(info);
     cout << msg->getMsgContent();
}

/*
 * 向数据库中进行update操作，进行员工信息表得更新
*/
void dealMsg::commit_modify_employee_info(MyProtocol *msg)
{
    QString info = db.update_employee_info(msg->getMsgContent());
    msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

/*
 * 获得员工信息，让管理员进行修改
*/
void dealMsg::get_employee_info(MyProtocol *msg)
{
    QString info = db.query_employee_info(msg->getMsgName());
    if(info == "no")
        msg->setMsgContent("no");
    else
        msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

/*
 * 查看薪资排名
*/
void dealMsg::watch_SalaryRankingView(MyProtocol *msg)
{
    QString info = db.querywatch_SalaryRankingView(msg->getMsgName());
    if(info == "no")
        msg->setMsgContent("no");
    else
        msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

void dealMsg::watch_multi_display(MyProtocol *msg)
{
    QString info = db.queryWatchMultiMonthDisplay(msg->getMsgName(),msg->getMsgContent());
    if(info == "no")
        msg->setMsgContent("no");
    else
        msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

void dealMsg::watch_table_display(MyProtocol *msg)
{
    QString info;
    info = db.queryWatchTableDisplay(msg->getMsgName(),msg->getMsgContent());
    if(info == "no")
        msg->setMsgContent("no");
    else
        msg->setMsgContent(info);
    cout << msg->getMsgContent();
}

void dealMsg::judgeAccountPswAndPunch(MyProtocol *msg)  //测试账号和密码是否正确并且打卡
{
    result = db.queryAccountPswAndPunch(msg->getMsgName(),msg->getMsgContent());
    if(result)
        msg->setMsgContent("ok");
    else
        msg->setMsgContent("no");
    cout << msg->getMsgContent();
}

void dealMsg::judgeAccountPsw(MyProtocol *msg)
{
    result = db.queryAccountPsw(msg->getMsgName(),msg->getMsgContent());
    cout<<result;
    if(result == true)
        msg->setMsgContent("ok");
    else
        msg->setMsgContent("no");
    cout <<msg->getMsgContent();
}
