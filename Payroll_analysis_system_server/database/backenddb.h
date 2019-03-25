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
    void insert_test();
    void insert_putch();
};

#endif // BACKENDDB_H
