/********************************************************************************
** Form generated from reading UI file 'admin_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_WINDOW_H
#define UI_ADMIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Window
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QPushButton *SignOut_PB;
    QPushButton *pushButton_2;
    QPushButton *View_Transaction_History;
    QPushButton *Get_User_Balance_PB;
    QPushButton *pushButton;
    QPushButton *Create_New_User_PB;
    QPushButton *Get_Account_Number_PB;

    void setupUi(QWidget *Admin_Window)
    {
        if (Admin_Window->objectName().isEmpty())
            Admin_Window->setObjectName("Admin_Window");
        Admin_Window->resize(1208, 892);
        groupBox = new QGroupBox(Admin_Window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-10, 0, 1201, 831));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(650, 250, 500, 100));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        SignOut_PB = new QPushButton(groupBox);
        SignOut_PB->setObjectName("SignOut_PB");
        SignOut_PB->setGeometry(QRect(350, 700, 500, 100));
        SignOut_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 550, 500, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        View_Transaction_History = new QPushButton(groupBox);
        View_Transaction_History->setObjectName("View_Transaction_History");
        View_Transaction_History->setGeometry(QRect(50, 400, 500, 100));
        View_Transaction_History->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Get_User_Balance_PB = new QPushButton(groupBox);
        Get_User_Balance_PB->setObjectName("Get_User_Balance_PB");
        Get_User_Balance_PB->setGeometry(QRect(50, 250, 500, 100));
        Get_User_Balance_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 400, 500, 100));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Create_New_User_PB = new QPushButton(groupBox);
        Create_New_User_PB->setObjectName("Create_New_User_PB");
        Create_New_User_PB->setGeometry(QRect(50, 100, 500, 100));
        Create_New_User_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Create_New_User_PB->setIconSize(QSize(50, 50));
        Get_Account_Number_PB = new QPushButton(groupBox);
        Get_Account_Number_PB->setObjectName("Get_Account_Number_PB");
        Get_Account_Number_PB->setGeometry(QRect(650, 100, 500, 100));
        Get_Account_Number_PB->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(Admin_Window);

        QMetaObject::connectSlotsByName(Admin_Window);
    } // setupUi

    void retranslateUi(QWidget *Admin_Window)
    {
        Admin_Window->setWindowTitle(QCoreApplication::translate("Admin_Window", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin_Window", "Admin Function Window", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admin_Window", "Update User Data", nullptr));
        SignOut_PB->setText(QCoreApplication::translate("Admin_Window", "Sign Out", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin_Window", "View Bank Database", nullptr));
        View_Transaction_History->setText(QCoreApplication::translate("Admin_Window", "View Transaction History", nullptr));
        Get_User_Balance_PB->setText(QCoreApplication::translate("Admin_Window", "Get User Balance", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_Window", "Delete User", nullptr));
        Create_New_User_PB->setText(QCoreApplication::translate("Admin_Window", "Create New User", nullptr));
        Get_Account_Number_PB->setText(QCoreApplication::translate("Admin_Window", "Get Account Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Window: public Ui_Admin_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_WINDOW_H
