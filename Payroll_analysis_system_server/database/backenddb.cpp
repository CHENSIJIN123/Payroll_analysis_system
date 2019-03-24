#include "backenddb.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QStringList>
#include <QString>
#include <QDateTime>
#include <QFile>


#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
backenddb::backenddb()
{    
    //insert_test();
    //insert_putch();
}

/*
 * 函数查看数据库中是否有对应的账号和密码
 * 返回：true :存在
 *      false:不存在
*/
bool backenddb::queryAccountPsw(QString account,QString password)
{
    QSqlQuery query;
    QString queryString = QString("select NAME_OF_WORKER,Password from EmployeeInfo where "
                                  "NAME_OF_WORKER like '%1'")
                                .arg(account);
    cout << queryString;
    if(query.exec(queryString))
    {
        int name_idx = query.record().indexOf("NAME_OF_WORKER");
        int psw_idx = query.record().indexOf("Password");
        if(query.next())
        {
            QString psw = query.value(psw_idx).toString();
            cout << psw << "： "<< password;
            if(psw == password)
            {
                cout << "psw" <<psw <<":"<<password;
                return true;

            }else{
                cout << "psw" <<psw <<":"<<password;
                return false;
            }
        }else{
            return false;
        }
    }
}

void backenddb::insert_test()
{
    QFile examplefile("C:/Users/Administrator/Desktop/chen/example.txt");
    if (examplefile.open(QFile::ReadOnly|QFile::Text))
    {
        while(!examplefile.atEnd())
        {
            QByteArray line = examplefile.readLine();
            cout << line;
            QString str(line);
            QStringList list = str.split(",");
            QSqlQuery query;
            QString queryString = QString("insert into EmployeeInfo(`NAME_OF_WORKER`,`Job_ID`,`post`,"
                                          "`Department ID`,`Entry Time`,`Turn positive time`,"
                                          "`Education`,`Basic wage`,`Transportation subsidy`"
                                          ",`Meal supplement`,`Housing subsidy`,`Password`) "
                                   "values('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10'"
                                          ",'%11','%12')")
                                   .arg(list[0])
                                   .arg(list[1].toInt())
                                   .arg(list[2])
                                   .arg(list[3].toInt())
                                   .arg(list[4])
                                   .arg(list[5])
                                   .arg(list[6])
                                   .arg(list[7].toInt())
                                   .arg(list[8].toInt())
                                   .arg(list[9].toInt())
                                   .arg(list[10].toInt())
                                   .arg(list[11]);
            cout << queryString;
            query.exec(queryString);

        }

    }
}

void backenddb::insert_putch()
{
    QFile examplefile("C:/Users/Administrator/Desktop/chen/kaoqin.txt");
    if (examplefile.open(QFile::ReadOnly|QFile::Text))
    {
        while(!examplefile.atEnd())
        {
            QByteArray line = examplefile.readLine();
            cout << line;
            QString str(line);
            QStringList list = str.split(",");
            QSqlQuery query;
            QString queryString = QString("insert into AttendanceInfo(`Job_ID`,`year`,`month`,"
                                          "`day`,`Working hours`,`After get off work time`) "
                                   "values('%1','%2','%3','%4','%5','%6')")
                                   .arg(list[0].toInt())
                                   .arg(list[1])
                                   .arg(list[2])
                                   .arg(list[3])
                                   .arg(list[4])
                                   .arg(list[5]);
            cout << queryString;
            query.exec(queryString);

        }

    }
}
