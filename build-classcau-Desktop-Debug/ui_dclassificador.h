/********************************************************************************
** Form generated from reading UI file 'dclassificador.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCLASSIFICADOR_H
#define UI_DCLASSIFICADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DClassificador
{
public:
    QGridLayout *glClassificador;
    QFrame *fClassificador;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lModoAvancado;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;

    void setupUi(QDialog *DClassificador)
    {
        if (DClassificador->objectName().isEmpty())
            DClassificador->setObjectName(QStringLiteral("DClassificador"));
        DClassificador->resize(800, 600);
        glClassificador = new QGridLayout(DClassificador);
        glClassificador->setSpacing(0);
        glClassificador->setObjectName(QStringLiteral("glClassificador"));
        glClassificador->setContentsMargins(0, 0, 0, 0);
        fClassificador = new QFrame(DClassificador);
        fClassificador->setObjectName(QStringLiteral("fClassificador"));
        fClassificador->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fClassificador->setFrameShape(QFrame::StyledPanel);
        fClassificador->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(fClassificador);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, -1, -1);
        lModoAvancado = new QLabel(fClassificador);
        lModoAvancado->setObjectName(QStringLiteral("lModoAvancado"));
        lModoAvancado->setMaximumSize(QSize(277, 16777215));
        lModoAvancado->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/tLogoClasscau.svg")));
        lModoAvancado->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_2->addWidget(lModoAvancado);

        lTextLogo = new QLabel(fClassificador);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(lTextLogo);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(fClassificador);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(fClassificador);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(fClassificador);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(fClassificador);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(fClassificador);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 414, 397));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_5 = new QPushButton(fClassificador);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_6 = new QPushButton(fClassificador);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(fClassificador);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(fClassificador);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea_2 = new QScrollArea(fClassificador);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setStyleSheet(QLatin1String("background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 350, 481));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(fClassificador);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(fClassificador);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        glClassificador->addWidget(fClassificador, 0, 0, 1, 1);


        retranslateUi(DClassificador);

        QMetaObject::connectSlotsByName(DClassificador);
    } // setupUi

    void retranslateUi(QDialog *DClassificador)
    {
        DClassificador->setWindowTitle(QApplication::translate("DClassificador", "Dialog", Q_NULLPTR));
        lModoAvancado->setText(QString());
        lTextLogo->setText(QApplication::translate("DClassificador", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("DClassificador", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("DClassificador", "Vers\303\243o 1.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("DClassificador", ">devferraz_", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DClassificador: public Ui_DClassificador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCLASSIFICADOR_H
