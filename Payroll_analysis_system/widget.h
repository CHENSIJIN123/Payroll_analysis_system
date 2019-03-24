#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "logicdeal.h"
#include <QTimer>
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

public slots:
    void on_pb_login_clicked();

    void dealtime();

private:
    Ui::Widget *ui;
    LogicDeal *my_logicdeal;
    QTimer *mytimer;
};

#endif // WIDGET_H
