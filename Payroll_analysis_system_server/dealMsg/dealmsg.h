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
private:
    bool result;
    backenddb db;
};

#endif // DEALMSG_H
