/********************************************************************************
** Form generated from reading UI file 'get_user_balance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_USER_BALANCE_H
#define UI_GET_USER_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Get_User_Balance
{
public:
    QGroupBox *groupBox;
    QPushButton *Search_2;
    QPushButton *Back_2;
    QLabel *label_3;
    QLineEdit *Get_Account_Number_LE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *Account_Number_LE_2;

    void setupUi(QWidget *Get_User_Balance)
    {
        if (Get_User_Balance->objectName().isEmpty())
            Get_User_Balance->setObjectName("Get_User_Balance");
        Get_User_Balance->resize(1232, 857);
        groupBox = new QGroupBox(Get_User_Balance);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 20, 1131, 701));
        Search_2 = new QPushButton(groupBox);
        Search_2->setObjectName("Search_2");
        Search_2->setGeometry(QRect(300, 250, 500, 100));
        Back_2 = new QPushButton(groupBox);
        Back_2->setObjectName("Back_2");
        Back_2->setGeometry(QRect(300, 550, 500, 100));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 50, 1111, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Get_Account_Number_LE = new QLineEdit(groupBox);
        Get_Account_Number_LE->setObjectName("Get_Account_Number_LE");
        Get_Account_Number_LE->setGeometry(QRect(120, 190, 911, 28));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 130, 1111, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_2);

        Account_Number_LE_2 = new QLineEdit(widget);
        Account_Number_LE_2->setObjectName("Account_Number_LE_2");

        horizontalLayout->addWidget(Account_Number_LE_2);


        retranslateUi(Get_User_Balance);

        QMetaObject::connectSlotsByName(Get_User_Balance);
    } // setupUi

    void retranslateUi(QWidget *Get_User_Balance)
    {
        Get_User_Balance->setWindowTitle(QCoreApplication::translate("Get_User_Balance", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Get_User_Balance", "Get Account Balance", nullptr));
        Search_2->setText(QCoreApplication::translate("Get_User_Balance", "Search", nullptr));
        Back_2->setText(QCoreApplication::translate("Get_User_Balance", "Back to Admin Page", nullptr));
        label_3->setText(QCoreApplication::translate("Get_User_Balance", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Get Account Balance</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Get_User_Balance", "Enter Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Get_User_Balance: public Ui_Get_User_Balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_USER_BALANCE_H
