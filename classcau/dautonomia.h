#ifndef DAUTONOMIA_H
#define DAUTONOMIA_H

#include <QDialog>

namespace Ui {
class DAutonomia;
}

class DAutonomia : public QDialog
{
    Q_OBJECT

public:
    explicit DAutonomia(QWidget *parent = 0);
    ~DAutonomia();

private:
    Ui::DAutonomia *ui;
};

#endif // DAUTONOMIA_H
