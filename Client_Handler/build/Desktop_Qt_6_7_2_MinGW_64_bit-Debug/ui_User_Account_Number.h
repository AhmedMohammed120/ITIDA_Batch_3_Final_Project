/********************************************************************************
** Form generated from reading UI file 'User_Account_Number.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ACCOUNT_NUMBER_H
#define UI_USER_ACCOUNT_NUMBER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
    QLabel *Sign_In_Label;
    QLabel *label_3;
    QPushButton *Back_PB;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;

    void setupUi(QWidget *User_Account_Number)
    {
        if (User_Account_Number->objectName().isEmpty())
            User_Account_Number->setObjectName("User_Account_Number");
        User_Account_Number->resize(1228, 904);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        User_Account_Number->setWindowIcon(icon);
        Sign_In_Label = new QLabel(User_Account_Number);
        Sign_In_Label->setObjectName("Sign_In_Label");
        Sign_In_Label->setGeometry(QRect(0, 0, 1150, 820));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sign_In_Label->sizePolicy().hasHeightForWidth());
        Sign_In_Label->setSizePolicy(sizePolicy);
        Sign_In_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);"));
        Sign_In_Label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ezgif-6-82dce513e7.png")));
        Sign_In_Label->setScaledContents(true);
        label_3 = new QLabel(User_Account_Number);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 30, 491, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 24pt \"Segoe Script\";\n"
""));
        Back_PB = new QPushButton(User_Account_Number);
        Back_PB->setObjectName("Back_PB");
        Back_PB->setGeometry(QRect(310, 670, 500, 91));
        Back_PB->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qconicalgradient(cx:0.909, cy:1, angle:0, stop:0 rgba(217, 193, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), st"
                        "op:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        layoutWidget = new QWidget(User_Account_Number);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 139, 911, 60));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 20pt \"Segoe Script\";"));

        horizontalLayout->addWidget(label);

        Account_Number_LE = new QLineEdit(layoutWidget);
        Account_Number_LE->setObjectName("Account_Number_LE");
        Account_Number_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 20px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));

        horizontalLayout->addWidget(Account_Number_LE);


        retranslateUi(User_Account_Number);

        QMetaObject::connectSlotsByName(User_Account_Number);
    } // setupUi

    void retranslateUi(QWidget *User_Account_Number)
    {
        User_Account_Number->setWindowTitle(QCoreApplication::translate("User_Account_Number", "User - View Account Number", nullptr));
        Sign_In_Label->setText(QString());
        label_3->setText(QCoreApplication::translate("User_Account_Number", "View Account Number", nullptr));
        Back_PB->setText(QCoreApplication::translate("User_Account_Number", "Back to Main Page", nullptr));
        label->setText(QCoreApplication::translate("User_Account_Number", "Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Account_Number: public Ui_User_Account_Number {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ACCOUNT_NUMBER_H
