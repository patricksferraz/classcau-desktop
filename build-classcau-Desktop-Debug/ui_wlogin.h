/********************************************************************************
** Form generated from reading UI file 'wlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLOGIN_H
#define UI_WLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLogin
{
public:
    QGridLayout *glLoginW;
    QFrame *fLogin;
    QGridLayout *glLoginF;
    QSpacerItem *vsTop;
    QSpacerItem *hsLeft;
    QVBoxLayout *vbLogin;
    QLabel *lImgLogo;
    QLabel *lTextLogo;
    QLineEdit *lUsuario;
    QLineEdit *lSenha;
    QLabel *lEsqueceuSenha;
    QHBoxLayout *hbLogin;
    QPushButton *pbSair;
    QPushButton *pbEntrar;
    QSpacerItem *vsBottom;
    QSpacerItem *hsRight;
    QLabel *lDeveloper;
    QLabel *lVersion;

    void setupUi(QWidget *WLogin)
    {
        if (WLogin->objectName().isEmpty())
            WLogin->setObjectName(QStringLiteral("WLogin"));
        WLogin->setEnabled(true);
        WLogin->resize(800, 600);
        WLogin->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/img/icon/tcLogoClasscau.svg"), QSize(), QIcon::Normal, QIcon::Off);
        WLogin->setWindowIcon(icon);
        glLoginW = new QGridLayout(WLogin);
        glLoginW->setSpacing(0);
        glLoginW->setContentsMargins(11, 11, 11, 11);
        glLoginW->setObjectName(QStringLiteral("glLoginW"));
        glLoginW->setContentsMargins(0, 0, 0, 0);
        fLogin = new QFrame(WLogin);
        fLogin->setObjectName(QStringLiteral("fLogin"));
        fLogin->setStyleSheet(QStringLiteral("background-color: rgb(51, 23, 9);"));
        fLogin->setFrameShape(QFrame::StyledPanel);
        fLogin->setFrameShadow(QFrame::Plain);
        glLoginF = new QGridLayout(fLogin);
        glLoginF->setSpacing(0);
        glLoginF->setContentsMargins(11, 11, 11, 11);
        glLoginF->setObjectName(QStringLiteral("glLoginF"));
        glLoginF->setContentsMargins(0, 0, 0, 0);
        vsTop = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glLoginF->addItem(vsTop, 0, 1, 1, 1);

        hsLeft = new QSpacerItem(262, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        glLoginF->addItem(hsLeft, 1, 0, 1, 1);

        vbLogin = new QVBoxLayout();
        vbLogin->setSpacing(6);
        vbLogin->setObjectName(QStringLiteral("vbLogin"));
        lImgLogo = new QLabel(fLogin);
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

        vbLogin->addWidget(lImgLogo);

        lTextLogo = new QLabel(fLogin);
        lTextLogo->setObjectName(QStringLiteral("lTextLogo"));
        lTextLogo->setStyleSheet(QStringLiteral("font: 48pt \"Roboto Bk\";"));
        lTextLogo->setAlignment(Qt::AlignCenter);

        vbLogin->addWidget(lTextLogo);

        lUsuario = new QLineEdit(fLogin);
        lUsuario->setObjectName(QStringLiteral("lUsuario"));
        lUsuario->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"background-color: rgb(246, 244, 244);\n"
"color: rgb(51, 23, 9);"));

        vbLogin->addWidget(lUsuario);

        lSenha = new QLineEdit(fLogin);
        lSenha->setObjectName(QStringLiteral("lSenha"));
        lSenha->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(51, 23, 9);\n"
"background-color: rgb(246, 244, 244);"));
        lSenha->setEchoMode(QLineEdit::Password);

        vbLogin->addWidget(lSenha);

        lEsqueceuSenha = new QLabel(fLogin);
        lEsqueceuSenha->setObjectName(QStringLiteral("lEsqueceuSenha"));
        lEsqueceuSenha->setStyleSheet(QLatin1String("font: 57 10pt \"Roboto\";\n"
"color: rgb(246, 244, 244);"));
        lEsqueceuSenha->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        vbLogin->addWidget(lEsqueceuSenha);

        hbLogin = new QHBoxLayout();
        hbLogin->setSpacing(6);
        hbLogin->setObjectName(QStringLiteral("hbLogin"));
        pbSair = new QPushButton(fLogin);
        pbSair->setObjectName(QStringLiteral("pbSair"));
        pbSair->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(51, 23, 9);\n"
"background-color: rgb(250, 173, 25);"));

        hbLogin->addWidget(pbSair);

        pbEntrar = new QPushButton(fLogin);
        pbEntrar->setObjectName(QStringLiteral("pbEntrar"));
        pbEntrar->setStyleSheet(QLatin1String("font: 10pt \"Roboto Bk\";\n"
"color: rgb(51, 23, 9);\n"
"background-color: rgb(250, 173, 25);"));

        hbLogin->addWidget(pbEntrar);


        vbLogin->addLayout(hbLogin);


        glLoginF->addLayout(vbLogin, 1, 1, 2, 1);

        vsBottom = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glLoginF->addItem(vsBottom, 3, 1, 1, 1);

        hsRight = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        glLoginF->addItem(hsRight, 2, 2, 1, 1);

        lDeveloper = new QLabel(fLogin);
        lDeveloper->setObjectName(QStringLiteral("lDeveloper"));
        lDeveloper->setStyleSheet(QStringLiteral("font: 10pt \"Roboto Bk\";"));
        lDeveloper->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        glLoginF->addWidget(lDeveloper, 3, 2, 1, 1);

        lVersion = new QLabel(fLogin);
        lVersion->setObjectName(QStringLiteral("lVersion"));
        lVersion->setStyleSheet(QStringLiteral("font: 10pt \"Roboto Bk\";"));
        lVersion->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        glLoginF->addWidget(lVersion, 3, 0, 1, 1);


        glLoginW->addWidget(fLogin, 0, 0, 1, 1);


        retranslateUi(WLogin);

        QMetaObject::connectSlotsByName(WLogin);
    } // setupUi

    void retranslateUi(QWidget *WLogin)
    {
        WLogin->setWindowTitle(QApplication::translate("WLogin", "Classcau", Q_NULLPTR));
        lImgLogo->setText(QString());
        lTextLogo->setText(QApplication::translate("WLogin", "<html><head/><body><p><span style=\" color:#f6f4f4;\">Class</span><span style=\" color:#faad19;\">cau</span></p></body></html>", Q_NULLPTR));
        lUsuario->setPlaceholderText(QApplication::translate("WLogin", "Usu\303\241rio:", Q_NULLPTR));
        lSenha->setPlaceholderText(QApplication::translate("WLogin", "Senha:", Q_NULLPTR));
        lEsqueceuSenha->setText(QApplication::translate("WLogin", "Esqueceu a senha?", Q_NULLPTR));
        pbSair->setText(QApplication::translate("WLogin", "Sair", Q_NULLPTR));
        pbEntrar->setText(QApplication::translate("WLogin", "Entrar", Q_NULLPTR));
        lDeveloper->setText(QApplication::translate("WLogin", ">devferraz_", Q_NULLPTR));
        lVersion->setText(QApplication::translate("WLogin", "Vers\303\243o 1.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WLogin: public Ui_WLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLOGIN_H
