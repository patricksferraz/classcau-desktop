#include "dautonomia.h"
#include "ui_dautonomia.h"

DAutonomia::DAutonomia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DAutonomia)
{
    ui->setupUi(this);
}

DAutonomia::~DAutonomia()
{
    delete ui;
}
