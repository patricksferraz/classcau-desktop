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

void DClassificador::on_pbInput_clicked()
{
    QString file_filters = "JPEG image (*.jpeg *.jpg *.jpe) ;; PNG image (*.png)"; // Filtro para leitura das imagens
    file_name = QFileDialog::getOpenFileName(this, "Abrir imagem", QDir::homePath(), file_filters); // Captura do path da imagem

    QImage imgAmendoa(file_name); // Preparando imagem para exibição
    itemIn = new QGraphicsPixmapItem(QPixmap::fromImage(imgAmendoa));
    sceneIn = new QGraphicsScene(this);
    ui->gvImage->setScene(sceneIn);
    sceneIn->addItem(itemIn);
}

/**
 * TODO: Falta corrigir as imagens dinâmicas
*/
void DClassificador::on_pbExtrair_clicked()
{
    if (file_name != NULL)
    {
        Segmentador seg(file_name.toStdString()); // Segmentando a imagem path
        QImage imgResult("/home/ferraz/Documentos/dev_area/projects/uesc/uesc_tcc/classcau/result/temp.png"); // Preparando imagem resultado para exibição
        itemOut = new QGraphicsPixmapItem(QPixmap::fromImage(imgResult));
        sceneOut = new QGraphicsScene(this);
        ui->gvResult->setScene(sceneOut);
        sceneOut->addItem(itemOut);
    }
    else
    {
        QMessageBox::information(this, "Atenção", "Selecione uma imagem antes da segmentação");
    }
}
