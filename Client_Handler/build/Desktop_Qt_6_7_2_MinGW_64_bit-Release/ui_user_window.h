/********************************************************************************
** Form generated from reading UI file 'user_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_WINDOW_H
#define UI_USER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Window
{
public:
    QPushButton *Get_User_Account_Number;
    QPushButton *Back;
    QPushButton *User_Balance_PB;
    QPushButton *Transaction_History_PB;
    QPushButton *pushButton;
    QPushButton *Transfer_Funds_PB;

    void setupUi(QWidget *User_Window)
    {
        if (User_Window->objectName().isEmpty())
            User_Window->setObjectName("User_Window");
        User_Window->resize(1422, 985);
        Get_User_Account_Number = new QPushButton(User_Window);
        Get_User_Account_Number->setObjectName("Get_User_Account_Number");
        Get_User_Account_Number->setGeometry(QRect(50, 250, 500, 100));
        Get_User_Account_Number->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Back = new QPushButton(User_Window);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(350, 550, 500, 100));
        Back->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        User_Balance_PB = new QPushButton(User_Window);
        User_Balance_PB->setObjectName("User_Balance_PB");
        User_Balance_PB->setGeometry(QRect(650, 250, 500, 100));
        User_Balance_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Transaction_History_PB = new QPushButton(User_Window);
        Transaction_History_PB->setObjectName("Transaction_History_PB");
        Transaction_History_PB->setGeometry(QRect(350, 400, 500, 100));
        Transaction_History_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(User_Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 100, 500, 100));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Transfer_Funds_PB = new QPushButton(User_Window);
        Transfer_Funds_PB->setObjectName("Transfer_Funds_PB");
        Transfer_Funds_PB->setGeometry(QRect(50, 100, 500, 100));
        Transfer_Funds_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(User_Window);

        QMetaObject::connectSlotsByName(User_Window);
    } // setupUi

    void retranslateUi(QWidget *User_Window)
    {
        User_Window->setWindowTitle(QCoreApplication::translate("User_Window", "Form", nullptr));
        Get_User_Account_Number->setText(QCoreApplication::translate("User_Window", "Get Account Number", nullptr));
        Back->setText(QCoreApplication::translate("User_Window", "Sign Out", nullptr));
        User_Balance_PB->setText(QCoreApplication::translate("User_Window", "Get Account Balance", nullptr));
        Transaction_History_PB->setText(QCoreApplication::translate("User_Window", "View Transaction History", nullptr));
        pushButton->setText(QCoreApplication::translate("User_Window", "Make Transaction", nullptr));
        Transfer_Funds_PB->setText(QCoreApplication::translate("User_Window", "Transfer Funds to Another Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Window: public Ui_User_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_WINDOW_H
