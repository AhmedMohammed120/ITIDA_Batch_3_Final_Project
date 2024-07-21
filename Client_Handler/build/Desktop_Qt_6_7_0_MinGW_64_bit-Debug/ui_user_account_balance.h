/********************************************************************************
** Form generated from reading UI file 'user_account_balance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ACCOUNT_BALANCE_H
#define UI_USER_ACCOUNT_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Account_Balance
{
public:
    QPushButton *Back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Balance_LE;
    QLabel *label_3;

    void setupUi(QWidget *User_Account_Balance)
    {
        if (User_Account_Balance->objectName().isEmpty())
            User_Account_Balance->setObjectName("User_Account_Balance");
        User_Account_Balance->resize(1262, 819);
        Back = new QPushButton(User_Account_Balance);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(340, 550, 500, 100));
        layoutWidget = new QWidget(User_Account_Balance);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 140, 1021, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Account_Balance_LE = new QLineEdit(layoutWidget);
        Account_Balance_LE->setObjectName("Account_Balance_LE");

        horizontalLayout->addWidget(Account_Balance_LE);

        label_3 = new QLabel(User_Account_Balance);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 30, 1101, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(User_Account_Balance);

        QMetaObject::connectSlotsByName(User_Account_Balance);
    } // setupUi

    void retranslateUi(QWidget *User_Account_Balance)
    {
        User_Account_Balance->setWindowTitle(QCoreApplication::translate("User_Account_Balance", "Form", nullptr));
        Back->setText(QCoreApplication::translate("User_Account_Balance", "Back to Main Page", nullptr));
        label->setText(QCoreApplication::translate("User_Account_Balance", "Account Balance:", nullptr));
        label_3->setText(QCoreApplication::translate("User_Account_Balance", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">View Account Balance</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Account_Balance: public Ui_User_Account_Balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ACCOUNT_BALANCE_H
