#ifndef BACKENDDB_H
#define BACKENDDB_H

#include <QObject>
#include <QString>

class backenddb
{
public:
    backenddb();
    static bool queryAccountPsw(QString account,QString password);
    static bool queryAccountPswAndPunch(QString account, QString pwdAndTime);
    static QString queryWatchTableDisplay(QString account,QString search);
    static QString queryWatchMultiMonthDisplay(QString account,QString search);
    static QString querywatch_SalaryRankingView(QString account);
    static QString query_employee_info(QString account);
    static QString update_employee_info(QString info);
    static QString add_employee_infomation(QString info);
    static QString delete_employee_infomation(QString info);
    static QString AdminqueryWatchTableDisplay(QString info);
    static QString AdminqueryWatchAttendanceRate(QString info);
    void insert_test();
    void insert_putch();
    void insert_salary();
};

#endif // BACKENDDB_H
