/********************************************************************************
** Form generated from reading UI file 'dtemplate.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTEMPLATE_H
#define UI_DTEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DTemplate
{
public:

    void setupUi(QDialog *DTemplate)
    {
        if (DTemplate->objectName().isEmpty())
            DTemplate->setObjectName(QStringLiteral("DTemplate"));
        DTemplate->resize(640, 480);

        retranslateUi(DTemplate);

        QMetaObject::connectSlotsByName(DTemplate);
    } // setupUi

    void retranslateUi(QDialog *DTemplate)
    {
        DTemplate->setWindowTitle(QApplication::translate("DTemplate", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DTemplate: public Ui_DTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTEMPLATE_H
