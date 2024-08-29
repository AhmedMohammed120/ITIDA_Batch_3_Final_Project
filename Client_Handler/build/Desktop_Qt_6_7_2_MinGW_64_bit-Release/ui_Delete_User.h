/********************************************************************************
** Form generated from reading UI file 'Delete_User.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_USER_H
#define UI_DELETE_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete_User
{
public:
    QGroupBox *groupBox;
    QPushButton *Delete;
    QPushButton *Back;
    QLabel *label_2;
    QLineEdit *Delete_User_LE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;

    void setupUi(QWidget *Delete_User)
    {
        if (Delete_User->objectName().isEmpty())
            Delete_User->setObjectName("Delete_User");
        Delete_User->resize(1235, 869);
        groupBox = new QGroupBox(Delete_User);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 10, 1101, 761));
        Delete = new QPushButton(groupBox);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(40, 210, 1011, 100));
        Delete->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Back = new QPushButton(groupBox);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(300, 600, 500, 100));
        Back->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 29, 1101, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Delete_User_LE = new QLineEdit(groupBox);
        Delete_User_LE->setObjectName("Delete_User_LE");
        Delete_User_LE->setGeometry(QRect(0, 160, 1081, 41));
        Delete_User_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Segoe UI\";"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 110, 1091, 33));
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


        retranslateUi(Delete_User);

        QMetaObject::connectSlotsByName(Delete_User);
    } // setupUi

    void retranslateUi(QWidget *Delete_User)
    {
        Delete_User->setWindowTitle(QCoreApplication::translate("Delete_User", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Delete_User", "Delete User", nullptr));
        Delete->setText(QCoreApplication::translate("Delete_User", "Delete", nullptr));
        Back->setText(QCoreApplication::translate("Delete_User", "Back to Admin Page", nullptr));
        label_2->setText(QCoreApplication::translate("Delete_User", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Delete User</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Delete_User", "Enter Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_User: public Ui_Delete_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_USER_H
