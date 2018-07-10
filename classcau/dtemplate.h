#ifndef DTEMPLATE_H
#define DTEMPLATE_H

#include <QDialog>

namespace Ui {
class DTemplate;
}

class DTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit DTemplate(QWidget *parent = 0);
    ~DTemplate();

private:
    Ui::DTemplate *ui;
};

#endif // DTEMPLATE_H
