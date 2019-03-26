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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorDisplay
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tb_change_employee_info;
    QWidget *tb_view_salary;
    QWidget *tb_view_attendance;
    QWidget *tb_set_date_of_salary_settlement;
    QWidget *tb_department_salary_compare;

    void setupUi(QWidget *AdministratorDisplay)
    {
        if (AdministratorDisplay->objectName().isEmpty())
            AdministratorDisplay->setObjectName(QStringLiteral("AdministratorDisplay"));
        AdministratorDisplay->resize(793, 473);
        gridLayout = new QGridLayout(AdministratorDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(AdministratorDisplay);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tb_change_employee_info = new QWidget();
        tb_change_employee_info->setObjectName(QStringLiteral("tb_change_employee_info"));
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

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(AdministratorDisplay);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdministratorDisplay);
    } // setupUi

    void retranslateUi(QWidget *AdministratorDisplay)
    {
        AdministratorDisplay->setWindowTitle(QApplication::translate("AdministratorDisplay", "Form", 0));
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
