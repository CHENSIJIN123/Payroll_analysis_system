#ifndef LOGICDEAL_H
#define LOGICDEAL_H
#include "dealsocket.h"
#include "myprotocol.h"
#include <QWidget>

class LogicDeal: public QWidget
{
    Q_OBJECT
public:
    LogicDeal(QWidget *parent = 0);
    bool ifTheAccountPswIsCorrect(QString account, QString password);
    bool ifTheAccountPswIsCorrectAndPunch(QString account, QString password,QString time);

public slots:
    void dealreturnToLoginButtonResult(QString result);
    void dealreturnToLoginButtonResultPunch(QString result);
    void dealtable_show_salary_info(QString info);
    void slot_watch_table_display(QString result);
    void dealshow_multi_salary_info(QString info);
    void slot_watch_multi_month_display(QString info);
    void dealSalaryRankingView(void);
    void slot_watchSalaryRankingView(QString info);
    void dealadmin_change_employee_info(QString employee_name);
    void slot_change_the_employee_info(QString employee_info);
    void dealModifyEmployeeInformationSubmission(QString info);
    void slot_commit_modify_employee_info(QString info);
    void dealAddEmployeeInformation(QString info);
    void slot_add_employee_information(QString info);
    void dealDeleteEmployeeInfomation(QString info);
    void slot_delete_employee_information(QString info);
    void deal_Admin_table_show_salary_info(QString info);
    void slot_count_salary_time(QString time);
    void slot_search_attendance(QString cond);
    void slot_watch_attendance_rate_view(QString result);

signals:
    void tellTheWidgetIfItCanLoginSuccess(bool);
    void tellTheWidgetIfItCanPunchSuccess(bool);
    void tellTheEmployeeShowSalaryInfo(QString info);
    void tellTheEmployeeShowMultiSalaryInfo(QString info);
    void tellTheEmployeeShowSalaryRanking(QString info);
    void tellTheAdminEmployeeInfo(QString info);
    void tellTheAdminCommitSucceed(QString info);
    void tellTheAdminInsertSucceed(QString info);
    void tellTheAdminDeleteSucceed(QString info);
    void tellTheAdminAttendanceRate(QString info);

public:
    MyProtocol *msg;
    dealSocket *my_sock;
    static dealMsg *deal;
    QString name;
};

#endif // LOGICDEAL_H
