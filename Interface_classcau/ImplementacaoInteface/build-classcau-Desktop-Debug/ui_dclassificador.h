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
    QPushButton *pbAdvanced;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbMenu;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbInput;
    QPushButton *pbOutput;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbLixeira;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbExtrair;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbSalvar;
    QPushButton *pbImprimir;
    QPushButton *pbEncaminhar;
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
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        pbAdvanced = new QPushButton(fClassificador);
        pbAdvanced->setObjectName(QStringLiteral("pbAdvanced"));
        pbAdvanced->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/pLogoClasscau.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdvanced->setIcon(icon);
        pbAdvanced->setIconSize(QSize(40, 40));
        pbAdvanced->setAutoDefault(false);
        pbAdvanced->setFlat(true);

        horizontalLayout_2->addWidget(pbAdvanced);

        lTextLogo = new QLabel(fClassificador);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lTextLogo);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pbMenu = new QPushButton(fClassificador);
        pbMenu->setObjectName(QStringLiteral("pbMenu"));
        pbMenu->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbMenu->setIcon(icon1);
        pbMenu->setIconSize(QSize(25, 25));
        pbMenu->setAutoDefault(false);
        pbMenu->setFlat(true);

        horizontalLayout_3->addWidget(pbMenu);


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
        pbInput = new QPushButton(fClassificador);
        pbInput->setObjectName(QStringLiteral("pbInput"));
        pbInput->setFocusPolicy(Qt::WheelFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/img/icon/logoInput.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbInput->setIcon(icon2);
        pbInput->setIconSize(QSize(25, 25));
        pbInput->setAutoDefault(false);
        pbInput->setFlat(true);

        horizontalLayout_4->addWidget(pbInput);

        pbOutput = new QPushButton(fClassificador);
        pbOutput->setObjectName(QStringLiteral("pbOutput"));
        pbOutput->setFocusPolicy(Qt::WheelFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/img/icon/logoOutput.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbOutput->setIcon(icon3);
        pbOutput->setIconSize(QSize(25, 25));
        pbOutput->setAutoDefault(false);
        pbOutput->setFlat(true);

        horizontalLayout_4->addWidget(pbOutput);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pbLixeira = new QPushButton(fClassificador);
        pbLixeira->setObjectName(QStringLiteral("pbLixeira"));
        pbLixeira->setFocusPolicy(Qt::WheelFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/img/icon/logoLixeira.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbLixeira->setIcon(icon4);
        pbLixeira->setIconSize(QSize(25, 25));
        pbLixeira->setAutoDefault(false);
        pbLixeira->setFlat(true);

        horizontalLayout_4->addWidget(pbLixeira);


        verticalLayout->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(fClassificador);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setStyleSheet(QLatin1String("background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 382, 368));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pbExtrair = new QPushButton(fClassificador);
        pbExtrair->setObjectName(QStringLiteral("pbExtrair"));
        pbExtrair->setFocusPolicy(Qt::NoFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/img/icon/logoExtrair.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbExtrair->setIcon(icon5);
        pbExtrair->setIconSize(QSize(25, 25));
        pbExtrair->setAutoDefault(false);
        pbExtrair->setFlat(true);

        horizontalLayout_5->addWidget(pbExtrair);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pbSalvar = new QPushButton(fClassificador);
        pbSalvar->setObjectName(QStringLiteral("pbSalvar"));
        pbSalvar->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/img/icon/logoSalvar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSalvar->setIcon(icon6);
        pbSalvar->setIconSize(QSize(25, 25));
        pbSalvar->setAutoDefault(false);
        pbSalvar->setFlat(true);

        horizontalLayout_5->addWidget(pbSalvar);

        pbImprimir = new QPushButton(fClassificador);
        pbImprimir->setObjectName(QStringLiteral("pbImprimir"));
        pbImprimir->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/img/icon/logoImprimir.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbImprimir->setIcon(icon7);
        pbImprimir->setIconSize(QSize(25, 25));
        pbImprimir->setAutoDefault(false);
        pbImprimir->setFlat(true);

        horizontalLayout_5->addWidget(pbImprimir);

        pbEncaminhar = new QPushButton(fClassificador);
        pbEncaminhar->setObjectName(QStringLiteral("pbEncaminhar"));
        pbEncaminhar->setFocusPolicy(Qt::NoFocus);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/img/icon/logoEcaminhar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbEncaminhar->setIcon(icon8);
        pbEncaminhar->setIconSize(QSize(25, 25));
        pbEncaminhar->setAutoDefault(false);
        pbEncaminhar->setFlat(true);

        horizontalLayout_5->addWidget(pbEncaminhar);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea_2 = new QScrollArea(fClassificador);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFocusPolicy(Qt::NoFocus);
        scrollArea_2->setStyleSheet(QLatin1String("background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 382, 466));
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

        pbEncaminhar->setDefault(false);


        QMetaObject::connectSlotsByName(DClassificador);
    } // setupUi

    void retranslateUi(QDialog *DClassificador)
    {
        DClassificador->setWindowTitle(QApplication::translate("DClassificador", "Classcau - Classificador", Q_NULLPTR));
        pbAdvanced->setText(QString());
        lTextLogo->setText(QApplication::translate("DClassificador", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pbMenu->setText(QString());
        pbInput->setText(QString());
        pbOutput->setText(QString());
        pbLixeira->setText(QString());
        pbExtrair->setText(QString());
        pbSalvar->setText(QString());
        pbImprimir->setText(QString());
        pbEncaminhar->setText(QString());
        label->setText(QApplication::translate("DClassificador", "Vers\303\243o 1.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("DClassificador", ">devferraz_", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DClassificador: public Ui_DClassificador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCLASSIFICADOR_H
