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

private slots:
    void on_pushButton_clicked();

    void on_pb_choose_is_change_clicked();

    void dealtellTheAdminEmployeeInfo(QString employee_info);

    void on_pb_commit_clicked();

    void on_pushButton_2_clicked();

    void dealtellTheAdminCommitSucceed(QString info);

    void on_pb_inrease_employee_clicked();

private:
    Ui::AdministratorDisplay *ui;
};

#endif // ADMINISTRATORDISPLAY_H
