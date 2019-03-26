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
 * 函数功能: 查询某个人多个月得工资情况
*/
QString backenddb::queryWatchMultiMonthDisplay(QString account,QString search)
{
    QString month_salary = "";
    QSqlQuery query;
    QString queryString = QString("select month,salary from EmployeeInfo,Salaryinfo where Salaryinfo.Job_ID = EmployeeInfo.Job_ID"
                                  " and Salaryinfo.year ='%1' and EmployeeInfo.NAME_OF_WORKER = '%2'")
                                   .arg(search)
                                   .arg(account);
    cout << queryString;
    if(query.exec(queryString))
    {
        int salary_idx = query.record().indexOf("salary");
        int month_idx = query.record().indexOf("month");
        while(query.next())
        {
            QString salary = query.value(salary_idx).toString();
            QString month = query.value(month_idx).toString();
            month_salary+=month +"*"+salary+"/";
        }
        return month_salary;
    }else
    {
        return "no";
    }
}

/*
 * 查询某个人的工资情况
*/
QString backenddb::queryWatchTableDisplay(QString account,QString search)
{
    QStringList yearAndMonth = search.split("/");
    QSqlQuery query;
    QString queryString = QString("select * from EmployeeInfo,Salaryinfo where Salaryinfo.Job_ID = EmployeeInfo.Job_ID and"
                                  " Salaryinfo.year ='%1' and Salaryinfo.month ='%2' and EmployeeInfo.NAME_OF_WORKER = '%3'")
                                  .arg(yearAndMonth[0])
                                  .arg(yearAndMonth[1])
                                  .arg(account);
    cout << queryString;

    if(query.exec(queryString))
    {
        cout << 1;
        int name_idx = query.record().indexOf("NAME_OF_WORKER");
        int jobId_idx = query.record().indexOf("Job_ID");
        int post_idx = query.record().indexOf("post");
        int depId_idx = query.record().indexOf("Department ID");
        int retryTime_idx = query.record().indexOf("Entry Time");
        int turn_idx = query.record().indexOf("Turn positive time");
        int edu_idx = query.record().indexOf("Education");
        int basicWage_idx = query.record().indexOf("Basic wage");
        int Transport_idx = query.record().indexOf("Transportation subsidy");
        int meal_idx = query.record().indexOf("Meal supplement");
        int house_idx = query.record().indexOf("Housing subsidy");
        int pwd_idx = query.record().indexOf("Password");
        int year_idx = query.record().indexOf("year");
        int month_idx = query.record().indexOf("month");
        int five_one_idx = query.record().indexOf("Five insurance and one gold");
        int Tax_idx = query.record().indexOf("Tax deduction");
        int Absence_idx = query.record().indexOf("Absence of absence");
        int bonus_idx = query.record().indexOf("bonus");
        int salary_idx = query.record().indexOf("salary");

        if(query.next())
        {
            QString search_result = query.value(name_idx).toString()+ "/" +query.value(jobId_idx).toString()
                    +"/" + query.value(post_idx).toString()+"/"+query.value(depId_idx).toString()
                    +"/" + query.value(retryTime_idx).toString() + "/"+query.value(turn_idx).toString()
                    +"/" + query.value(edu_idx).toString() + "/" + query.value(basicWage_idx).toString()
                    +"/" + query.value(Transport_idx).toString() + "/"+query.value(meal_idx).toString()
                    +"/" + query.value(house_idx).toString() + "/" + query.value(pwd_idx).toString()
                    +"/" + query.value(year_idx).toString() + "/" + query.value(month_idx).toString()
                    +"/" + query.value(five_one_idx).toString() + "/" + query.value(Tax_idx).toString()
                    +"/" + query.value(Absence_idx).toString() + "/" + query.value(bonus_idx).toString()
                    +"/" + query.value(salary_idx).toString();
            return search_result;
        }else
        {
            return "no";
        }
    }else
    {
        cout << 2;
        return "no";
    }
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
    }else
    {
        return false;
    }
}

/*
 * 函数查看数据库中是否有对应的账号和密码,如果存在则网数据库中插入打卡记录一条，否则不插，并返回false
 * 返回：true :存在
 *      false:不存在
*/
bool backenddb::queryAccountPswAndPunch(QString account,QString pwdAndTime)
{
    QStringList list = pwdAndTime.split("/");
    QSqlQuery query;
    QString queryString = QString("select NAME_OF_WORKER,Password,Job_ID from EmployeeInfo where "
                                  "NAME_OF_WORKER like '%1'")
                                .arg(account);
    cout << queryString;
    if(query.exec(queryString))
    {
        int name_idx = query.record().indexOf("NAME_OF_WORKER");
        int psw_idx = query.record().indexOf("Password");
        int job_idx = query.record().indexOf("Job_ID");
        if(query.next())
        {
            QString psw = query.value(psw_idx).toString();
            QString jobId = query.value(job_idx).toString();

            cout << psw << "： "<< list[0];
            if(psw == list[0])
            {
                //Job_ID year month day Working hours After get off work time
                QDateTime current =QDateTime::currentDateTime();
                QString current_time =current.toString("yyyy:MM:dd");  //获取当天年 月 日
                QStringList current_year_month_day = current_time.split(":");
                QStringList timeList = list[1].split(":");  //获取打卡的小时

                /*
                 * 判断是上班打卡还是下班打卡
                 * 上班打卡：0--12
                 * 下班打卡：12--23
                */
                if((timeList[0].toInt()>=0) && (timeList[0].toInt()< 12))
                {
                    queryString = QString("insert into AttendanceInfo(Job_ID,year,month,day,Working hours) "
                                          "values(%1,'%2'','%3'','%4'','%5'')")
                                            .arg(jobId)
                                            .arg(current_year_month_day[0])
                                            .arg(current_year_month_day[1])
                                            .arg(current_year_month_day[2])
                                            .arg(list[1]);
                }
                else{
                    queryString = QString("insert into AttendanceInfo(Job_ID,year,month,day,After get off work time) "
                                          "values(%1,'%2'','%3'','%4'','%5'')")
                                            .arg(jobId)
                                            .arg(current_year_month_day[0])
                                            .arg(current_year_month_day[1])
                                            .arg(current_year_month_day[2])
                                            .arg(list[1]);
                }
                return true;

            }else{
                cout << "psw" <<psw <<":"<<list[0];
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
