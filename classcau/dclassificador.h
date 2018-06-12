#ifndef DCLASSIFICADOR_H
#define DCLASSIFICADOR_H

#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include "segmenter.h"

#include <QPixmap>
#include <QMessageBox>

// TENTATIVA DE SCROLL
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QtGui>

namespace Ui {
class DClassificador;
}

class DClassificador : public QDialog
{
    Q_OBJECT

public:
    explicit DClassificador(QWidget *parent = 0);
    ~DClassificador();

private slots:
    void on_pbInput_clicked();

    void on_pbExtrair_clicked();

private:
    Ui::DClassificador *ui;

    QString file_name;
    QGraphicsItem *itemIn;
    QGraphicsItem *itemOut;
    QGraphicsScene *sceneIn;
    QGraphicsScene *sceneOut;
};

#endif // DCLASSIFICADOR_H
