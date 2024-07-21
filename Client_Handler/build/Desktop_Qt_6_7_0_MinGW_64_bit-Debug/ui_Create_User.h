/********************************************************************************
** Form generated from reading UI file 'Create_User.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_USER_H
#define UI_CREATE_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create_User
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *Create_New_Account_PB;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Email_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Name_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *PW_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *Age_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *Balance_LE;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *Account_Type_LE;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;

    void setupUi(QWidget *Create_User)
    {
        if (Create_User->objectName().isEmpty())
            Create_User->setObjectName("Create_User");
        Create_User->resize(1251, 841);
        Create_User->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 16pt \"Segoe UI\";"));
        pushButton = new QPushButton(Create_User);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 710, 451, 101));
        groupBox = new QGroupBox(Create_User);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 80, 1001, 491));
        Create_New_Account_PB = new QPushButton(groupBox);
        Create_New_Account_PB->setObjectName("Create_New_Account_PB");
        Create_New_Account_PB->setGeometry(QRect(350, 380, 331, 71));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 41, 1001, 313));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Email_LE = new QLineEdit(layoutWidget);
        Email_LE->setObjectName("Email_LE");

        horizontalLayout->addWidget(Email_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        Name_LE = new QLineEdit(layoutWidget);
        Name_LE->setObjectName("Name_LE");

        horizontalLayout_2->addWidget(Name_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        PW_LE = new QLineEdit(layoutWidget);
        PW_LE->setObjectName("PW_LE");

        horizontalLayout_3->addWidget(PW_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_4);

        Age_LE = new QLineEdit(layoutWidget);
        Age_LE->setObjectName("Age_LE");

        horizontalLayout_4->addWidget(Age_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(label_5);

        Balance_LE = new QLineEdit(layoutWidget);
        Balance_LE->setObjectName("Balance_LE");

        horizontalLayout_5->addWidget(Balance_LE);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_7);

        Account_Type_LE = new QLineEdit(layoutWidget);
        Account_Type_LE->setObjectName("Account_Type_LE");

        horizontalLayout_7->addWidget(Account_Type_LE);


        verticalLayout->addLayout(horizontalLayout_7);

        layoutWidget1 = new QWidget(Create_User);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(Create_User);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Create_User);

        QMetaObject::connectSlotsByName(Create_User);
    } // setupUi

    void retranslateUi(QWidget *Create_User)
    {
        Create_User->setWindowTitle(QCoreApplication::translate("Create_User", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Create_User", "Back to Admin Page", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Create_User", "Create New Account", nullptr));
        Create_New_Account_PB->setText(QCoreApplication::translate("Create_User", "Create New Account", nullptr));
        label->setText(QCoreApplication::translate("Create_User", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("Create_User", "Full Name:", nullptr));
        label_3->setText(QCoreApplication::translate("Create_User", "Password: ", nullptr));
        label_4->setText(QCoreApplication::translate("Create_User", "Age:", nullptr));
        label_5->setText(QCoreApplication::translate("Create_User", "Initial Balance:", nullptr));
        label_7->setText(QCoreApplication::translate("Create_User", "Account Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create_User: public Ui_Create_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_USER_H
