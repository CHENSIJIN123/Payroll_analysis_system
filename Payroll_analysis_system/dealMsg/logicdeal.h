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

signals:
    void tellTheWidgetIfItCanLoginSuccess(bool);
    void tellTheWidgetIfItCanPunchSuccess(bool);
    void tellTheEmployeeShowSalaryInfo(QString info);
    void tellTheEmployeeShowMultiSalaryInfo(QString info);
    void tellTheEmployeeShowSalaryRanking(QString info);
    void tellTheAdminEmployeeInfo(QString info);

public:
    MyProtocol *msg;
    dealSocket *my_sock;
    static dealMsg *deal;
    QString name;
};

#endif // LOGICDEAL_H
