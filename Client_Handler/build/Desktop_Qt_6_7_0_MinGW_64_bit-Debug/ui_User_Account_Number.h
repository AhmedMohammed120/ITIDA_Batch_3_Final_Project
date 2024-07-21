/********************************************************************************
** Form generated from reading UI file 'User_Account_Number.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ACCOUNT_NUMBER_H
#define UI_USER_ACCOUNT_NUMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Account_Number
{
public:
    QPushButton *Back_PB;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;
    QLabel *label_3;

    void setupUi(QWidget *User_Account_Number)
    {
        if (User_Account_Number->objectName().isEmpty())
            User_Account_Number->setObjectName("User_Account_Number");
        User_Account_Number->resize(1228, 904);
        Back_PB = new QPushButton(User_Account_Number);
        Back_PB->setObjectName("Back_PB");
        Back_PB->setGeometry(QRect(350, 550, 500, 91));
        layoutWidget = new QWidget(User_Account_Number);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 170, 891, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Account_Number_LE = new QLineEdit(layoutWidget);
        Account_Number_LE->setObjectName("Account_Number_LE");

        horizontalLayout->addWidget(Account_Number_LE);

        label_3 = new QLabel(User_Account_Number);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 40, 1101, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(User_Account_Number);

        QMetaObject::connectSlotsByName(User_Account_Number);
    } // setupUi

    void retranslateUi(QWidget *User_Account_Number)
    {
        User_Account_Number->setWindowTitle(QCoreApplication::translate("User_Account_Number", "Form", nullptr));
        Back_PB->setText(QCoreApplication::translate("User_Account_Number", "Back", nullptr));
        label->setText(QCoreApplication::translate("User_Account_Number", "Account Number:", nullptr));
        label_3->setText(QCoreApplication::translate("User_Account_Number", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">View Account Number</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Account_Number: public Ui_User_Account_Number {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ACCOUNT_NUMBER_H
