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

signals:
    void returnToLoginButtonResult(QString result);
};

#endif // DEALMSG_H
