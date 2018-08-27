/********************************************************************************
** Form generated from reading UI file 'dbuscador.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBUSCADOR_H
#define UI_DBUSCADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBuscador
{
public:
    QGridLayout *gridLayout;
    QFrame *fBuscador;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdvanced;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbMenu;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lBusca;
    QLineEdit *leBusca;
    QPushButton *pbQrCode;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbAll;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbLixeira;
    QPushButton *pbEncaminhar;
    QPushButton *pbImprimir;
    QPushButton *pbComparar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;

    void setupUi(QDialog *DBuscador)
    {
        if (DBuscador->objectName().isEmpty())
            DBuscador->setObjectName(QStringLiteral("DBuscador"));
        DBuscador->resize(800, 600);
        DBuscador->setModal(false);
        gridLayout = new QGridLayout(DBuscador);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fBuscador = new QFrame(DBuscador);
        fBuscador->setObjectName(QStringLiteral("fBuscador"));
        fBuscador->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fBuscador->setFrameShape(QFrame::StyledPanel);
        fBuscador->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(fBuscador);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbAdvanced = new QPushButton(fBuscador);
        pbAdvanced->setObjectName(QStringLiteral("pbAdvanced"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbAdvanced->sizePolicy().hasHeightForWidth());
        pbAdvanced->setSizePolicy(sizePolicy);
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

        lTextLogo = new QLabel(fBuscador);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setMouseTracking(true);
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lTextLogo);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbMenu = new QPushButton(fBuscador);
        pbMenu->setObjectName(QStringLiteral("pbMenu"));
        pbMenu->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbMenu->setIcon(icon1);
        pbMenu->setIconSize(QSize(25, 25));
        pbMenu->setAutoDefault(false);
        pbMenu->setFlat(true);

        horizontalLayout_2->addWidget(pbMenu);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(30, 20, 30, 6);
        lBusca = new QLabel(fBuscador);
        lBusca->setObjectName(QStringLiteral("lBusca"));
        lBusca->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/logoBuscar.svg")));

        horizontalLayout_4->addWidget(lBusca);

        leBusca = new QLineEdit(fBuscador);
        leBusca->setObjectName(QStringLiteral("leBusca"));

        horizontalLayout_4->addWidget(leBusca);

        pbQrCode = new QPushButton(fBuscador);
        pbQrCode->setObjectName(QStringLiteral("pbQrCode"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/img/icon/logoQrCode.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbQrCode->setIcon(icon2);
        pbQrCode->setIconSize(QSize(25, 25));
        pbQrCode->setAutoDefault(false);
        pbQrCode->setFlat(true);

        horizontalLayout_4->addWidget(pbQrCode);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, 0, 0);
        frame = new QFrame(fBuscador);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);\n"
"font: 10pt \"Roboto Bk\";"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbAll = new QCheckBox(frame);
        cbAll->setObjectName(QStringLiteral("cbAll"));

        horizontalLayout_3->addWidget(cbAll);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pbLixeira = new QPushButton(frame);
        pbLixeira->setObjectName(QStringLiteral("pbLixeira"));
        pbLixeira->setFocusPolicy(Qt::WheelFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/img/icon/logoLixeiram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbLixeira->setIcon(icon3);
        pbLixeira->setIconSize(QSize(18, 18));
        pbLixeira->setAutoDefault(false);
        pbLixeira->setFlat(true);

        horizontalLayout_3->addWidget(pbLixeira);

        pbEncaminhar = new QPushButton(frame);
        pbEncaminhar->setObjectName(QStringLiteral("pbEncaminhar"));
        pbEncaminhar->setFocusPolicy(Qt::WheelFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/img/icon/logoEcaminharm.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbEncaminhar->setIcon(icon4);
        pbEncaminhar->setIconSize(QSize(18, 18));
        pbEncaminhar->setAutoDefault(false);
        pbEncaminhar->setFlat(true);

        horizontalLayout_3->addWidget(pbEncaminhar);

        pbImprimir = new QPushButton(frame);
        pbImprimir->setObjectName(QStringLiteral("pbImprimir"));
        pbImprimir->setFocusPolicy(Qt::WheelFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/img/icon/logoImprimirm.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbImprimir->setIcon(icon5);
        pbImprimir->setIconSize(QSize(18, 18));
        pbImprimir->setAutoDefault(false);
        pbImprimir->setFlat(true);

        horizontalLayout_3->addWidget(pbImprimir);

        pbComparar = new QPushButton(frame);
        pbComparar->setObjectName(QStringLiteral("pbComparar"));
        pbComparar->setFocusPolicy(Qt::WheelFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/img/icon/logoComparar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbComparar->setIcon(icon6);
        pbComparar->setIconSize(QSize(18, 18));
        pbComparar->setAutoDefault(false);
        pbComparar->setFlat(true);

        horizontalLayout_3->addWidget(pbComparar);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(fBuscador);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgb(246, 244, 244);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 374, 352));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        horizontalLayout_6->addLayout(verticalLayout);

        scrollArea_2 = new QScrollArea(fBuscador);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setStyleSheet(QStringLiteral("background-color: rgb(246, 244, 244);"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 384, 412));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_6->addWidget(scrollArea_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(fBuscador);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_3 = new QLabel(fBuscador);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(fBuscador, 0, 0, 1, 1);


        retranslateUi(DBuscador);

        QMetaObject::connectSlotsByName(DBuscador);
    } // setupUi

    void retranslateUi(QDialog *DBuscador)
    {
        DBuscador->setWindowTitle(QApplication::translate("DBuscador", "Classcau - Buscador", Q_NULLPTR));
        pbAdvanced->setText(QString());
        lTextLogo->setText(QApplication::translate("DBuscador", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pbMenu->setText(QString());
        lBusca->setText(QString());
        pbQrCode->setText(QString());
        cbAll->setText(QApplication::translate("DBuscador", "ID", Q_NULLPTR));
        pbLixeira->setText(QString());
        pbEncaminhar->setText(QString());
        pbImprimir->setText(QString());
        pbComparar->setText(QString());
        label_2->setText(QApplication::translate("DBuscador", "Vers\303\243o 1.0", Q_NULLPTR));
        label_3->setText(QApplication::translate("DBuscador", "patriskferraz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DBuscador: public Ui_DBuscador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBUSCADOR_H
