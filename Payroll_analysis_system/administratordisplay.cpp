#include "administratordisplay.h"
#include "ui_administratordisplay.h"

AdministratorDisplay::AdministratorDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdministratorDisplay)
{
    ui->setupUi(this);
}

AdministratorDisplay::~AdministratorDisplay()
{
    delete ui;
}
