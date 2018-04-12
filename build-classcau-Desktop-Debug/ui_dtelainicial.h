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
    QLabel *lModoAvancado;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
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
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, -1, -1);
        lModoAvancado = new QLabel(fTelaInicial);
        lModoAvancado->setObjectName(QStringLiteral("lModoAvancado"));
        lModoAvancado->setMaximumSize(QSize(277, 16777215));
        lModoAvancado->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/tLogoClasscau.svg")));
        lModoAvancado->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout->addWidget(lModoAvancado);

        lTextLogo = new QLabel(fTelaInicial);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(lTextLogo);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(fTelaInicial);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));

        horizontalLayout_2->addWidget(pushButton);


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
        pbNone->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));

        gridLayout_2->addWidget(pbNone, 1, 2, 1, 1);

        pbSair = new QPushButton(fTelaInicial);
        pbSair->setObjectName(QStringLiteral("pbSair"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbSair->sizePolicy().hasHeightForWidth());
        pbSair->setSizePolicy(sizePolicy1);
        pbSair->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/logoSair.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSair->setIcon(icon);
        pbSair->setIconSize(QSize(100, 80));

        gridLayout_2->addWidget(pbSair, 1, 3, 1, 1);

        pbAutonomo = new QPushButton(fTelaInicial);
        pbAutonomo->setObjectName(QStringLiteral("pbAutonomo"));
        sizePolicy1.setHeightForWidth(pbAutonomo->sizePolicy().hasHeightForWidth());
        pbAutonomo->setSizePolicy(sizePolicy1);
        pbAutonomo->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoAutonomo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/icon/img/icon/tcLogoClasscau.svg"), QSize(), QIcon::Active, QIcon::Off);
        pbAutonomo->setIcon(icon1);
        pbAutonomo->setIconSize(QSize(100, 80));

        gridLayout_2->addWidget(pbAutonomo, 0, 3, 1, 1);

        pbBuscar = new QPushButton(fTelaInicial);
        pbBuscar->setObjectName(QStringLiteral("pbBuscar"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(pbBuscar->sizePolicy().hasHeightForWidth());
        pbBuscar->setSizePolicy(sizePolicy2);
        pbBuscar->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/img/icon/logoBuscar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbBuscar->setIcon(icon2);
        pbBuscar->setIconSize(QSize(100, 80));

        gridLayout_2->addWidget(pbBuscar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        pbConfiguracoes = new QPushButton(fTelaInicial);
        pbConfiguracoes->setObjectName(QStringLiteral("pbConfiguracoes"));
        sizePolicy1.setHeightForWidth(pbConfiguracoes->sizePolicy().hasHeightForWidth());
        pbConfiguracoes->setSizePolicy(sizePolicy1);
        pbConfiguracoes->setMinimumSize(QSize(249, 96));
        pbConfiguracoes->setMaximumSize(QSize(16777215, 96));
        pbConfiguracoes->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/img/icon/logoConfiguracoes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbConfiguracoes->setIcon(icon3);
        pbConfiguracoes->setIconSize(QSize(100, 80));
        pbConfiguracoes->setCheckable(false);
        pbConfiguracoes->setChecked(false);
        pbConfiguracoes->setAutoRepeat(false);
        pbConfiguracoes->setAutoExclusive(false);

        gridLayout_2->addWidget(pbConfiguracoes, 1, 1, 1, 1);

        pbClassificador = new QPushButton(fTelaInicial);
        pbClassificador->setObjectName(QStringLiteral("pbClassificador"));
        pbClassificador->setEnabled(true);
        sizePolicy1.setHeightForWidth(pbClassificador->sizePolicy().hasHeightForWidth());
        pbClassificador->setSizePolicy(sizePolicy1);
        pbClassificador->setFocusPolicy(Qt::StrongFocus);
        pbClassificador->setAcceptDrops(false);
        pbClassificador->setLayoutDirection(Qt::LeftToRight);
        pbClassificador->setAutoFillBackground(false);
        pbClassificador->setStyleSheet(QLatin1String("font: 15pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));
        pbClassificador->setInputMethodHints(Qt::ImhNone);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/img/icon/logoClassificador.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbClassificador->setIcon(icon4);
        pbClassificador->setIconSize(QSize(100, 80));
        pbClassificador->setAutoRepeat(false);
        pbClassificador->setAutoExclusive(false);
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

        pbClassificador->setDefault(false);


        QMetaObject::connectSlotsByName(DTelaInicial);
    } // setupUi

    void retranslateUi(QDialog *DTelaInicial)
    {
        DTelaInicial->setWindowTitle(QApplication::translate("DTelaInicial", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DTelaInicial->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lModoAvancado->setText(QString());
        lTextLogo->setText(QApplication::translate("DTelaInicial", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DTelaInicial", "PushButton", Q_NULLPTR));
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
