#include "dclassificador.h"
#include "ui_dclassificador.h"

DClassificador::DClassificador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DClassificador)
{
    ui->setupUi(this);
}

DClassificador::~DClassificador()
{
    delete ui;
}
