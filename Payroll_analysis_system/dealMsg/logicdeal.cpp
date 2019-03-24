#include "logicdeal.h"
#include <QDebug>
#include <QByteArray>

#define cout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
dealMsg *LogicDeal::deal;
LogicDeal::LogicDeal(QWidget *parent) :
    QWidget(parent)
{
    msg = new MyProtocol();
    my_sock = new dealSocket();
    deal = new dealMsg();
    connect(deal,SIGNAL(returnToLoginButtonResult(QString)),this,SLOT(dealreturnToLoginButtonResult(QString)));
}

/*
 * 槽函数： 判断账号和密码是否与数据库中的值匹配
 * 传入参数： 从服务器端收到的值： ok/no   ok表示该账号和密码是正确的，no表示 不正确或者是账号不存在
*/
void LogicDeal::dealreturnToLoginButtonResult(QString result)
{
    cout << "槽函数";
    if(result == "ok")
    {
        //如果账号和密码都正确 则进入登录后的界面

    }
    if(result == "no")
    {
        cout << "not correct";
    }
}


/*
 * 登录时判断账号和密码是否正确
 * 参数：账号、密码
 * 返回值：true:正确
 *       false:错误
*/
bool LogicDeal::ifTheAccountPswIsCorrect(QString account,QString password)
{
    cout << account << password;
    QByteArray block;
    msg->clearMsgPackage();

    msg->setMsgName(account.toUtf8());
    msg->setMsgOperate(LOGIN);
    msg->setMsgCommand(COMMAND_NONE);
    msg->setMsgContent(password.toUtf8());
    msg->setMsgLength(qint16(block.size() + sizeof(qint16)));
    block = *(msg->packageMsg());

    dealSocket::tcpsocket->write(block);
}
