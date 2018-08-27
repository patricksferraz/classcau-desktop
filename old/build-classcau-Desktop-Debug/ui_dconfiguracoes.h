/********************************************************************************
** Form generated from reading UI file 'dconfiguracoes.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONFIGURACOES_H
#define UI_DCONFIGURACOES_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DConfiguracoes
{
public:
    QGridLayout *gridLayout;
    QFrame *fConfiguracoes;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdvanced;
    QLabel *lTextLogo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbMenu;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_8;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QFrame *line_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QFrame *line_3;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QFrame *line_4;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;

    void setupUi(QDialog *DConfiguracoes)
    {
        if (DConfiguracoes->objectName().isEmpty())
            DConfiguracoes->setObjectName(QStringLiteral("DConfiguracoes"));
        DConfiguracoes->resize(800, 600);
        gridLayout = new QGridLayout(DConfiguracoes);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fConfiguracoes = new QFrame(DConfiguracoes);
        fConfiguracoes->setObjectName(QStringLiteral("fConfiguracoes"));
        fConfiguracoes->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fConfiguracoes->setFrameShape(QFrame::StyledPanel);
        fConfiguracoes->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(fConfiguracoes);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbAdvanced = new QPushButton(fConfiguracoes);
        pbAdvanced->setObjectName(QStringLiteral("pbAdvanced"));
        pbAdvanced->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/pLogoClasscau.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdvanced->setIcon(icon);
        pbAdvanced->setIconSize(QSize(40, 40));
        pbAdvanced->setAutoDefault(false);
        pbAdvanced->setFlat(true);

        horizontalLayout->addWidget(pbAdvanced);

        lTextLogo = new QLabel(fConfiguracoes);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 22pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lTextLogo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbMenu = new QPushButton(fConfiguracoes);
        pbMenu->setObjectName(QStringLiteral("pbMenu"));
        pbMenu->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/img/icon/logoMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbMenu->setIcon(icon1);
        pbMenu->setIconSize(QSize(25, 25));
        pbMenu->setAutoDefault(false);
        pbMenu->setFlat(true);

        horizontalLayout->addWidget(pbMenu);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, 10, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(fConfiguracoes);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Roboto Bk\";"));

        verticalLayout->addWidget(label_2);

        line = new QFrame(fConfiguracoes);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("background-color: rgb(250, 173, 25);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBox_5 = new QCheckBox(fConfiguracoes);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_7 = new QCheckBox(fConfiguracoes);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        verticalLayout->addWidget(checkBox_7);

        checkBox_6 = new QCheckBox(fConfiguracoes);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_8 = new QCheckBox(fConfiguracoes);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        verticalLayout->addWidget(checkBox_8);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(fConfiguracoes);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 11pt \"Roboto Bk\";"));

        verticalLayout->addWidget(label);

        line_2 = new QFrame(fConfiguracoes);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(250, 173, 25);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        checkBox = new QCheckBox(fConfiguracoes);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(fConfiguracoes);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(fConfiguracoes);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(fConfiguracoes);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(fConfiguracoes);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 11pt \"Roboto Bk\";"));

        verticalLayout_2->addWidget(label_3);

        line_3 = new QFrame(fConfiguracoes);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(250, 173, 25);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        checkBox_9 = new QCheckBox(fConfiguracoes);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        verticalLayout_2->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(fConfiguracoes);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        verticalLayout_2->addWidget(checkBox_10);

        checkBox_11 = new QCheckBox(fConfiguracoes);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        verticalLayout_2->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(fConfiguracoes);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        verticalLayout_2->addWidget(checkBox_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(fConfiguracoes);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 11pt \"Roboto Bk\";"));

        verticalLayout_2->addWidget(label_4);

        line_4 = new QFrame(fConfiguracoes);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setStyleSheet(QStringLiteral("background-color: rgb(250, 173, 25);"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        checkBox_13 = new QCheckBox(fConfiguracoes);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        verticalLayout_2->addWidget(checkBox_13);

        checkBox_14 = new QCheckBox(fConfiguracoes);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        verticalLayout_2->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(fConfiguracoes);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));

        verticalLayout_2->addWidget(checkBox_15);

        checkBox_16 = new QCheckBox(fConfiguracoes);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));

        verticalLayout_2->addWidget(checkBox_16);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(fConfiguracoes);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_5 = new QLabel(fConfiguracoes);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(246, 244, 244);"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        pbMenu->raise();
        lTextLogo->raise();
        pbAdvanced->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox_4->raise();
        checkBox_5->raise();
        checkBox_6->raise();
        checkBox_7->raise();
        checkBox_8->raise();
        checkBox_9->raise();
        checkBox_10->raise();
        checkBox_11->raise();
        checkBox_12->raise();
        checkBox_13->raise();
        checkBox_14->raise();
        checkBox_15->raise();
        checkBox_16->raise();
        label_5->raise();
        label_6->raise();
        checkBox_8->raise();
        checkBox_6->raise();
        label->raise();

        gridLayout->addWidget(fConfiguracoes, 0, 0, 1, 1);


        retranslateUi(DConfiguracoes);

        QMetaObject::connectSlotsByName(DConfiguracoes);
    } // setupUi

    void retranslateUi(QDialog *DConfiguracoes)
    {
        DConfiguracoes->setWindowTitle(QApplication::translate("DConfiguracoes", "Casscau - Configura\303\247\303\265es", Q_NULLPTR));
        pbAdvanced->setText(QString());
        lTextLogo->setText(QApplication::translate("DConfiguracoes", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        pbMenu->setText(QString());
        label_2->setText(QApplication::translate("DConfiguracoes", "TextLabel", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        label->setText(QApplication::translate("DConfiguracoes", "TextLabel", Q_NULLPTR));
        checkBox->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        label_3->setText(QApplication::translate("DConfiguracoes", "TextLabel", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_11->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        label_4->setText(QApplication::translate("DConfiguracoes", "TextLabel", Q_NULLPTR));
        checkBox_13->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_14->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_15->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        checkBox_16->setText(QApplication::translate("DConfiguracoes", "CheckBox", Q_NULLPTR));
        label_6->setText(QApplication::translate("DConfiguracoes", "Vers\303\243o 1.0", Q_NULLPTR));
        label_5->setText(QApplication::translate("DConfiguracoes", ">devferraz_", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DConfiguracoes: public Ui_DConfiguracoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONFIGURACOES_H
