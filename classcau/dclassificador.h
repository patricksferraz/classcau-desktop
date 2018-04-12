#ifndef DCLASSIFICADOR_H
#define DCLASSIFICADOR_H

#include <QDialog>

namespace Ui {
class DClassificador;
}

class DClassificador : public QDialog
{
    Q_OBJECT

public:
    explicit DClassificador(QWidget *parent = 0);
    ~DClassificador();

private:
    Ui::DClassificador *ui;
};

#endif // DCLASSIFICADOR_H
