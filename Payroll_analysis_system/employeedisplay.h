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

signals:
    void table_show_salary_info(QString info);
    void show_multi_salary_info(QString info);


private slots:
    void on_pb_view_one_month_info_clicked();

    void on_pb_view_multi_month_info_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pb_watch_clicked();

    void dealtellTheEmployeeShowSalaryInfo(QString info);

    void dealtellTheEmployeeShowMultiSalaryInfo(QString info);

    void on_pb_search_clicked();

private:
    Ui::EmployeeDisplay *ui;
};

#endif // EMPLOYEEDISPLAY_H
