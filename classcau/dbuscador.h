#ifndef DBUSCADOR_H
#define DBUSCADOR_H

#include <QDialog>

namespace Ui {
class DBuscador;
}

class DBuscador : public QDialog
{
    Q_OBJECT

public:
    explicit DBuscador(QWidget *parent = 0);
    ~DBuscador();

private:
    Ui::DBuscador *ui;
};

#endif // DBUSCADOR_H
