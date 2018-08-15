#ifndef DCONFIGURACOES_H
#define DCONFIGURACOES_H

#include <QDialog>

namespace Ui {
class DConfiguracoes;
}

class DConfiguracoes : public QDialog
{
    Q_OBJECT

public:
    explicit DConfiguracoes(QWidget *parent = 0);
    ~DConfiguracoes();

private:
    Ui::DConfiguracoes *ui;
};

#endif // DCONFIGURACOES_H
