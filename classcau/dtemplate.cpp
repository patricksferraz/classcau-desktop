#include "dtemplate.h"
#include "ui_dtemplate.h"

DTemplate::DTemplate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DTemplate)
{
    ui->setupUi(this);
}

DTemplate::~DTemplate()
{
    delete ui;
}
