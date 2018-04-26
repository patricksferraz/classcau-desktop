#include "dclassificador.h"
#include "ui_dclassificador.h"
#include <QFileDialog>
#include <QDir>

#include <QProcess>
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
    QLabel *labelAmendoa = new QLabel;
    QString file_filters = "JPEG image (*.jpeg *.jpg *.jpe) ;; PNG image (*.png)";
    file_name = QFileDialog::getOpenFileName(this, "Abrir imagem", QDir::homePath(), file_filters);

    QImage imgAmendoa(file_name);
    labelAmendoa->setPixmap(QPixmap::fromImage(imgAmendoa));

    QMessageBox::information(this, "Path", file_name); // Temporário, excluir depois

    ui->saImagem->setWidget(labelAmendoa);

}

void DClassificador::on_pbExtrair_clicked()
{
    QStringList arguments { "/home/ferraz/Documentos/dev_area/projects/uesc/uesc_tcc/classcau/segmentation_method.py", "/home/ferraz/Documentos/dev_area/projects/uesc/uesc_tcc/classcau/class/achatada.jpg" };
    QProcess p;
    if (file_name != NULL)
    {
        p.start("python3.5", arguments);
        p.waitForFinished();
        QMessageBox::information(this, "Conclusão", "Segmentação realizada com sucesso");
    }
    else
    {
        QMessageBox::information(this, "Atenção", "Selecione uma imagem antes da segmentação");
    }
}
