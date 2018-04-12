#include "dtelainicial.h"
#include "ui_dtelainicial.h"
#include "dclassificador.h"

DTelaInicial::DTelaInicial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DTelaInicial)
{
    ui->setupUi(this);
}

DTelaInicial::~DTelaInicial()
{
    delete ui;
}

void DTelaInicial::on_pbClassificador_clicked()
{
    DClassificador dClassificador;
    dClassificador.setModal(true);
    dClassificador.exec();
}
