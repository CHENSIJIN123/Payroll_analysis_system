/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QLineEdit *le_name;
    QLineEdit *le_psw;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_login;
    QPushButton *pb_punch;
    QLabel *lb_time_show;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(819, 494);
        Widget->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 120, 371, 241));
        widget->setStyleSheet(QLatin1String("border-image:none;\n"
"border-radius:16px;\n"
"background:rgba(0,0,0,0.3);\n"
"color:#fff"));
        le_name = new QLineEdit(widget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(40, 70, 201, 31));
        le_name->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"border: 1px solid #4288CE;\n"
"background:rgba(0,0,0,0.2);\n"
"color:#fff;\n"
"border-image:none;"));
        le_psw = new QLineEdit(widget);
        le_psw->setObjectName(QStringLiteral("le_psw"));
        le_psw->setGeometry(QRect(40, 150, 201, 31));
        le_psw->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"border: 1px solid #4288CE;\n"
"background:rgba(0,0,0,0.2);\n"
"color:#fff;\n"
"border-image:none;"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 70, 61, 21));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 160, 61, 16));
        pb_login = new QPushButton(Widget);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(260, 400, 61, 23));
        pb_login->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;\n"
""));
        pb_punch = new QPushButton(Widget);
        pb_punch->setObjectName(QStringLiteral("pb_punch"));
        pb_punch->setGeometry(QRect(420, 400, 61, 23));
        pb_punch->setStyleSheet(QLatin1String("background: rgba(154, 207, 206,0.5);\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:7px;\n"
"cursor:pointer;\n"
"border-image:none;\n"
""));
        lb_time_show = new QLabel(Widget);
        lb_time_show->setObjectName(QStringLiteral("lb_time_show"));
        lb_time_show->setGeometry(QRect(290, 50, 161, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", 0));
        pb_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", 0));
        pb_punch->setText(QApplication::translate("Widget", "\346\211\223\345\215\241", 0));
        lb_time_show->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
