/********************************************************************************
** Form generated from reading UI file 'Update_User_Data.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_USER_DATA_H
#define UI_UPDATE_USER_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Update_User_Data
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Account_Number_LE;
    QPushButton *Search;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Email_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Name_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PW_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *Age_LE;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *Balance_LE;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *Account_Type_LE;
    QListWidget *Test_LW;
    QPushButton *Update_User_Data_PB;
    QPushButton *Back;

    void setupUi(QWidget *Update_User_Data)
    {
        if (Update_User_Data->objectName().isEmpty())
            Update_User_Data->setObjectName("Update_User_Data");
        Update_User_Data->resize(1233, 898);
        layoutWidget_2 = new QWidget(Update_User_Data);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 22, 1131, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        Account_Number_LE = new QLineEdit(layoutWidget_2);
        Account_Number_LE->setObjectName("Account_Number_LE");

        horizontalLayout_2->addWidget(Account_Number_LE);

        Search = new QPushButton(Update_User_Data);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(390, 80, 391, 71));
        groupBox = new QGroupBox(Update_User_Data);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 150, 1201, 491));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Email_LE = new QLineEdit(groupBox);
        Email_LE->setObjectName("Email_LE");

        horizontalLayout->addWidget(Email_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        Name_LE = new QLineEdit(groupBox);
        Name_LE->setObjectName("Name_LE");

        horizontalLayout_3->addWidget(Name_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_4);

        PW_LE = new QLineEdit(groupBox);
        PW_LE->setObjectName("PW_LE");

        horizontalLayout_4->addWidget(PW_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(label_5);

        Age_LE = new QLineEdit(groupBox);
        Age_LE->setObjectName("Age_LE");

        horizontalLayout_5->addWidget(Age_LE);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(label_6);

        Balance_LE = new QLineEdit(groupBox);
        Balance_LE->setObjectName("Balance_LE");

        horizontalLayout_6->addWidget(Balance_LE);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_7);

        Account_Type_LE = new QLineEdit(groupBox);
        Account_Type_LE->setObjectName("Account_Type_LE");

        horizontalLayout_7->addWidget(Account_Type_LE);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Test_LW = new QListWidget(groupBox);
        Test_LW->setObjectName("Test_LW");

        gridLayout->addWidget(Test_LW, 1, 0, 1, 1);

        Update_User_Data_PB = new QPushButton(groupBox);
        Update_User_Data_PB->setObjectName("Update_User_Data_PB");

        gridLayout->addWidget(Update_User_Data_PB, 2, 0, 1, 1);

        Back = new QPushButton(Update_User_Data);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(380, 690, 391, 71));

        retranslateUi(Update_User_Data);

        QMetaObject::connectSlotsByName(Update_User_Data);
    } // setupUi

    void retranslateUi(QWidget *Update_User_Data)
    {
        Update_User_Data->setWindowTitle(QCoreApplication::translate("Update_User_Data", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Update_User_Data", "Enter Account Number:", nullptr));
        Search->setText(QCoreApplication::translate("Update_User_Data", "Search", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Update_User_Data", "Update User Data", nullptr));
        label->setText(QCoreApplication::translate("Update_User_Data", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("Update_User_Data", "Full Name:", nullptr));
        label_4->setText(QCoreApplication::translate("Update_User_Data", "Password: ", nullptr));
        label_5->setText(QCoreApplication::translate("Update_User_Data", "Age:", nullptr));
        label_6->setText(QCoreApplication::translate("Update_User_Data", "Initial Balance:", nullptr));
        label_7->setText(QCoreApplication::translate("Update_User_Data", "Account Type:", nullptr));
        Update_User_Data_PB->setText(QCoreApplication::translate("Update_User_Data", "Update User Data", nullptr));
        Back->setText(QCoreApplication::translate("Update_User_Data", "Back to Admin Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_User_Data: public Ui_Update_User_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_USER_DATA_H
