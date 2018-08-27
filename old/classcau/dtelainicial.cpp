#include "dtelainicial.h"
#include "ui_dtelainicial.h"

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

void DTelaInicial::on_pbBuscar_clicked()
{
    DBuscador dBuscador;
    dBuscador.setModal(true);
    dBuscador.exec();
}

void DTelaInicial::on_pbAutonomo_clicked()
{
    DAutonomia dAutonomia;
    dAutonomia.setModal(true);
    dAutonomia.exec();
}

void DTelaInicial::on_pbConfiguracoes_clicked()
{
    DConfiguracoes dConfiguracoes;
    dConfiguracoes.setModal(true);
    dConfiguracoes.exec();
}
