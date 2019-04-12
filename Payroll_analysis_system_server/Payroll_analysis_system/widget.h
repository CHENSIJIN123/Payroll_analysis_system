#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "logicdeal.h"
#include <QTimer>
#include "dealmsg.h"
#include "employeedisplay.h"
#include "administratordisplay.h"

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
    void dealtellTheWidgetIfItCanLoginSuccess(bool islogin);
    void dealtellTheWidgetIfItCanPunchSuccess(bool isPunch);

private slots:
    void on_pb_punch_clicked();

private:
    Ui::Widget *ui;
    LogicDeal *my_logicdeal;
    QTimer *mytimer;
    EmployeeDisplay *employee_display;
    AdministratorDisplay *admin_display;
};

#endif // WIDGET_H
