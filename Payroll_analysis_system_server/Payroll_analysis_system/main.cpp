#include "widget.h"
#include <QApplication>
#include "logicdeal.h"
#include "employeedisplay.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    Widget w;
    w.show();
//    EmployeeDisplay e;
//    e.show();

    return a.exec();
}
