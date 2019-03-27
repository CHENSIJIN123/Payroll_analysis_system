#include "drivedb.h"
#include <QSqlDatabase>
#include <QDebug>

Drivedb::Drivedb()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("SalaryAnalysis.db");
    if(!db.open())
    {
        qDebug()<<"open failed!";
    }
    else
    {
        qDebug()<<"succeed open database!";
    }
   // backdb = new backenddb();
}

