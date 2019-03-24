#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include "myprotocol.h"
#include "dealmsg.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void init_tcp_socket();

public slots:
    void recvMsg(void);
    void sendMessage(void);

private:
    Ui::Widget *ui;
    QTcpSocket *tcpsocket;
    QTcpServer *tcpserver;
    MyProtocol *msg;
    dealMsg deal;
};

#endif // WIDGET_H
