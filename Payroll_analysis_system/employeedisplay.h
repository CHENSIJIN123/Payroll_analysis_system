#ifndef EMPLOYEEDISPLAY_H
#define EMPLOYEEDISPLAY_H

#include <QWidget>

namespace Ui {
class EmployeeDisplay;
}

class EmployeeDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeDisplay(QWidget *parent = 0);
    ~EmployeeDisplay();

private slots:
    void on_pb_view_one_month_info_clicked();

    void on_pb_view_multi_month_info_clicked();

private:
    Ui::EmployeeDisplay *ui;
};

#endif // EMPLOYEEDISPLAY_H
