#ifndef DEALMSG_H
#define DEALMSG_H
#include "myprotocol.h"
#include <QWidget>
#include <QString>

class dealMsg : public QWidget
{
    Q_OBJECT
public:
    dealMsg(QWidget *parent = 0);
    void judge_operator(MyProtocol *msg);
    void JudgeAccountPsw(MyProtocol *msg);
    void watch_table_display(MyProtocol *msg);
    void watch_multi_month_display(MyProtocol *msg);

signals:
    void returnToLoginButtonResult(QString result);
    void returnToLoginButtonResultPunch(QString result);
    void signal_watch_table_display(QString result);
    void signal_watch_multi_month_display(QString result);
};

#endif // DEALMSG_H
