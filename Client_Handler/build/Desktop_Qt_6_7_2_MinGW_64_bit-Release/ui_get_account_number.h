/********************************************************************************
** Form generated from reading UI file 'get_account_number.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_ACCOUNT_NUMBER_H
#define UI_GET_ACCOUNT_NUMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Get_Account_Number
{
public:
    QGroupBox *groupBox;
    QPushButton *Search;
    QPushButton *Back;
    QLineEdit *Get_Account_Number_LE;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;

    void setupUi(QWidget *Get_Account_Number)
    {
        if (Get_Account_Number->objectName().isEmpty())
            Get_Account_Number->setObjectName("Get_Account_Number");
        Get_Account_Number->resize(1071, 785);
        groupBox = new QGroupBox(Get_Account_Number);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 0, 1011, 751));
        Search = new QPushButton(groupBox);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(250, 200, 500, 100));
        Search->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Back = new QPushButton(groupBox);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(250, 600, 500, 100));
        Back->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Get_Account_Number_LE = new QLineEdit(groupBox);
        Get_Account_Number_LE->setObjectName("Get_Account_Number_LE");
        Get_Account_Number_LE->setGeometry(QRect(100, 160, 800, 28));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 30, 1011, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 110, 981, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Account_Number_LE = new QLineEdit(widget);
        Account_Number_LE->setObjectName("Account_Number_LE");

        horizontalLayout->addWidget(Account_Number_LE);


        retranslateUi(Get_Account_Number);

        QMetaObject::connectSlotsByName(Get_Account_Number);
    } // setupUi

    void retranslateUi(QWidget *Get_Account_Number)
    {
        Get_Account_Number->setWindowTitle(QCoreApplication::translate("Get_Account_Number", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Get_Account_Number", "GroupBox", nullptr));
        Search->setText(QCoreApplication::translate("Get_Account_Number", "Search", nullptr));
        Back->setText(QCoreApplication::translate("Get_Account_Number", "Back to Admin Page", nullptr));
        label_2->setText(QCoreApplication::translate("Get_Account_Number", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Get Account Username</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Get_Account_Number", "Enter Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Get_Account_Number: public Ui_Get_Account_Number {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_ACCOUNT_NUMBER_H
