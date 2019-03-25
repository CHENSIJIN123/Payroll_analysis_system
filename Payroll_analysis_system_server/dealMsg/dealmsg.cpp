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
        case WATCH_ATTENDANCE_RATE:     //查看考勤率
        case SET_THE_DATE_OF_SALARY:    //设置工资结算日期
        case MODIFY_EMPLOYEE_INFO:      //修改员工信息
        case DEPARTMENT_SALARY_COMPARE:{}

    }
}

void dealMsg::judgeAccountPswAndPunch(MyProtocol *msg)  //测试账号和密码是否正确并且打卡
{
    result = db.queryAccountPswAndPunch(msg->getMsgName(),msg->getMsgContent());
    if(result)
    {
        msg->setMsgContent("ok");
    }else
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
