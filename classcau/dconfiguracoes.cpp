#include "dconfiguracoes.h"
#include "ui_dconfiguracoes.h"

DConfiguracoes::DConfiguracoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DConfiguracoes)
{
    ui->setupUi(this);
}

DConfiguracoes::~DConfiguracoes()
{
    delete ui;
}
