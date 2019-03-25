/********************************************************************************
** Form generated from reading UI file 'employeedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDISPLAY_H
#define UI_EMPLOYEEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDisplay
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tb_view_salary;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pg_choose_view_way;
    QPushButton *pb_view_one_month_info;
    QPushButton *pb_view_multi_month_info;
    QWidget *pb_choose_one_month_view;
    QGridLayout *gridLayout_3;
    QComboBox *cb_choose_year;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cb_choose_month;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cb_choose_view_way;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_watch;
    QSpacerItem *horizontalSpacer_4;
    QStackedWidget *show_way;
    QWidget *table_show;
    QWidget *pie_chart_show;
    QWidget *pg_choose_more_month_view;
    QWidget *tb_attendance_rate;
    QWidget *tb_competitive_analysis;

    void setupUi(QWidget *EmployeeDisplay)
    {
        if (EmployeeDisplay->objectName().isEmpty())
            EmployeeDisplay->setObjectName(QStringLiteral("EmployeeDisplay"));
        EmployeeDisplay->resize(752, 466);
        gridLayout = new QGridLayout(EmployeeDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(EmployeeDisplay);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tb_view_salary = new QWidget();
        tb_view_salary->setObjectName(QStringLiteral("tb_view_salary"));
        gridLayout_2 = new QGridLayout(tb_view_salary);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(tb_view_salary);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pg_choose_view_way = new QWidget();
        pg_choose_view_way->setObjectName(QStringLiteral("pg_choose_view_way"));
        pb_view_one_month_info = new QPushButton(pg_choose_view_way);
        pb_view_one_month_info->setObjectName(QStringLiteral("pb_view_one_month_info"));
        pb_view_one_month_info->setGeometry(QRect(240, 130, 201, 31));
        pb_view_multi_month_info = new QPushButton(pg_choose_view_way);
        pb_view_multi_month_info->setObjectName(QStringLiteral("pb_view_multi_month_info"));
        pb_view_multi_month_info->setGeometry(QRect(240, 200, 201, 31));
        stackedWidget->addWidget(pg_choose_view_way);
        pb_choose_one_month_view = new QWidget();
        pb_choose_one_month_view->setObjectName(QStringLiteral("pb_choose_one_month_view"));
        gridLayout_3 = new QGridLayout(pb_choose_one_month_view);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cb_choose_year = new QComboBox(pb_choose_one_month_view);
        cb_choose_year->setObjectName(QStringLiteral("cb_choose_year"));

        gridLayout_3->addWidget(cb_choose_year, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(92, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        cb_choose_month = new QComboBox(pb_choose_one_month_view);
        cb_choose_month->setObjectName(QStringLiteral("cb_choose_month"));

        gridLayout_3->addWidget(cb_choose_month, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        cb_choose_view_way = new QComboBox(pb_choose_one_month_view);
        cb_choose_view_way->setObjectName(QStringLiteral("cb_choose_view_way"));

        gridLayout_3->addWidget(cb_choose_view_way, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(92, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 5, 1, 1);

        pb_watch = new QPushButton(pb_choose_one_month_view);
        pb_watch->setObjectName(QStringLiteral("pb_watch"));

        gridLayout_3->addWidget(pb_watch, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        show_way = new QStackedWidget(pb_choose_one_month_view);
        show_way->setObjectName(QStringLiteral("show_way"));
        table_show = new QWidget();
        table_show->setObjectName(QStringLiteral("table_show"));
        show_way->addWidget(table_show);
        pie_chart_show = new QWidget();
        pie_chart_show->setObjectName(QStringLiteral("pie_chart_show"));
        show_way->addWidget(pie_chart_show);

        gridLayout_3->addWidget(show_way, 1, 0, 1, 8);

        stackedWidget->addWidget(pb_choose_one_month_view);
        pg_choose_more_month_view = new QWidget();
        pg_choose_more_month_view->setObjectName(QStringLiteral("pg_choose_more_month_view"));
        stackedWidget->addWidget(pg_choose_more_month_view);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        tabWidget->addTab(tb_view_salary, QString());
        tb_attendance_rate = new QWidget();
        tb_attendance_rate->setObjectName(QStringLiteral("tb_attendance_rate"));
        tabWidget->addTab(tb_attendance_rate, QString());
        tb_competitive_analysis = new QWidget();
        tb_competitive_analysis->setObjectName(QStringLiteral("tb_competitive_analysis"));
        tabWidget->addTab(tb_competitive_analysis, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(EmployeeDisplay);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EmployeeDisplay);
    } // setupUi

    void retranslateUi(QWidget *EmployeeDisplay)
    {
        EmployeeDisplay->setWindowTitle(QApplication::translate("EmployeeDisplay", "Form", 0));
        pb_view_one_month_info->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\350\257\246\347\273\206\357\274\210\346\237\220\346\234\210\357\274\211\344\277\241\346\201\257", 0));
        pb_view_multi_month_info->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\346\257\224\350\276\203\357\274\210\345\244\232\346\234\210\357\274\211\344\277\241\346\201\257", 0));
        cb_choose_year->clear();
        cb_choose_year->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "2016\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2017\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2018\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2019\345\271\264", 0)
        );
        cb_choose_month->clear();
        cb_choose_month->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "1\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "2\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "3\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "4\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "5\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "6\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "7\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "8\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "9\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "10\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "11\346\234\210", 0)
         << QApplication::translate("EmployeeDisplay", "12\346\234\210", 0)
        );
        cb_choose_view_way->clear();
        cb_choose_view_way->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "\350\241\250\346\240\274\346\230\276\347\244\272", 0)
         << QApplication::translate("EmployeeDisplay", "\351\245\274\347\212\266\345\233\276\346\230\276\347\244\272", 0)
        );
        pb_watch->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_view_salary), QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\345\267\245\350\265\204", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_attendance_rate), QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\350\200\203\345\213\244\347\216\207", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_competitive_analysis), QApplication::translate("EmployeeDisplay", "\347\253\236\344\272\211\345\212\233\345\210\206\346\236\220", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDisplay: public Ui_EmployeeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDISPLAY_H
