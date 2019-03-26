#include "dealmsg.h"
#include <QDebug>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
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
        case WATCH_ATTENDANCE_RATE:     //查看考勤率
        case SET_THE_DATE_OF_SALARY:    //设置工资结算日期
        case MODIFY_EMPLOYEE_INFO:      //修改员工信息
        case DEPARTMENT_SALARY_COMPARE:{}

    }
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
