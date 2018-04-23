#ifndef DTELAINICIAL_H
#define DTELAINICIAL_H

#include <QDialog>

namespace Ui {
class DTelaInicial;
}

class DTelaInicial : public QDialog
{
    Q_OBJECT

public:
    explicit DTelaInicial(QWidget *parent = 0);
    ~DTelaInicial();

private slots:
    void on_pbClassificador_clicked();

    void on_pbBuscar_clicked();

    void on_pbAutonomo_clicked();

    void on_pbConfiguracoes_clicked();

private:
    Ui::DTelaInicial *ui;
};

#endif // DTELAINICIAL_H
