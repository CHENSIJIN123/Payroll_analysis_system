#ifndef DEALMSG_H
#define DEALMSG_H
#include "myprotocol.h"
#include "backenddb.h"

class dealMsg
{
public:
    dealMsg();
    void judge_operator(MyProtocol *msg);
    void judgeAccountPsw(MyProtocol *msg);
    void judgeAccountPswAndPunch(MyProtocol *msg);
    void watch_table_display(MyProtocol *msg);
    void watch_multi_display(MyProtocol *msg);
    void watch_SalaryRankingView(MyProtocol *msg);
    void get_employee_info(MyProtocol *msg);
    void commit_modify_employee_info(MyProtocol *msg);
    void add_employee_info(MyProtocol *msg);
    void delete_employee_info(MyProtocol *msg);
    void Admin_watch_table_display(MyProtocol *msg);
private:
    bool result;
    backenddb db;
};

#endif // DEALMSG_H
