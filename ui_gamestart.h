/********************************************************************************
** Form generated from reading UI file 'gamestart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESTART_H
#define UI_GAMESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameStart
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *GameStart)
    {
        if (GameStart->objectName().isEmpty())
            GameStart->setObjectName(QString::fromUtf8("GameStart"));
        GameStart->resize(325, 234);
        pushButton = new QPushButton(GameStart);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 100, 101, 31));

        retranslateUi(GameStart);

        QMetaObject::connectSlotsByName(GameStart);
    } // setupUi

    void retranslateUi(QDialog *GameStart)
    {
        GameStart->setWindowTitle(QCoreApplication::translate("GameStart", "Game Start", nullptr));
        pushButton->setText(QCoreApplication::translate("GameStart", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameStart: public Ui_GameStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESTART_H
