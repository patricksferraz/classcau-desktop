#include "dclassificador.h"
#include "ui_dclassificador.h"
#include <QFileDialog>
#include <QDir>
#include "segmentador.h"

#include <QPixmap>
#include <QMessageBox>

QString file_name;

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

void DClassificador::on_pbInput_clicked()
{
    QLabel *labelAmendoa = new QLabel; // label para imagem da amendoa
    QString file_filters = "JPEG image (*.jpeg *.jpg *.jpe) ;; PNG image (*.png)"; // Filtro para leitura das imagens
    file_name = QFileDialog::getOpenFileName(this, "Abrir imagem", QDir::homePath(), file_filters); // Captura do path da imagem

    QImage imgAmendoa(file_name); // Preparando imagem para exibição
    labelAmendoa->setPixmap(QPixmap::fromImage(imgAmendoa)); // Mesclando imagem a label

    QMessageBox::information(this, "Path", file_name); // Temporário, excluir depois

    ui->saImagem->setWidget(labelAmendoa); // Exibindo imagem na scroll area

}

void DClassificador::on_pbExtrair_clicked()
{
    if (file_name != NULL)
    {
        Segmentador seg(file_name.toStdString()); // Segmentando a imagem path
        QLabel *labelResult = new QLabel; // label para imagem resultado
        QImage imgResult("/home/ferraz/Documentos/dev_area/projects/uesc/uesc_tcc/classcau/result/temp.png"); // Preparando imagem resultado para exibição
        labelResult->setPixmap(QPixmap::fromImage(imgResult)); // Mesclando imagem resultado a label

        QMessageBox::information(this, "Conclusão", "Segmentação realizada com sucesso"); // Mensagem temporária

        ui->saResult->setWidget(labelResult); // Exibindo imagem resultado na scroll area
    }
    else
    {
        QMessageBox::information(this, "Atenção", "Selecione uma imagem antes da segmentação");
    }
}
