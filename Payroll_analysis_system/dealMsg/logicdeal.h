#ifndef LOGICDEAL_H
#define LOGICDEAL_H
#include "dealsocket.h"
#include "myprotocol.h"
#include <QWidget>

class LogicDeal: public QWidget
{
    Q_OBJECT
public:
    LogicDeal(QWidget *parent = 0);
    bool ifTheAccountPswIsCorrect(QString account,QString password);

public slots:
    void dealreturnToLoginButtonResult(QString result);

public:
    MyProtocol *msg;
    dealSocket *my_sock;
    static dealMsg *deal;
};

#endif // LOGICDEAL_H
