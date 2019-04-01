#ifndef ADMINISTRATORDISPLAY_H
#define ADMINISTRATORDISPLAY_H

#include <QWidget>

namespace Ui {
class AdministratorDisplay;
}

class AdministratorDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit AdministratorDisplay(QWidget *parent = 0);
    ~AdministratorDisplay();
signals:
    void admin_change_employee_info(QString name);
    void ModifyEmployeeInformationSubmission(QString info);
    void AddEmployeeInformation(QString info);
    void DeleteEmployeeInfomation(QString info);
    void admin_table_show_salary_info(QString info);
private slots:
    void on_pushButton_clicked();

    void on_pb_choose_is_change_clicked();

    void dealtellTheAdminEmployeeInfo(QString employee_info);

    void on_pb_commit_clicked();

    void on_pushButton_2_clicked();

    void dealtellTheAdminCommitSucceed(QString info);

    void on_pb_inrease_employee_clicked();

    void dealtellTheAdminInsertSucceed(QString info);

    void on_pushButton_3_clicked();

    void on_pb_delete_clicked();

    void dealtellTheAdminDeleteSucceed(QString info);

    void on_pb_watch_clicked();

    void dealtellTheEmployeeShowSalaryInfo(QString info);

private:
    Ui::AdministratorDisplay *ui;
};

#endif // ADMINISTRATORDISPLAY_H
