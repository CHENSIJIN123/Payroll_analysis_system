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
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *AdministratorDisplay)
    {
        if (AdministratorDisplay->objectName().isEmpty())
            AdministratorDisplay->setObjectName(QStringLiteral("AdministratorDisplay"));
        AdministratorDisplay->resize(793, 473);
        gridLayout = new QGridLayout(AdministratorDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(AdministratorDisplay);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(AdministratorDisplay);

        QMetaObject::connectSlotsByName(AdministratorDisplay);
    } // setupUi

    void retranslateUi(QWidget *AdministratorDisplay)
    {
        AdministratorDisplay->setWindowTitle(QApplication::translate("AdministratorDisplay", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdministratorDisplay", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdministratorDisplay", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class AdministratorDisplay: public Ui_AdministratorDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORDISPLAY_H
