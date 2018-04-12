#ifndef WLOGIN_H
#define WLOGIN_H

#include <QWidget>

namespace Ui {
class WLogin;
}

class WLogin : public QWidget
{
    Q_OBJECT

public:
    explicit WLogin(QWidget *parent = 0);
    ~WLogin();

private slots:
    void on_pbSair_clicked();

    void on_pbEntrar_clicked();

private:
    Ui::WLogin *ui;
};

#endif // WLOGIN_H
