/********************************************************************************
** Form generated from reading UI file 'administratordisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORDISPLAY_H
#define UI_ADMINISTRATORDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorDisplay
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tb_change_employee_info;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pb_choose;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *pb_change_employee_info;
    QLineEdit *le_choose_employee_name;
    QLabel *lb_info;
    QPushButton *pb_choose_is_change;
    QLabel *lb_name;
    QLabel *lb_job_id;
    QLabel *lb_post;
    QLabel *lb_department;
    QLabel *lb_entry_time;
    QLabel *lb_turn_time;
    QLabel *lb_education;
    QLabel *lb_basic_wage;
    QLabel *lb_trasport;
    QLabel *lb_food;
    QLabel *lb_house;
    QLabel *lb_pwd;
    QLineEdit *le_name;
    QLineEdit *le_job_id;
    QLineEdit *le_post;
    QLineEdit *le_department;
    QLineEdit *le_entry_time;
    QLineEdit *le_turn_time;
    QLineEdit *le_education;
    QLineEdit *le_basic_wage;
    QLineEdit *le_transport;
    QLineEdit *le_meal;
    QLineEdit *le_house;
    QLineEdit *le_pwd;
    QPushButton *pb_commit;
    QPushButton *pb_cancel;
    QWidget *tb_view_salary;
    QWidget *tb_view_attendance;
    QWidget *tb_set_date_of_salary_settlement;
    QWidget *tb_department_salary_compare;

    void setupUi(QWidget *AdministratorDisplay)
    {
        if (AdministratorDisplay->objectName().isEmpty())
            AdministratorDisplay->setObjectName(QStringLiteral("AdministratorDisplay"));
        AdministratorDisplay->resize(784, 477);
        gridLayout_3 = new QGridLayout(AdministratorDisplay);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(AdministratorDisplay);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tb_change_employee_info = new QWidget();
        tb_change_employee_info->setObjectName(QStringLiteral("tb_change_employee_info"));
        gridLayout_2 = new QGridLayout(tb_change_employee_info);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(tb_change_employee_info);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pb_choose = new QWidget();
        pb_choose->setObjectName(QStringLiteral("pb_choose"));
        gridLayout = new QGridLayout(pb_choose);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(237, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(pb_choose);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(230, 30));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(pb_choose);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(230, 30));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(237, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(pb_choose);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(230, 30));

        gridLayout->addWidget(pushButton_3, 5, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(237, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 6, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 6, 2, 1, 1);

        stackedWidget->addWidget(pb_choose);
        pb_change_employee_info = new QWidget();
        pb_change_employee_info->setObjectName(QStringLiteral("pb_change_employee_info"));
        le_choose_employee_name = new QLineEdit(pb_change_employee_info);
        le_choose_employee_name->setObjectName(QStringLiteral("le_choose_employee_name"));
        le_choose_employee_name->setGeometry(QRect(170, 10, 131, 20));
        lb_info = new QLabel(pb_change_employee_info);
        lb_info->setObjectName(QStringLiteral("lb_info"));
        lb_info->setGeometry(QRect(20, 10, 141, 16));
        pb_choose_is_change = new QPushButton(pb_change_employee_info);
        pb_choose_is_change->setObjectName(QStringLiteral("pb_choose_is_change"));
        pb_choose_is_change->setGeometry(QRect(310, 10, 61, 23));
        lb_name = new QLabel(pb_change_employee_info);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setGeometry(QRect(40, 70, 61, 21));
        lb_job_id = new QLabel(pb_change_employee_info);
        lb_job_id->setObjectName(QStringLiteral("lb_job_id"));
        lb_job_id->setGeometry(QRect(40, 120, 54, 21));
        lb_post = new QLabel(pb_change_employee_info);
        lb_post->setObjectName(QStringLiteral("lb_post"));
        lb_post->setGeometry(QRect(40, 170, 54, 21));
        lb_department = new QLabel(pb_change_employee_info);
        lb_department->setObjectName(QStringLiteral("lb_department"));
        lb_department->setGeometry(QRect(40, 220, 61, 21));
        lb_entry_time = new QLabel(pb_change_employee_info);
        lb_entry_time->setObjectName(QStringLiteral("lb_entry_time"));
        lb_entry_time->setGeometry(QRect(40, 270, 61, 21));
        lb_turn_time = new QLabel(pb_change_employee_info);
        lb_turn_time->setObjectName(QStringLiteral("lb_turn_time"));
        lb_turn_time->setGeometry(QRect(40, 320, 54, 21));
        lb_education = new QLabel(pb_change_employee_info);
        lb_education->setObjectName(QStringLiteral("lb_education"));
        lb_education->setGeometry(QRect(380, 72, 54, 20));
        lb_basic_wage = new QLabel(pb_change_employee_info);
        lb_basic_wage->setObjectName(QStringLiteral("lb_basic_wage"));
        lb_basic_wage->setGeometry(QRect(380, 120, 54, 20));
        lb_trasport = new QLabel(pb_change_employee_info);
        lb_trasport->setObjectName(QStringLiteral("lb_trasport"));
        lb_trasport->setGeometry(QRect(380, 170, 61, 21));
        lb_food = new QLabel(pb_change_employee_info);
        lb_food->setObjectName(QStringLiteral("lb_food"));
        lb_food->setGeometry(QRect(380, 220, 61, 21));
        lb_house = new QLabel(pb_change_employee_info);
        lb_house->setObjectName(QStringLiteral("lb_house"));
        lb_house->setGeometry(QRect(380, 270, 61, 21));
        lb_pwd = new QLabel(pb_change_employee_info);
        lb_pwd->setObjectName(QStringLiteral("lb_pwd"));
        lb_pwd->setGeometry(QRect(380, 320, 61, 21));
        le_name = new QLineEdit(pb_change_employee_info);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(110, 70, 151, 20));
        le_job_id = new QLineEdit(pb_change_employee_info);
        le_job_id->setObjectName(QStringLiteral("le_job_id"));
        le_job_id->setGeometry(QRect(110, 120, 151, 20));
        le_post = new QLineEdit(pb_change_employee_info);
        le_post->setObjectName(QStringLiteral("le_post"));
        le_post->setGeometry(QRect(110, 170, 151, 20));
        le_department = new QLineEdit(pb_change_employee_info);
        le_department->setObjectName(QStringLiteral("le_department"));
        le_department->setGeometry(QRect(110, 220, 151, 20));
        le_entry_time = new QLineEdit(pb_change_employee_info);
        le_entry_time->setObjectName(QStringLiteral("le_entry_time"));
        le_entry_time->setGeometry(QRect(110, 270, 151, 20));
        le_turn_time = new QLineEdit(pb_change_employee_info);
        le_turn_time->setObjectName(QStringLiteral("le_turn_time"));
        le_turn_time->setGeometry(QRect(110, 320, 151, 20));
        le_education = new QLineEdit(pb_change_employee_info);
        le_education->setObjectName(QStringLiteral("le_education"));
        le_education->setGeometry(QRect(470, 70, 151, 20));
        le_basic_wage = new QLineEdit(pb_change_employee_info);
        le_basic_wage->setObjectName(QStringLiteral("le_basic_wage"));
        le_basic_wage->setGeometry(QRect(470, 120, 151, 20));
        le_transport = new QLineEdit(pb_change_employee_info);
        le_transport->setObjectName(QStringLiteral("le_transport"));
        le_transport->setGeometry(QRect(470, 170, 151, 20));
        le_meal = new QLineEdit(pb_change_employee_info);
        le_meal->setObjectName(QStringLiteral("le_meal"));
        le_meal->setGeometry(QRect(470, 220, 151, 20));
        le_house = new QLineEdit(pb_change_employee_info);
        le_house->setObjectName(QStringLiteral("le_house"));
        le_house->setGeometry(QRect(470, 270, 151, 20));
        le_pwd = new QLineEdit(pb_change_employee_info);
        le_pwd->setObjectName(QStringLiteral("le_pwd"));
        le_pwd->setGeometry(QRect(470, 320, 151, 20));
        pb_commit = new QPushButton(pb_change_employee_info);
        pb_commit->setObjectName(QStringLiteral("pb_commit"));
        pb_commit->setGeometry(QRect(180, 370, 75, 23));
        pb_cancel = new QPushButton(pb_change_employee_info);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));
        pb_cancel->setGeometry(QRect(390, 370, 75, 23));
        stackedWidget->addWidget(pb_change_employee_info);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        tabWidget->addTab(tb_change_employee_info, QString());
        tb_view_salary = new QWidget();
        tb_view_salary->setObjectName(QStringLiteral("tb_view_salary"));
        tabWidget->addTab(tb_view_salary, QString());
        tb_view_attendance = new QWidget();
        tb_view_attendance->setObjectName(QStringLiteral("tb_view_attendance"));
        tabWidget->addTab(tb_view_attendance, QString());
        tb_set_date_of_salary_settlement = new QWidget();
        tb_set_date_of_salary_settlement->setObjectName(QStringLiteral("tb_set_date_of_salary_settlement"));
        tabWidget->addTab(tb_set_date_of_salary_settlement, QString());
        tb_department_salary_compare = new QWidget();
        tb_department_salary_compare->setObjectName(QStringLiteral("tb_department_salary_compare"));
        tabWidget->addTab(tb_department_salary_compare, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(AdministratorDisplay);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdministratorDisplay);
    } // setupUi

    void retranslateUi(QWidget *AdministratorDisplay)
    {
        AdministratorDisplay->setWindowTitle(QApplication::translate("AdministratorDisplay", "Form", 0));
        pushButton->setText(QApplication::translate("AdministratorDisplay", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("AdministratorDisplay", "\345\242\236\345\212\240\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        pushButton_3->setText(QApplication::translate("AdministratorDisplay", "\345\210\240\351\231\244\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        lb_info->setText(QApplication::translate("AdministratorDisplay", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\345\221\230\345\267\245\345\220\215\345\255\227\357\274\232", 0));
        pb_choose_is_change->setText(QApplication::translate("AdministratorDisplay", "\344\277\256\346\224\271", 0));
        lb_name->setText(QApplication::translate("AdministratorDisplay", "\345\247\223\345\220\215\357\274\232", 0));
        lb_job_id->setText(QApplication::translate("AdministratorDisplay", "\345\267\245\345\217\267\357\274\232", 0));
        lb_post->setText(QApplication::translate("AdministratorDisplay", "\345\262\227\344\275\215\357\274\232", 0));
        lb_department->setText(QApplication::translate("AdministratorDisplay", "\346\211\200\345\261\236\351\203\250\351\227\250\357\274\232", 0));
        lb_entry_time->setText(QApplication::translate("AdministratorDisplay", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", 0));
        lb_turn_time->setText(QApplication::translate("AdministratorDisplay", "\350\275\254\346\255\243\346\227\266\351\227\264\357\274\232", 0));
        lb_education->setText(QApplication::translate("AdministratorDisplay", "\346\225\231\350\202\262\347\273\217\345\216\206\357\274\232", 0));
        lb_basic_wage->setText(QApplication::translate("AdministratorDisplay", "\345\237\272\346\234\254\345\267\245\350\265\204\357\274\232", 0));
        lb_trasport->setText(QApplication::translate("AdministratorDisplay", "\344\272\244\351\200\232\350\241\245\350\264\264\357\274\232", 0));
        lb_food->setText(QApplication::translate("AdministratorDisplay", "\351\244\220\350\241\245\357\274\232", 0));
        lb_house->setText(QApplication::translate("AdministratorDisplay", "\344\275\217\346\210\277\350\241\245\350\264\264\357\274\232", 0));
        lb_pwd->setText(QApplication::translate("AdministratorDisplay", "\345\257\206\347\240\201\357\274\232", 0));
        pb_commit->setText(QApplication::translate("AdministratorDisplay", "\346\217\220\344\272\244", 0));
        pb_cancel->setText(QApplication::translate("AdministratorDisplay", "\345\217\226\346\266\210", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_change_employee_info), QApplication::translate("AdministratorDisplay", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_view_salary), QApplication::translate("AdministratorDisplay", "\346\237\245\347\234\213\345\267\245\350\265\204", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_view_attendance), QApplication::translate("AdministratorDisplay", "\346\237\245\347\234\213\350\200\203\345\213\244", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_set_date_of_salary_settlement), QApplication::translate("AdministratorDisplay", "\350\256\276\345\256\232\345\267\245\350\265\204\347\273\223\347\256\227\347\232\204\346\227\245\346\234\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_department_salary_compare), QApplication::translate("AdministratorDisplay", "\351\203\250\351\227\250\350\226\252\350\265\204\346\257\224\350\276\203", 0));
    } // retranslateUi

};

namespace Ui {
    class AdministratorDisplay: public Ui_AdministratorDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORDISPLAY_H
