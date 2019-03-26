/********************************************************************************
** Form generated from reading UI file 'dautonomia.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAUTONOMIA_H
#define UI_DAUTONOMIA_H

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

class Ui_DAutonomia
{
public:
    QGridLayout *gridLayout;
    QFrame *fAutonomia;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pbMenu;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *lImgLogo;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pbPower;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;

    void setupUi(QDialog *DAutonomia)
    {
        if (DAutonomia->objectName().isEmpty())
            DAutonomia->setObjectName(QStringLiteral("DAutonomia"));
        DAutonomia->resize(800, 600);
        gridLayout = new QGridLayout(DAutonomia);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fAutonomia = new QFrame(DAutonomia);
        fAutonomia->setObjectName(QStringLiteral("fAutonomia"));
        fAutonomia->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fAutonomia->setFrameShape(QFrame::StyledPanel);
        fAutonomia->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(fAutonomia);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 7, -1, 7);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pbMenu = new QPushButton(fAutonomia);
        pbMenu->setObjectName(QStringLiteral("pbMenu"));
        pbMenu->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/logoMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbMenu->setIcon(icon);
        pbMenu->setIconSize(QSize(25, 25));
        pbMenu->setAutoDefault(false);
        pbMenu->setFlat(true);

        horizontalLayout_4->addWidget(pbMenu);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lImgLogo = new QLabel(fAutonomia);
        lImgLogo->setObjectName(QStringLiteral("lImgLogo"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lImgLogo->setFont(font);
        lImgLogo->setStyleSheet(QStringLiteral(""));
        lImgLogo->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/pLogoClasscau.svg")));
        lImgLogo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lImgLogo);

        lTextLogo = new QLabel(fAutonomia);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 48pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lTextLogo);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 10);
        scrollArea = new QScrollArea(fAutonomia);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 165));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pbPower = new QPushButton(fAutonomia);
        pbPower->setObjectName(QStringLiteral("pbPower"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoPower.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbPower->setIcon(icon1);
        pbPower->setIconSize(QSize(25, 35));
        pbPower->setAutoDefault(false);
        pbPower->setFlat(true);

        verticalLayout_2->addWidget(pbPower);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        scrollArea_2 = new QScrollArea(fAutonomia);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 319, 165));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_2->addWidget(scrollArea_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(fAutonomia);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_2 = new QLabel(fAutonomia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(fAutonomia, 0, 0, 1, 1);


        retranslateUi(DAutonomia);

        QMetaObject::connectSlotsByName(DAutonomia);
    } // setupUi

    void retranslateUi(QDialog *DAutonomia)
    {
        DAutonomia->setWindowTitle(QApplication::translate("DAutonomia", "Classcau - Autonomia", Q_NULLPTR));
        pbMenu->setText(QString());
        lImgLogo->setText(QString());
        lTextLogo->setText(QApplication::translate("DAutonomia", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pbPower->setText(QString());
        label->setText(QApplication::translate("DAutonomia", "Vers\303\243o 1.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("DAutonomia", "patriskferraz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DAutonomia: public Ui_DAutonomia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAUTONOMIA_H
