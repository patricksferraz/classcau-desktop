/********************************************************************************
** Form generated from reading UI file 'dtelainicial.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTELAINICIAL_H
#define UI_DTELAINICIAL_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DTelaInicial
{
public:
    QGridLayout *gridLayout;
    QFrame *fTelaInicial;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdvanced;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbMenu;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pbNone;
    QPushButton *pbSair;
    QPushButton *pbAutonomo;
    QPushButton *pbBuscar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbConfiguracoes;
    QPushButton *pbClassificador;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;

    void setupUi(QDialog *DTelaInicial)
    {
        if (DTelaInicial->objectName().isEmpty())
            DTelaInicial->setObjectName(QStringLiteral("DTelaInicial"));
        DTelaInicial->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DTelaInicial->sizePolicy().hasHeightForWidth());
        DTelaInicial->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(DTelaInicial);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fTelaInicial = new QFrame(DTelaInicial);
        fTelaInicial->setObjectName(QStringLiteral("fTelaInicial"));
        fTelaInicial->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fTelaInicial->setFrameShape(QFrame::StyledPanel);
        fTelaInicial->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(fTelaInicial);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        pbAdvanced = new QPushButton(fTelaInicial);
        pbAdvanced->setObjectName(QStringLiteral("pbAdvanced"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbAdvanced->sizePolicy().hasHeightForWidth());
        pbAdvanced->setSizePolicy(sizePolicy1);
        pbAdvanced->setMouseTracking(true);
        pbAdvanced->setFocusPolicy(Qt::NoFocus);
        pbAdvanced->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/pLogoClasscau.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdvanced->setIcon(icon);
        pbAdvanced->setIconSize(QSize(40, 40));
        pbAdvanced->setAutoDefault(false);
        pbAdvanced->setFlat(true);

        horizontalLayout->addWidget(pbAdvanced);

        lTextLogo = new QLabel(fTelaInicial);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setMouseTracking(true);
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lTextLogo);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbMenu = new QPushButton(fTelaInicial);
        pbMenu->setObjectName(QStringLiteral("pbMenu"));
        pbMenu->setFocusPolicy(Qt::NoFocus);
        pbMenu->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbMenu->setIcon(icon1);
        pbMenu->setIconSize(QSize(25, 25));
        pbMenu->setCheckable(false);
        pbMenu->setAutoDefault(false);
        pbMenu->setFlat(true);

        horizontalLayout_2->addWidget(pbMenu);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(8);
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        pbNone = new QPushButton(fTelaInicial);
        pbNone->setObjectName(QStringLiteral("pbNone"));
        pbNone->setMinimumSize(QSize(250, 150));
        pbNone->setMaximumSize(QSize(250, 150));
        pbNone->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));

        gridLayout_2->addWidget(pbNone, 1, 2, 1, 1);

        pbSair = new QPushButton(fTelaInicial);
        pbSair->setObjectName(QStringLiteral("pbSair"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbSair->sizePolicy().hasHeightForWidth());
        pbSair->setSizePolicy(sizePolicy2);
        pbSair->setMinimumSize(QSize(250, 150));
        pbSair->setMaximumSize(QSize(250, 150));
        pbSair->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/img/icon/logoSair.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSair->setIcon(icon2);
        pbSair->setIconSize(QSize(100, 80));

        gridLayout_2->addWidget(pbSair, 1, 3, 1, 1);

        pbAutonomo = new QPushButton(fTelaInicial);
        pbAutonomo->setObjectName(QStringLiteral("pbAutonomo"));
        sizePolicy2.setHeightForWidth(pbAutonomo->sizePolicy().hasHeightForWidth());
        pbAutonomo->setSizePolicy(sizePolicy2);
        pbAutonomo->setMinimumSize(QSize(250, 150));
        pbAutonomo->setMaximumSize(QSize(250, 150));
        pbAutonomo->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/img/icon/logoAutonomo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbAutonomo->setIcon(icon3);
        pbAutonomo->setIconSize(QSize(100, 80));

        gridLayout_2->addWidget(pbAutonomo, 0, 3, 1, 1);

        pbBuscar = new QPushButton(fTelaInicial);
        pbBuscar->setObjectName(QStringLiteral("pbBuscar"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(80);
        sizePolicy3.setHeightForWidth(pbBuscar->sizePolicy().hasHeightForWidth());
        pbBuscar->setSizePolicy(sizePolicy3);
        pbBuscar->setMinimumSize(QSize(250, 150));
        pbBuscar->setMaximumSize(QSize(250, 150));
        pbBuscar->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/img/icon/logoBuscarc.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbBuscar->setIcon(icon4);
        pbBuscar->setIconSize(QSize(100, 80));
        pbBuscar->setFlat(false);

        gridLayout_2->addWidget(pbBuscar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        pbConfiguracoes = new QPushButton(fTelaInicial);
        pbConfiguracoes->setObjectName(QStringLiteral("pbConfiguracoes"));
        sizePolicy2.setHeightForWidth(pbConfiguracoes->sizePolicy().hasHeightForWidth());
        pbConfiguracoes->setSizePolicy(sizePolicy2);
        pbConfiguracoes->setMinimumSize(QSize(250, 150));
        pbConfiguracoes->setMaximumSize(QSize(250, 150));
        pbConfiguracoes->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/img/icon/logoConfiguracoes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbConfiguracoes->setIcon(icon5);
        pbConfiguracoes->setIconSize(QSize(100, 80));
        pbConfiguracoes->setCheckable(false);
        pbConfiguracoes->setChecked(false);
        pbConfiguracoes->setAutoRepeat(false);
        pbConfiguracoes->setAutoExclusive(false);

        gridLayout_2->addWidget(pbConfiguracoes, 1, 1, 1, 1);

        pbClassificador = new QPushButton(fTelaInicial);
        pbClassificador->setObjectName(QStringLiteral("pbClassificador"));
        pbClassificador->setEnabled(true);
        sizePolicy2.setHeightForWidth(pbClassificador->sizePolicy().hasHeightForWidth());
        pbClassificador->setSizePolicy(sizePolicy2);
        pbClassificador->setMinimumSize(QSize(250, 150));
        pbClassificador->setMaximumSize(QSize(250, 150));
        pbClassificador->setFocusPolicy(Qt::StrongFocus);
        pbClassificador->setAcceptDrops(false);
        pbClassificador->setLayoutDirection(Qt::LeftToRight);
        pbClassificador->setAutoFillBackground(false);
        pbClassificador->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        pbClassificador->setInputMethodHints(Qt::ImhNone);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/img/icon/logoClassificador.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbClassificador->setIcon(icon6);
        pbClassificador->setIconSize(QSize(100, 80));
        pbClassificador->setAutoRepeat(false);
        pbClassificador->setAutoExclusive(false);
        pbClassificador->setAutoRepeatInterval(100);
        pbClassificador->setAutoDefault(true);
        pbClassificador->setFlat(false);

        gridLayout_2->addWidget(pbClassificador, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(fTelaInicial);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_2 = new QLabel(fTelaInicial);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(fTelaInicial, 0, 0, 1, 1);


        retranslateUi(DTelaInicial);

        pbMenu->setDefault(false);
        pbClassificador->setDefault(false);


        QMetaObject::connectSlotsByName(DTelaInicial);
    } // setupUi

    void retranslateUi(QDialog *DTelaInicial)
    {
        DTelaInicial->setWindowTitle(QApplication::translate("DTelaInicial", "Classcau - In\303\255cio", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DTelaInicial->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbAdvanced->setText(QString());
        lTextLogo->setText(QApplication::translate("DTelaInicial", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pbMenu->setText(QString());
        pbNone->setText(QString());
        pbSair->setText(QApplication::translate("DTelaInicial", "Sair", Q_NULLPTR));
        pbAutonomo->setText(QApplication::translate("DTelaInicial", "Aut\303\264nomo", Q_NULLPTR));
        pbBuscar->setText(QApplication::translate("DTelaInicial", "Buscar", Q_NULLPTR));
        pbConfiguracoes->setText(QApplication::translate("DTelaInicial", "Configura\303\247\303\265es", Q_NULLPTR));
        pbClassificador->setText(QApplication::translate("DTelaInicial", "Classificador", Q_NULLPTR));
        label->setText(QApplication::translate("DTelaInicial", "Vers\303\243o 1.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("DTelaInicial", ">devferraz_", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DTelaInicial: public Ui_DTelaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTELAINICIAL_H
