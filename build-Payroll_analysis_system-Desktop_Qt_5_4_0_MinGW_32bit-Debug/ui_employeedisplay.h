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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <histogram.h>
#include <pie.h>

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
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cb_choose_month;
    QComboBox *cb_choose_year;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QComboBox *cb_choose_view_way;
    QPushButton *pb_watch;
    QStackedWidget *show_way;
    QWidget *table_show;
    QGridLayout *gridLayout_4;
    QWidget *table_show_widget;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;
    QWidget *pie_chart_show;
    QGridLayout *gridLayout_6;
    Pie *w_pie_view;
    QWidget *pg_choose_more_month_view;
    QGridLayout *gridLayout_7;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cb_year_choose;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pb_search;
    QSpacerItem *horizontalSpacer_8;
    Histogram *w_his_view;
    QWidget *tb_attendance_rate;
    QWidget *tb_competitive_analysis;
    QTextEdit *te_process;
    QLabel *lb_result;

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
        horizontalSpacer_2 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        cb_choose_month = new QComboBox(pb_choose_one_month_view);
        cb_choose_month->setObjectName(QStringLiteral("cb_choose_month"));

        gridLayout_3->addWidget(cb_choose_month, 0, 2, 1, 1);

        cb_choose_year = new QComboBox(pb_choose_one_month_view);
        cb_choose_year->setObjectName(QStringLiteral("cb_choose_year"));

        gridLayout_3->addWidget(cb_choose_year, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(92, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(92, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 5, 1, 1);

        cb_choose_view_way = new QComboBox(pb_choose_one_month_view);
        cb_choose_view_way->setObjectName(QStringLiteral("cb_choose_view_way"));

        gridLayout_3->addWidget(cb_choose_view_way, 0, 4, 1, 1);

        pb_watch = new QPushButton(pb_choose_one_month_view);
        pb_watch->setObjectName(QStringLiteral("pb_watch"));

        gridLayout_3->addWidget(pb_watch, 0, 6, 1, 1);

        show_way = new QStackedWidget(pb_choose_one_month_view);
        show_way->setObjectName(QStringLiteral("show_way"));
        table_show = new QWidget();
        table_show->setObjectName(QStringLiteral("table_show"));
        gridLayout_4 = new QGridLayout(table_show);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        table_show_widget = new QWidget(table_show);
        table_show_widget->setObjectName(QStringLiteral("table_show_widget"));
        gridLayout_5 = new QGridLayout(table_show_widget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textEdit = new QTextEdit(table_show_widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_5->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_4->addWidget(table_show_widget, 0, 0, 1, 1);

        show_way->addWidget(table_show);
        pie_chart_show = new QWidget();
        pie_chart_show->setObjectName(QStringLiteral("pie_chart_show"));
        gridLayout_6 = new QGridLayout(pie_chart_show);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        w_pie_view = new Pie(pie_chart_show);
        w_pie_view->setObjectName(QStringLiteral("w_pie_view"));

        gridLayout_6->addWidget(w_pie_view, 0, 0, 1, 1);

        show_way->addWidget(pie_chart_show);

        gridLayout_3->addWidget(show_way, 1, 0, 1, 8);

        stackedWidget->addWidget(pb_choose_one_month_view);
        pg_choose_more_month_view = new QWidget();
        pg_choose_more_month_view->setObjectName(QStringLiteral("pg_choose_more_month_view"));
        gridLayout_7 = new QGridLayout(pg_choose_more_month_view);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        widget = new QWidget(pg_choose_more_month_view);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        cb_year_choose = new QComboBox(widget);
        cb_year_choose->setObjectName(QStringLiteral("cb_year_choose"));

        gridLayout_8->addWidget(cb_year_choose, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        pb_search = new QPushButton(widget);
        pb_search->setObjectName(QStringLiteral("pb_search"));

        gridLayout_8->addWidget(pb_search, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        w_his_view = new Histogram(widget);
        w_his_view->setObjectName(QStringLiteral("w_his_view"));

        gridLayout_8->addWidget(w_his_view, 1, 0, 1, 5);


        gridLayout_7->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(pg_choose_more_month_view);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        tabWidget->addTab(tb_view_salary, QString());
        tb_attendance_rate = new QWidget();
        tb_attendance_rate->setObjectName(QStringLiteral("tb_attendance_rate"));
        tabWidget->addTab(tb_attendance_rate, QString());
        tb_competitive_analysis = new QWidget();
        tb_competitive_analysis->setObjectName(QStringLiteral("tb_competitive_analysis"));
        te_process = new QTextEdit(tb_competitive_analysis);
        te_process->setObjectName(QStringLiteral("te_process"));
        te_process->setGeometry(QRect(50, 30, 631, 131));
        lb_result = new QLabel(tb_competitive_analysis);
        lb_result->setObjectName(QStringLiteral("lb_result"));
        lb_result->setGeometry(QRect(110, 230, 521, 101));
        lb_result->setStyleSheet(QStringLiteral("background-color: rgb(248, 138, 255);"));
        tabWidget->addTab(tb_competitive_analysis, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(EmployeeDisplay);

        tabWidget->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(1);
        show_way->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EmployeeDisplay);
    } // setupUi

    void retranslateUi(QWidget *EmployeeDisplay)
    {
        EmployeeDisplay->setWindowTitle(QApplication::translate("EmployeeDisplay", "Form", 0));
        pb_view_one_month_info->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\350\257\246\347\273\206\357\274\210\346\237\220\346\234\210\357\274\211\344\277\241\346\201\257", 0));
        pb_view_multi_month_info->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\346\257\224\350\276\203\357\274\210\345\244\232\346\234\210\357\274\211\344\277\241\346\201\257", 0));
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
        cb_choose_year->clear();
        cb_choose_year->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "2016\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2017\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2018\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2019\345\271\264", 0)
        );
        cb_choose_view_way->clear();
        cb_choose_view_way->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "\350\241\250\346\240\274\346\230\276\347\244\272", 0)
         << QApplication::translate("EmployeeDisplay", "\351\245\274\347\212\266\345\233\276\346\230\276\347\244\272", 0)
        );
        pb_watch->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213", 0));
        cb_year_choose->clear();
        cb_year_choose->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "2016\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2017\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2018\345\271\264", 0)
         << QApplication::translate("EmployeeDisplay", "2019\345\271\264", 0)
        );
        pb_search->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_view_salary), QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\345\267\245\350\265\204", 0));
        tabWidget->setTabText(tabWidget->indexOf(tb_attendance_rate), QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\350\200\203\345\213\244", 0));
        lb_result->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tb_competitive_analysis), QApplication::translate("EmployeeDisplay", "\347\253\236\344\272\211\345\212\233\345\210\206\346\236\220", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDisplay: public Ui_EmployeeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDISPLAY_H
