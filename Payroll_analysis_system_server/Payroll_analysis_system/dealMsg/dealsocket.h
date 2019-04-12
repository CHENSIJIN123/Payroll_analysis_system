#ifndef DEALSOCKET_H
#define DEALSOCKET_H
#include <QTcpSocket>
#include "myprotocol.h"
#include "dealmsg.h"
#include <QWidget>

class dealSocket: public QWidget
{
    Q_OBJECT
public:
    dealSocket(QWidget *parent = 0);
    static QTcpSocket *tcpsocket;


private slots:
    void dealmsg(void);

private:
    MyProtocol msg;
    dealMsg deal;
};

#endif // DEALSOCKET_H
