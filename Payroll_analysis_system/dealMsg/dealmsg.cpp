#include "dealmsg.h"
#include<QDebug>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
dealMsg::dealMsg(QWidget *parent):QWidget(parent)
{

}


void dealMsg::judge_operator(MyProtocol *msg)
{
    switch(msg->getMsgOperate())
    {
        case  LOGIN:                    //登录
        {
            JudgeAccountPsw(msg);
            break;
        }       
        case PUNCH_THE_CLOCK:           //打卡
        {
            JudgeAccountPsw(msg);
             break;
        }
        case WATCH_PAYROLL:             //查看工资
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
                    watch_multi_month_display(msg);
                }
            }
            break;
        }
        case WATCH_ATTENDANCE_RATE:     //查看考勤率
        break;
        case COMPETITIVE_ANALYSIS:      //竞争力分析
        break;
        case SET_THE_DATE_OF_SALARY:    //设置工资结算日期
        break;
        case MODIFY_EMPLOYEE_INFO:      //修改员工信息
        break;
        case DEPARTMENT_SALARY_COMPARE:{}
        break;
    }
}

void dealMsg::watch_multi_month_display(MyProtocol *msg)
{
    cout << msg->getMsgContent();
    emit signal_watch_multi_month_display(msg->getMsgContent());
}

void dealMsg::watch_table_display(MyProtocol *msg)
{
    cout << msg->getMsgContent();
    emit signal_watch_table_display(msg->getMsgContent());
}

void dealMsg::JudgeAccountPsw(MyProtocol *msg)
{
    cout << msg->getMsgContent();
    if(msg->getMsgOperate() == LOGIN)
        emit returnToLoginButtonResult(msg->getMsgContent());
    if(msg->getMsgOperate() == PUNCH_THE_CLOCK)
        emit returnToLoginButtonResultPunch(msg->getMsgContent());

}
