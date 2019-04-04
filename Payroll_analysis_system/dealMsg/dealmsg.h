#ifndef DEALMSG_H
#define DEALMSG_H
#include "myprotocol.h"
#include <QWidget>
#include <QString>

class dealMsg : public QWidget
{
    Q_OBJECT
public:
    dealMsg(QWidget *parent = 0);
    void judge_operator(MyProtocol *msg);
    void JudgeAccountPsw(MyProtocol *msg);
    void watch_table_display(MyProtocol *msg);
    void watch_multi_month_display(MyProtocol *msg);
    void watchSalaryRankingView(MyProtocol *msg);
    void change_the_employee_info(MyProtocol *msg);
    void commit_modify_employee_info(MyProtocol *msg);
    void add_employee_information(MyProtocol *msg);
    void delete_employee_information(MyProtocol *msg);
    void admin_watch_table_display(MyProtocol *msg);
    void watch_attendance_rate_view(MyProtocol *msg);

signals:
    void returnToLoginButtonResult(QString result);
    void returnToLoginButtonResultPunch(QString result);
    void signal_watch_table_display(QString result);
    void signal_watch_multi_month_display(QString result);
    void signal_watchSalaryRankingView(QString result);
    void signal_change_the_employee_info(QString result);
    void signal_commit_modify_employee_info(QString result);
    void signal_add_employee_information(QString result);
    void signal_delete_employee_information(QString result);
    void signal_watch_attendance_rate_view(QString result);
};

#endif // DEALMSG_H
