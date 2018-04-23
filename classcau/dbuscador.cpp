#include "dbuscador.h"
#include "ui_dbuscador.h"

DBuscador::DBuscador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBuscador)
{
    ui->setupUi(this);
}

DBuscador::~DBuscador()
{
    delete ui;
}
