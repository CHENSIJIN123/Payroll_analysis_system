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
    //insert_salary();
}

QString backenddb::EmployeeQueryWatchAttendanceRatePie(QString name,QString info)
{
    QStringList querycondition = info.split("/");
    QSqlQuery query;
    QString queryString = QString("select issuccess from attendanceinfo,EMPLOYEEINFO "
                                  "where EMPLOYEEINFO.[NAME_OF_WORKER]='%1' and "
                                  "employeeinfo.[Job_ID] = attendanceinfo.[Job_ID] "
                                  "and attendanceinfo.[year]='%2' and attendanceinfo.[month]='%3'")
                                    .arg(name)
                                    .arg(querycondition[0])
                                    .arg(querycondition[1]);
    cout << queryString;
    int count_0 = 0;
    int count_1 = 0;
    if(query.exec(queryString))
    {
        int issuccess = query.record().indexOf("issuccess");
        while(query.next())
        {
            QString success = query.value(issuccess).toString();
            if(success == "1")
            {count_1++;}
            if(success == "0")
            {count_0++;}
        }
    }
    cout << count_0 << count_1;
    return QString::number(count_0)+"/"+QString::number(count_1);
}

QString backenddb::EmployeeQueryWatchAttendanceRate(QString name,QString info)
{
    QStringList querycondition = info.split("/");
    QSqlQuery query;
    QString queryString = QString("select AttendanceInfo.[Workinghours],attendanceinfo.[Aftergetoffworktime] "
                                  "from ATTENDANCEINFO,employeeinfo where employeeinfo.[NAME_OF_WORKER] = '%1' "
                                  "and employeeinfo.[Job_ID]=ATTENDANCEINFO.[Job_ID] and ATTENDANCEINFO.[year]=  "
                                  "'%2' and attendanceinfo.[month]='%3' and attendanceinfo.[day]='%4';")
                                    .arg(name)
                                    .arg(querycondition[0])
                                    .arg(querycondition[1])
                                    .arg(querycondition[2]);
    cout << queryString;
    if(query.exec(queryString))
    {
        int gowork = query.record().indexOf("Workinghours");
        int afterwork = query.record().indexOf("Aftergetoffworktime");
        if(query.next())
        {
            QString attendance_result = query.value(gowork).toString() + "/"
                                    + query.value(afterwork).toString();
            return attendance_result;
        }
    }else
    {
        return "no";
    }

}

QString backenddb::AdminQueryWatchAttendanceRatePie(QString info)
{
    QStringList querycondition = info.split("/");
    QSqlQuery query;
    QString queryString = QString("select issuccess from attendanceinfo,EMPLOYEEINFO "
                                  "where EMPLOYEEINFO.[NAME_OF_WORKER]='%1' and "
                                  "employeeinfo.[Job_ID] = attendanceinfo.[Job_ID] "
                                  "and attendanceinfo.[year]='%2' and attendanceinfo.[month]='%3'")
                                    .arg(querycondition[0])
                                    .arg(querycondition[1])
                                    .arg(querycondition[2]);
    cout << queryString;
    int count_0 = 0;
    int count_1 = 0;
    if(query.exec(queryString))
    {
        int issuccess = query.record().indexOf("issuccess");
        while(query.next())
        {
            QString success = query.value(issuccess).toString();
            if(success == "1")
            {count_1++;}
            if(success == "0")
            {count_0++;}
        }
    }
    cout << count_0 << count_1;
    return QString::number(count_0)+"/"+QString::number(count_1);
}

QString backenddb::AdminqueryWatchAttendanceRate(QString info)
{
    QStringList querycondition = info.split("/");
    QSqlQuery query;
    QString queryString = QString("select AttendanceInfo.[Workinghours],attendanceinfo.[Aftergetoffworktime] "
                                  "from ATTENDANCEINFO,employeeinfo where employeeinfo.[NAME_OF_WORKER] = '%1' "
                                  "and employeeinfo.[Job_ID]=ATTENDANCEINFO.[Job_ID] and ATTENDANCEINFO.[year]=  "
                                  "'%2' and attendanceinfo.[month]='%3' and attendanceinfo.[day]='%4';")
                                    .arg(querycondition[0])
                                    .arg(querycondition[1])
                                    .arg(querycondition[2])
                                    .arg(querycondition[3]);
    cout << queryString;
    if(query.exec(queryString))
    {
        int gowork = query.record().indexOf("Workinghours");
        int afterwork = query.record().indexOf("Aftergetoffworktime");
        if(query.next())
        {
            QString attendance_result = query.value(gowork).toString() + "/"
                                    + query.value(afterwork).toString();
            return attendance_result;
        }
    }else
    {
        return "no";
    }

}

QString backenddb::AdminqueryWatchTableDisplay(QString info)
{
    QStringList yearAndMonth = info.split("/");
    QSqlQuery query;
    QString queryString = QString("select * from EmployeeInfo,Salaryinfo where Salaryinfo.Job_ID = EmployeeInfo.Job_ID and"
                                  " Salaryinfo.year ='%1' and Salaryinfo.month ='%2' and EmployeeInfo.NAME_OF_WORKER = '%3'")
                                  .arg(yearAndMonth[0])
                                  .arg(yearAndMonth[1])
                                  .arg(yearAndMonth[2]);
    cout << queryString;

    if(query.exec(queryString))
    {
        cout << 1;
        int name_idx = query.record().indexOf("NAME_OF_WORKER");
        int jobId_idx = query.record().indexOf("Job_ID");
        int post_idx = query.record().indexOf("post");
        int depId_idx = query.record().indexOf("DepartmentID");
        int retryTime_idx = query.record().indexOf("EntryTime");
        int turn_idx = query.record().indexOf("Turnpositivetime");
        int edu_idx = query.record().indexOf("Education");
        int basicWage_idx = query.record().indexOf("Basicwage");
        int Transport_idx = query.record().indexOf("Transportationsubsidy");
        int meal_idx = query.record().indexOf("Mealsupplement");
        int house_idx = query.record().indexOf("Housingsubsidy");
        int pwd_idx = query.record().indexOf("Password");
        int year_idx = query.record().indexOf("year");
        int month_idx = query.record().indexOf("month");
        int five_one_idx = query.record().indexOf("Fiveinsuranceandonegold");
        int Tax_idx = query.record().indexOf("Tax deduction");
        int Absence_idx = query.record().indexOf("Absenceofabsence");
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

QString backenddb::delete_employee_infomation(QString info)
{
    QSqlQuery query;
    QString queryString = QString("DELETE FROM employeeinfo WHERE NAME_OF_WORKER = '%1'")
                                    .arg(info);
    if(query.exec(queryString))
    {
        return "ok";
    }else
        return "no";
}

QString backenddb::add_employee_infomation(QString info)
{
    QStringList employee_info  = info.split("/");
    cout << info;
    QSqlQuery query;
    QString queryString;
    if(employee_info[11] == "")
    {
        queryString = QString("insert into employeeinfo values ('%0',%1,'%2',%3,'%4','%5','%6','%7','%8','%9','%10','%11')")
                        .arg(employee_info[0])
                        .arg(employee_info[1].toInt())
                        .arg(employee_info[2])
                        .arg(employee_info[3].toInt())
                        .arg(employee_info[4])
                        .arg(employee_info[5])
                        .arg(employee_info[6])
                        .arg(employee_info[7].toInt())
                        .arg(employee_info[8].toInt())
                        .arg(employee_info[9].toInt())
                        .arg(employee_info[10].toInt())
                        .arg(employee_info[11]);
    }else
    {
        queryString = QString("insert into employeeinfo values ('%0',%1,%2,"
                               "(select DEPARTMENT_ID from departmentinfo where DEPARTMENT_NAME "
                                "= '%3'),'%4','%5','%6','%7','%8','%9','%10','%11') ")
                        .arg(employee_info[0])
                        .arg(employee_info[1].toInt())
                        .arg(employee_info[2])
                        .arg(employee_info[3].toInt())
                        .arg(employee_info[4])
                        .arg(employee_info[5])
                        .arg(employee_info[6])
                        .arg(employee_info[7].toInt())
                        .arg(employee_info[8].toInt())
                        .arg(employee_info[9].toInt())
                        .arg(employee_info[10].toInt())
                        .arg(employee_info[11]);
    }
    cout << queryString;
    if(query.exec(queryString))
    {
        return "ok";
    }else
        return "no";
}

QString backenddb::update_employee_info(QString info)
{
    QStringList employee_info  = info.split("/");
    cout << info;
    //赵四/4/人事/20160115/20160415/本科/4497/100/300/500/123/新业务产品部"
    // 0  1  2   3           4      5   6    7   8   9  10    11
    QSqlQuery query;
    QString queryString  = QString("update employeeinfo set DEPARTMENTID = "
                                   "(select DEPARTMENT_ID from departmentinfo where "
                                   "DEPARTMENT_NAME = '%1'),JOB_ID = %2 ,"
                                   "post='%3',entrytime ='%4',turnpositivetime = '%5',"
                                   "education='%6',basicwage = %7,transportationsubsidy = %8,"
                                   "mealsupplement=%9,housingsubsidy=%10,password=%11 "
                                   "where NAME_OF_WORKER ='%12' ")
                                    .arg(employee_info[11])
                                    .arg(employee_info[1].toInt())
                                    .arg(employee_info[2])
                                    .arg(employee_info[3])
                                    .arg(employee_info[4])
                                    .arg(employee_info[5])
                                    .arg(employee_info[6].toInt())
                                    .arg(employee_info[7].toInt())
                                    .arg(employee_info[8].toInt())
                                    .arg(employee_info[9].toInt())
                                    .arg(employee_info[10])
                                    .arg(employee_info[0]);
    cout << queryString;
    if(query.exec(queryString))
    {
        return "ok";
    }else
        return "no";
}

QString backenddb::query_employee_info(QString account)
{
    QSqlQuery query;
    QString queryString = QString("select EMPLOYEEINFO.[NAME_OF_WORKER],EMPLOYEEINFO.[Job_ID],EMPLOYEEINFO.[post],EMPLOYEEINFO.[EntryTime],EMPLOYEEINFO.[Turnpositivetime],"
                                  "employeeinfo.[Education],employeeinfo.[Basicwage],employeeinfo.[Transportationsubsidy],employeeinfo.[Mealsupplement],"
                                  "employeeinfo.[Housingsubsidy],employeeinfo.[Password],departmentinfo.[DEPARTMENT_NAME] from employeeinfo,departmentinfo where "
                                  "employeeinfo.[DepartmentID]=departmentinfo.[DEPARTMENT_ID] and employeeinfo.[NAME_OF_WORKER]='%1'")
                                    .arg(account);
    if(query.exec(queryString))
    {
        int name_idx = query.record().indexOf("NAME_OF_WORKER");
        int job_idx = query.record().indexOf("Job_ID");
        int post_idx = query.record().indexOf("post");
        int entry_idx = query.record().indexOf("EntryTime");
        int turn_idx = query.record().indexOf("Turnpositivetime");
        int edu_idx = query.record().indexOf("Education");
        int basic_idx = query.record().indexOf("Basicwage");
        int transport_idx = query.record().indexOf("Transportationsubsidy");
        int meal_idx = query.record().indexOf("Mealsupplement");
        int house_idx = query.record().indexOf("Housingsubsidy");
        int pwd_idx = query.record().indexOf("Password");
        int department_idx = query.record().indexOf("DEPARTMENT_NAME");
        if(query.next())
        {
            QString employee_info = query.value(name_idx).toString() + "/" +query.value(job_idx).toString()
                    +"/" +query.value(post_idx).toString()
                    +"/"+query.value(entry_idx).toString() + "/" + query.value(turn_idx).toString()
                    +"/"+query.value(edu_idx).toString() + "/" + query.value(basic_idx).toString()
                    +"/"+query.value(transport_idx).toString()+"/"+query.value(meal_idx).toString()
                    +"/"+query.value(house_idx).toString() + "/"+query.value(pwd_idx).toString()
                    +"/"+query.value(department_idx).toString();
            return employee_info;
        }else
            return "no";
    }else
        return "no";
}

QString backenddb::querywatch_SalaryRankingView(QString account)
{
    QSqlQuery query;
    QString queryString = QString("select count(*) from employeeinfo where basicwage > (select basicwage "
                                  "from employeeinfo where  NAME_OF_WORKER  = '%1') order by Basicwage DESC")
                                    .arg(account);
    cout << queryString;
    if(query.exec(queryString))
    {
        int result_idx = query.record().indexOf("count(*)");
        if(query.next())
        {
            QString result = query.value(result_idx).toString();
            return result;
        }else
            return "no";
    }else
        return "no";
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
        int depId_idx = query.record().indexOf("DepartmentID");
        int retryTime_idx = query.record().indexOf("EntryTime");
        int turn_idx = query.record().indexOf("Turnpositivetime");
        int edu_idx = query.record().indexOf("Education");
        int basicWage_idx = query.record().indexOf("Basicwage");
        int Transport_idx = query.record().indexOf("Transportationsubsidy");
        int meal_idx = query.record().indexOf("Mealsupplement");
        int house_idx = query.record().indexOf("Housingsubsidy");
        int pwd_idx = query.record().indexOf("Password");
        int year_idx = query.record().indexOf("year");
        int month_idx = query.record().indexOf("month");
        int five_one_idx = query.record().indexOf("Fiveinsuranceandonegold");
        int Tax_idx = query.record().indexOf("Tax deduction");
        int Absence_idx = query.record().indexOf("Absenceofabsence");
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
//        int name_idx = query.record().indexOf("NAME_OF_WORKER");
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
 * 函数查看数据库中是否有对应的账号和密码,如果存在则往数据库中插入打卡记录一条，否则不插，并返回false
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
                    queryString= QString("select Workinghours from AttendanceInfo where Job_ID = '%1'")
                                        .arg(jobId);
                    query.exec(queryString);
                    int worktimeID = query.record().indexOf("Workinghours");
                    QString worktimes;
                    if(query.next())
                    {
                            worktimes = query.value(worktimeID).toString();
                    }
                    QDateTime begintime = QDateTime::fromString(worktimes, "hh:mm:ss");
                    current;
                    QTime m_time;
                    int i = 0;

                    m_time.setHMS(0, 0, 0, 0);                                       //初始化数据，时 分 秒 毫秒
                    m_time.addSecs(begintime.secsTo(current)).toString("hh:mm:ss");
                    if(m_time < QTime(9,0,0))
                    {
                        i = 1;
                    }
                    QString time_interval = m_time.toString("hh:mm:ss");
                    cout << time_interval << "         " << i;

                }
                else{
                    queryString= QString("select Workinghours from AttendanceInfo where Job_ID = '%1'")
                                        .arg(jobId);
                    query.exec(queryString);
                    int worktimeID = query.record().indexOf("Workinghours");
                    QString worktimes;
                    if(query.next())
                    {
                            worktimes = query.value(worktimeID).toString();
                    }
                    QDateTime begintime = QDateTime::fromString(worktimes, "hh:mm:ss");

                    int i = 0;
                    qint64 intervalTime = begintime.secsTo(current); //求时间差
                    QString interval = QObject::tr("%1").arg(intervalTime);
                    cout << interval.toLongLong();
                    int hh = (interval.toLongLong()%(24*3600)/3600);
                    int mm = (interval.toLongLong()%3600)/60;
                    int ss = (interval.toLongLong()%60);
                    QString time_interval = QString::number(hh) + ":" +  QString::number(mm) + ":" +  QString::number(ss);
                    cout << time_interval;
                    if(interval.toLongLong()%(24*3600)/3600 < 9)
                    {
                        i = 1;
                    }
                    queryString = QString("UPDATE AttendanceInfo SET Aftergetoffworktime = '%1',"
                                          "worktime = '%2',issuccess = '%3' WHERE Job_ID = '%4'")
                                            .arg(list[1])
                                            .arg(time_interval)
                                            .arg(i)
                                            .arg(jobId);
                    cout << queryString;
                    query.exec(queryString);
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

void backenddb::insert_salary()
{
    QFile examplefile("C:/Users/capitek/Desktop/salary.txt");
    if (examplefile.open(QFile::ReadOnly|QFile::Text))
    {
        while(!examplefile.atEnd())
        {
            QByteArray line = examplefile.readLine();
            cout << line;
            QString str(line);
            QStringList list = str.split(",");
            QSqlQuery query;
            QString queryString = QString("insert into Salaryinfo(`Job_ID`,`year`,`month`,"
                                          "`Basic wage`,`Five insurance and one gold`,`Tax deduction`,"
                                          "`Absence of absence`,`bonus`,`salary`) "
                                   "values('%1','%2','%3','%4','%5','%6','%7','%8','%9')")
                                   .arg(list[0].toInt())
                                   .arg(list[1])
                                   .arg(list[2])
                                   .arg(list[3].toInt())
                                   .arg(list[4].toFloat())
                                   .arg(list[5].toFloat())
                                   .arg(list[6].toFloat())
                                   .arg(list[7].toFloat())
                                   .arg(list[8].toFloat());
            cout << queryString;
            query.exec(queryString);

        }

    }
}
