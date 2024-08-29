/********************************************************************************
** Form generated from reading UI file 'User_Transaction_History.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_TRANSACTION_HISTORY_H
#define UI_USER_TRANSACTION_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Transaction_History
{
public:
    QPushButton *Back_PB;
    QListWidget *Transaction_History_LW;
    QLabel *label_3;

    void setupUi(QWidget *User_Transaction_History)
    {
        if (User_Transaction_History->objectName().isEmpty())
            User_Transaction_History->setObjectName("User_Transaction_History");
        User_Transaction_History->resize(1253, 914);
        Back_PB = new QPushButton(User_Transaction_History);
        Back_PB->setObjectName("Back_PB");
        Back_PB->setGeometry(QRect(340, 630, 500, 121));
        Transaction_History_LW = new QListWidget(User_Transaction_History);
        Transaction_History_LW->setObjectName("Transaction_History_LW");
        Transaction_History_LW->setGeometry(QRect(120, 130, 941, 461));
        label_3 = new QLabel(User_Transaction_History);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 50, 1101, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(User_Transaction_History);

        QMetaObject::connectSlotsByName(User_Transaction_History);
    } // setupUi

    void retranslateUi(QWidget *User_Transaction_History)
    {
        User_Transaction_History->setWindowTitle(QCoreApplication::translate("User_Transaction_History", "Form", nullptr));
        Back_PB->setText(QCoreApplication::translate("User_Transaction_History", "Back to Main Page", nullptr));
        label_3->setText(QCoreApplication::translate("User_Transaction_History", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">View Transaction History</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Transaction_History: public Ui_User_Transaction_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_TRANSACTION_HISTORY_H
