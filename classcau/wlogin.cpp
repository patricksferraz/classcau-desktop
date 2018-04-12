#include "wlogin.h"
#include "ui_wlogin.h"
#include "dtelainicial.h"

WLogin::WLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLogin)
{
    ui->setupUi(this);
}

WLogin::~WLogin()
{
    delete ui;
}

void WLogin::on_pbSair_clicked()
{
    close();
}

void WLogin::on_pbEntrar_clicked()
{
    DTelaInicial telaInicial;
    telaInicial.setModal(true);
    telaInicial.exec();
}
