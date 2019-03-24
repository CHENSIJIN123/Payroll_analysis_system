#include "widget.h"
#include <QApplication>
#include "drivedb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Drivedb db;
    Widget w;
    w.show();

    return a.exec();
}
