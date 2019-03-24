#ifndef MYPROTOCOL_H
#define MYPROTOCOL_H
#include <QByteArray>
#include <QString>

#define OPERATE_NONE 0   //无操作
#define COMMAND_NONE 0   //无命令
#define LENGTH_NONE 0    //无长度
#define STATU_NONE 0     //无身份信息

enum STATUS{
    ADMINISTRATOR = 0,   //管理员身份
    EMPLOYEE             //员工身份
};

enum OPERATE{
    LOGIN = 0,          //登录
    PUNCH_THE_CLOCK,     //打卡
    WATCH_PAYROLL,       //查看工资
    WATCH_ATTENDANCE_RATE, //查看考勤率
    COMPETITIVE_ANALYSIS,  //竞争力分析
    SET_THE_DATE_OF_SALARY, //设置工资结算日期
    MODIFY_EMPLOYEE_INFO,  //修改员工信息
    DEPARTMENT_SALARY_COMPARE  //部门工资比较
};

enum LOGIN_COMMAND{
    CHANGE_THE_PSW //修改密码
};

enum WATCH_PAYROLL_COMMAND{
    TABLE_DISPLAY,  //表格显示
    HISTOGRAM_DISPLAY, //柱状图显示
    PIE_CHART_DISPLAY  //饼状图显示
};


enum COMPETITIVE_ANALYSIS_COMMAND{
    VIEW_RANKING,   //查看排名
    VIEW_DIFFERENCE  //查看与均值的差
};

enum MODIFY_EMPLOYEE_INFO_COMMAND{
    ADD_EMPLOYEE,  //添加员工
    DEL_EMPLOYEE,   //删除员工
    MODIFY_EMPLOYEE   //修改员工信息
};

class MyProtocol
{
public:
    MyProtocol();
    void initMsgPackage(void);
    void clearMsgPackage(void);
    void updataMsg(MyProtocol *protocol);

    QByteArray *updataMsg(const QByteArray msgName,
                          const qint16 msgstatus,
                          const qint16 msgoperate,
                          const qint16 msgcommand,
                          const QString content,
                          const qint16 msglength);
    QByteArray *packageMsg(void);
    void unpackageMsg(QDataStream &in);

    QByteArray getMsgName(void) const;
    void setMsgName(const QByteArray msgname);
    qint16 getMsgStatus(void) const;
    void setMsgStatus(const qint16 status);
    qint16 getMsgOperate(void) const;
    void setMsgOperate(const qint16 operate);
    qint16 getMsgCommand(void) const;
    void setMsgCommand(const qint16 command);
    QString getMsgContent(void) const;
    void setMsgContent(const QString content);
    qint16 getMsgLength(void) const;
    void setMsgLength(const qint16 length);


public:
    QByteArray name;          //放名字
    qint16 status;         //放身份信息
    qint16 operate;        //放操作
    qint16 command;        //放命令
    QString m_content;     //放内容
    qint16 m_length;       //放数据长度
};

#endif // MYPROTOCOL_H
