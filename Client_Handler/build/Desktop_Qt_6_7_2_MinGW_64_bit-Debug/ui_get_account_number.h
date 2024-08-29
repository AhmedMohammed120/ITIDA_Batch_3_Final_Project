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
#include <QtGui/QIcon>
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
    QLabel *Sign_In_Label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;
    QPushButton *Search;
    QLineEdit *Get_Account_Number_LE;
    QPushButton *Back;

    void setupUi(QWidget *Get_Account_Number)
    {
        if (Get_Account_Number->objectName().isEmpty())
            Get_Account_Number->setObjectName("Get_Account_Number");
        Get_Account_Number->resize(1150, 820);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Get_Account_Number->setWindowIcon(icon);
        groupBox = new QGroupBox(Get_Account_Number);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 1150, 820));
        Sign_In_Label = new QLabel(groupBox);
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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 30, 481, 61));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 24pt \"Segoe Script\";\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 130, 1031, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 14pt \"Segoe Script\";"));

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

        Search = new QPushButton(groupBox);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(300, 310, 500, 100));
        Search->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        Get_Account_Number_LE = new QLineEdit(groupBox);
        Get_Account_Number_LE->setObjectName("Get_Account_Number_LE");
        Get_Account_Number_LE->setGeometry(QRect(210, 210, 800, 51));
        Get_Account_Number_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 20px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        Back = new QPushButton(groupBox);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(330, 690, 500, 100));
        Back->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qconicalgradient(cx:0.909, cy:1, angle:0, stop:0 rgba(217, 193, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), st"
                        "op:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));

        retranslateUi(Get_Account_Number);

        QMetaObject::connectSlotsByName(Get_Account_Number);
    } // setupUi

    void retranslateUi(QWidget *Get_Account_Number)
    {
        Get_Account_Number->setWindowTitle(QCoreApplication::translate("Get_Account_Number", "Admin - Get Account Username", nullptr));
        groupBox->setTitle(QString());
        Sign_In_Label->setText(QString());
        label_2->setText(QCoreApplication::translate("Get_Account_Number", "Get Account Username", nullptr));
        label->setText(QCoreApplication::translate("Get_Account_Number", "Enter Account Number:", nullptr));
        Search->setText(QCoreApplication::translate("Get_Account_Number", "Search", nullptr));
        Back->setText(QCoreApplication::translate("Get_Account_Number", "Back to Admin Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Get_Account_Number: public Ui_Get_Account_Number {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_ACCOUNT_NUMBER_H
