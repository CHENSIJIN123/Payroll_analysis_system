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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QWidget *widget_2;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget;
    QWidget *tb_view_salary;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pg_choose_view_way;
    QPushButton *pb_view_one_month_info;
    QPushButton *pb_view_multi_month_info;
    QWidget *pb_choose_one_month_view;
    QComboBox *cb_choose_month;
    QComboBox *cb_choose_year;
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
    QWidget *widget;
    QComboBox *cb_year_choose;
    QPushButton *pb_search;
    Histogram *w_his_view;
    QWidget *tb_attendance_rate;
    QGridLayout *gridLayout_9;
    QStackedWidget *stackedWidget_2;
    QWidget *attendance_choose;
    QPushButton *pb_someday_view;
    QPushButton *pb_some_month_view;
    QWidget *pg_someday_view;
    QComboBox *le_search_day;
    QComboBox *le_search_month;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLineEdit *le_search_year;
    QWidget *pg_some_month_view;
    QLineEdit *le_view_attendance_year;
    QPushButton *pushButton_5;
    QComboBox *le_view_attendance_month;
    QLabel *label_6;
    QLabel *label_8;
    Pie *w_employee_attendance_pie_show;
    QWidget *tb_competitive_analysis;
    QTextEdit *te_process;
    QLabel *lb_result;

    void setupUi(QWidget *EmployeeDisplay)
    {
        if (EmployeeDisplay->objectName().isEmpty())
            EmployeeDisplay->setObjectName(QStringLiteral("EmployeeDisplay"));
        EmployeeDisplay->resize(752, 466);
        EmployeeDisplay->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/static/images/bg.jpg);"));
        gridLayout = new QGridLayout(EmployeeDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(EmployeeDisplay);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral(""));
        gridLayout_10 = new QGridLayout(widget_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tabWidget = new QTabWidget(widget_2);
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
        pb_view_one_month_info->setGeometry(QRect(220, 130, 201, 31));
        pb_view_one_month_info->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        pb_view_multi_month_info = new QPushButton(pg_choose_view_way);
        pb_view_multi_month_info->setObjectName(QStringLiteral("pb_view_multi_month_info"));
        pb_view_multi_month_info->setGeometry(QRect(220, 200, 201, 31));
        pb_view_multi_month_info->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        stackedWidget->addWidget(pg_choose_view_way);
        pb_choose_one_month_view = new QWidget();
        pb_choose_one_month_view->setObjectName(QStringLiteral("pb_choose_one_month_view"));
        cb_choose_month = new QComboBox(pb_choose_one_month_view);
        cb_choose_month->setObjectName(QStringLiteral("cb_choose_month"));
        cb_choose_month->setGeometry(QRect(146, 9, 51, 16));
        cb_choose_month->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        cb_choose_year = new QComboBox(pb_choose_one_month_view);
        cb_choose_year->setObjectName(QStringLiteral("cb_choose_year"));
        cb_choose_year->setGeometry(QRect(9, 9, 71, 16));
        cb_choose_year->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        cb_choose_view_way = new QComboBox(pb_choose_one_month_view);
        cb_choose_view_way->setObjectName(QStringLiteral("cb_choose_view_way"));
        cb_choose_view_way->setGeometry(QRect(283, 9, 77, 16));
        cb_choose_view_way->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        pb_watch = new QPushButton(pb_choose_one_month_view);
        pb_watch->setObjectName(QStringLiteral("pb_watch"));
        pb_watch->setGeometry(QRect(550, 20, 61, 16));
        pb_watch->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        show_way = new QStackedWidget(pb_choose_one_month_view);
        show_way->setObjectName(QStringLiteral("show_way"));
        show_way->setGeometry(QRect(9, 41, 681, 351));
        show_way->setStyleSheet(QLatin1String("\n"
"border-image:none;"));
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
        textEdit->setStyleSheet(QStringLiteral("border-image: none;"));

        gridLayout_5->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_4->addWidget(table_show_widget, 0, 0, 1, 1);

        show_way->addWidget(table_show);
        pie_chart_show = new QWidget();
        pie_chart_show->setObjectName(QStringLiteral("pie_chart_show"));
        gridLayout_6 = new QGridLayout(pie_chart_show);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        w_pie_view = new Pie(pie_chart_show);
        w_pie_view->setObjectName(QStringLiteral("w_pie_view"));
        w_pie_view->setStyleSheet(QStringLiteral("border-image: none;"));

        gridLayout_6->addWidget(w_pie_view, 0, 0, 1, 1);

        show_way->addWidget(pie_chart_show);
        stackedWidget->addWidget(pb_choose_one_month_view);
        pg_choose_more_month_view = new QWidget();
        pg_choose_more_month_view->setObjectName(QStringLiteral("pg_choose_more_month_view"));
        widget = new QWidget(pg_choose_more_month_view);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 676, 371));
        widget->setStyleSheet(QStringLiteral("border-image:none;"));
        cb_year_choose = new QComboBox(widget);
        cb_year_choose->setObjectName(QStringLiteral("cb_year_choose"));
        cb_year_choose->setGeometry(QRect(170, 20, 62, 20));
        cb_year_choose->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        pb_search = new QPushButton(widget);
        pb_search->setObjectName(QStringLiteral("pb_search"));
        pb_search->setGeometry(QRect(410, 20, 75, 23));
        pb_search->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        w_his_view = new Histogram(widget);
        w_his_view->setObjectName(QStringLiteral("w_his_view"));
        w_his_view->setGeometry(QRect(9, 57, 658, 321));
        w_his_view->setStyleSheet(QStringLiteral("border-image: none;"));
        stackedWidget->addWidget(pg_choose_more_month_view);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        tabWidget->addTab(tb_view_salary, QString());
        tb_attendance_rate = new QWidget();
        tb_attendance_rate->setObjectName(QStringLiteral("tb_attendance_rate"));
        gridLayout_9 = new QGridLayout(tb_attendance_rate);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        stackedWidget_2 = new QStackedWidget(tb_attendance_rate);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        attendance_choose = new QWidget();
        attendance_choose->setObjectName(QStringLiteral("attendance_choose"));
        pb_someday_view = new QPushButton(attendance_choose);
        pb_someday_view->setObjectName(QStringLiteral("pb_someday_view"));
        pb_someday_view->setGeometry(QRect(220, 130, 201, 31));
        pb_someday_view->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        pb_some_month_view = new QPushButton(attendance_choose);
        pb_some_month_view->setObjectName(QStringLiteral("pb_some_month_view"));
        pb_some_month_view->setGeometry(QRect(220, 200, 201, 31));
        pb_some_month_view->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        stackedWidget_2->addWidget(attendance_choose);
        pg_someday_view = new QWidget();
        pg_someday_view->setObjectName(QStringLiteral("pg_someday_view"));
        le_search_day = new QComboBox(pg_someday_view);
        le_search_day->setObjectName(QStringLiteral("le_search_day"));
        le_search_day->setGeometry(QRect(300, 30, 69, 22));
        le_search_day->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        le_search_month = new QComboBox(pg_someday_view);
        le_search_month->setObjectName(QStringLiteral("le_search_month"));
        le_search_month->setGeometry(QRect(190, 30, 69, 22));
        le_search_month->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        label_3 = new QLabel(pg_someday_view);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 51, 21));
        label_3->setStyleSheet(QLatin1String("text-align:center;\n"
"color:#fff;\n"
"border-image: none;"));
        label_4 = new QLabel(pg_someday_view);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 30, 41, 21));
        label_4->setStyleSheet(QLatin1String("text-align:center;\n"
"color:#fff;\n"
"border-image: none;"));
        textEdit_2 = new QTextEdit(pg_someday_view);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 80, 701, 321));
        textEdit_2->setStyleSheet(QStringLiteral("border-image: none;"));
        pushButton_4 = new QPushButton(pg_someday_view);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 30, 75, 23));
        pushButton_4->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        label_5 = new QLabel(pg_someday_view);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 30, 31, 21));
        label_5->setStyleSheet(QLatin1String("text-align:center;\n"
"color:#fff;\n"
"border-image: none;"));
        le_search_year = new QLineEdit(pg_someday_view);
        le_search_year->setObjectName(QStringLiteral("le_search_year"));
        le_search_year->setGeometry(QRect(70, 30, 61, 20));
        le_search_year->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        stackedWidget_2->addWidget(pg_someday_view);
        pg_some_month_view = new QWidget();
        pg_some_month_view->setObjectName(QStringLiteral("pg_some_month_view"));
        le_view_attendance_year = new QLineEdit(pg_some_month_view);
        le_view_attendance_year->setObjectName(QStringLiteral("le_view_attendance_year"));
        le_view_attendance_year->setGeometry(QRect(70, 20, 61, 20));
        le_view_attendance_year->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        pushButton_5 = new QPushButton(pg_some_month_view);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(530, 20, 75, 23));
        pushButton_5->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        le_view_attendance_month = new QComboBox(pg_some_month_view);
        le_view_attendance_month->setObjectName(QStringLiteral("le_view_attendance_month"));
        le_view_attendance_month->setGeometry(QRect(190, 20, 69, 22));
        le_view_attendance_month->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;"));
        label_6 = new QLabel(pg_some_month_view);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 20, 41, 21));
        label_6->setStyleSheet(QLatin1String("text-align:center;\n"
"color:#fff;\n"
"border-image: none;"));
        label_8 = new QLabel(pg_some_month_view);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 20, 41, 21));
        label_8->setStyleSheet(QLatin1String("text-align:center;\n"
"color:#fff;\n"
"border-image: none;"));
        w_employee_attendance_pie_show = new Pie(pg_some_month_view);
        w_employee_attendance_pie_show->setObjectName(QStringLiteral("w_employee_attendance_pie_show"));
        w_employee_attendance_pie_show->setGeometry(QRect(20, 60, 671, 351));
        w_employee_attendance_pie_show->setStyleSheet(QStringLiteral("border-image: none;"));
        stackedWidget_2->addWidget(pg_some_month_view);

        gridLayout_9->addWidget(stackedWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tb_attendance_rate, QString());
        tb_competitive_analysis = new QWidget();
        tb_competitive_analysis->setObjectName(QStringLiteral("tb_competitive_analysis"));
        te_process = new QTextEdit(tb_competitive_analysis);
        te_process->setObjectName(QStringLiteral("te_process"));
        te_process->setGeometry(QRect(50, 30, 631, 131));
        te_process->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"border: 1px solid #4288CE;\n"
"background:rgba(0,0,0,0.2);\n"
"color:#fff;\n"
"border-image:none;"));
        lb_result = new QLabel(tb_competitive_analysis);
        lb_result->setObjectName(QStringLiteral("lb_result"));
        lb_result->setGeometry(QRect(110, 230, 521, 101));
        lb_result->setStyleSheet(QLatin1String("background-color: rgb(248, 138, 255);\n"
"border-radius: 10px;\n"
"border: 1px solid #4288CE;\n"
"background:rgba(0,0,0,0.2);\n"
"color:#fff;\n"
"border-image:none;"));
        tabWidget->addTab(tb_competitive_analysis, QString());

        gridLayout_10->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);


        retranslateUi(EmployeeDisplay);

        tabWidget->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(2);
        show_way->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(2);


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
        pb_someday_view->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\346\237\220\346\227\245\350\200\203\345\213\244", 0));
        pb_some_month_view->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\347\234\213\346\237\220\346\234\210\350\200\203\345\213\244\347\216\207", 0));
        le_search_day->clear();
        le_search_day->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "01", 0)
         << QApplication::translate("EmployeeDisplay", "02", 0)
         << QApplication::translate("EmployeeDisplay", "03", 0)
         << QApplication::translate("EmployeeDisplay", "04", 0)
         << QApplication::translate("EmployeeDisplay", "05", 0)
         << QApplication::translate("EmployeeDisplay", "06", 0)
         << QApplication::translate("EmployeeDisplay", "07", 0)
         << QApplication::translate("EmployeeDisplay", "08", 0)
         << QApplication::translate("EmployeeDisplay", "09", 0)
         << QApplication::translate("EmployeeDisplay", "10", 0)
         << QApplication::translate("EmployeeDisplay", "11", 0)
         << QApplication::translate("EmployeeDisplay", "12", 0)
         << QApplication::translate("EmployeeDisplay", "13", 0)
         << QApplication::translate("EmployeeDisplay", "14", 0)
         << QApplication::translate("EmployeeDisplay", "15", 0)
         << QApplication::translate("EmployeeDisplay", "16", 0)
         << QApplication::translate("EmployeeDisplay", "17", 0)
         << QApplication::translate("EmployeeDisplay", "18", 0)
         << QApplication::translate("EmployeeDisplay", "19", 0)
         << QApplication::translate("EmployeeDisplay", "20", 0)
         << QApplication::translate("EmployeeDisplay", "21", 0)
         << QApplication::translate("EmployeeDisplay", "22", 0)
         << QApplication::translate("EmployeeDisplay", "23", 0)
         << QApplication::translate("EmployeeDisplay", "24", 0)
         << QApplication::translate("EmployeeDisplay", "25", 0)
         << QApplication::translate("EmployeeDisplay", "26", 0)
         << QApplication::translate("EmployeeDisplay", "27", 0)
         << QApplication::translate("EmployeeDisplay", "28", 0)
         << QApplication::translate("EmployeeDisplay", "29", 0)
         << QApplication::translate("EmployeeDisplay", "30", 0)
         << QApplication::translate("EmployeeDisplay", "31", 0)
         << QString()
        );
        le_search_month->clear();
        le_search_month->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "01", 0)
         << QApplication::translate("EmployeeDisplay", "02", 0)
         << QApplication::translate("EmployeeDisplay", "03", 0)
         << QApplication::translate("EmployeeDisplay", "04", 0)
         << QApplication::translate("EmployeeDisplay", "05", 0)
         << QApplication::translate("EmployeeDisplay", "06", 0)
         << QApplication::translate("EmployeeDisplay", "07", 0)
         << QApplication::translate("EmployeeDisplay", "08", 0)
         << QApplication::translate("EmployeeDisplay", "09", 0)
         << QApplication::translate("EmployeeDisplay", "10", 0)
         << QApplication::translate("EmployeeDisplay", "11", 0)
         << QApplication::translate("EmployeeDisplay", "12", 0)
        );
        label_3->setText(QApplication::translate("EmployeeDisplay", "\345\271\264\344\273\275\357\274\232", 0));
        label_4->setText(QApplication::translate("EmployeeDisplay", "\346\234\210\344\273\275\357\274\232", 0));
        pushButton_4->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\350\257\242", 0));
        label_5->setText(QApplication::translate("EmployeeDisplay", "\345\244\251\357\274\232", 0));
        pushButton_5->setText(QApplication::translate("EmployeeDisplay", "\346\237\245\350\257\242", 0));
        le_view_attendance_month->clear();
        le_view_attendance_month->insertItems(0, QStringList()
         << QApplication::translate("EmployeeDisplay", "01", 0)
         << QApplication::translate("EmployeeDisplay", "02", 0)
         << QApplication::translate("EmployeeDisplay", "03", 0)
         << QApplication::translate("EmployeeDisplay", "04", 0)
         << QApplication::translate("EmployeeDisplay", "05", 0)
         << QApplication::translate("EmployeeDisplay", "06", 0)
         << QApplication::translate("EmployeeDisplay", "07", 0)
         << QApplication::translate("EmployeeDisplay", "08", 0)
         << QApplication::translate("EmployeeDisplay", "09", 0)
         << QApplication::translate("EmployeeDisplay", "10", 0)
         << QApplication::translate("EmployeeDisplay", "11", 0)
         << QApplication::translate("EmployeeDisplay", "12", 0)
        );
        label_6->setText(QApplication::translate("EmployeeDisplay", "\345\271\264\344\273\275\357\274\232", 0));
        label_8->setText(QApplication::translate("EmployeeDisplay", "\346\234\210\344\273\275\357\274\232", 0));
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
