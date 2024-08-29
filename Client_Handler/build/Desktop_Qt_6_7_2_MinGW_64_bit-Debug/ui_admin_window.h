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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Window
{
public:
    QGroupBox *groupBox;
    QLabel *Sign_In_Label;
    QPushButton *pushButton_3;
    QPushButton *Create_New_User_PB;
    QPushButton *Get_User_Balance_PB;
    QPushButton *SignOut_PB;
    QPushButton *pushButton;
    QPushButton *Get_Account_Number_PB;
    QPushButton *View_Transaction_History;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Admin_Window)
    {
        if (Admin_Window->objectName().isEmpty())
            Admin_Window->setObjectName("Admin_Window");
        Admin_Window->resize(1150, 820);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Admin_Window->setWindowIcon(icon);
        groupBox = new QGroupBox(Admin_Window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 1150, 820));
        Sign_In_Label = new QLabel(groupBox);
        Sign_In_Label->setObjectName("Sign_In_Label");
        Sign_In_Label->setGeometry(QRect(0, 0, 1201, 931));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sign_In_Label->sizePolicy().hasHeightForWidth());
        Sign_In_Label->setSizePolicy(sizePolicy);
        Sign_In_Label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ezgif-6-82dce513e7.png")));
        Sign_In_Label->setScaledContents(true);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(610, 50, 500, 100));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        Create_New_User_PB = new QPushButton(groupBox);
        Create_New_User_PB->setObjectName("Create_New_User_PB");
        Create_New_User_PB->setGeometry(QRect(50, 350, 500, 100));
        Create_New_User_PB->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        Create_New_User_PB->setIconSize(QSize(50, 50));
        Get_User_Balance_PB = new QPushButton(groupBox);
        Get_User_Balance_PB->setObjectName("Get_User_Balance_PB");
        Get_User_Balance_PB->setGeometry(QRect(50, 50, 500, 100));
        sizePolicy.setHeightForWidth(Get_User_Balance_PB->sizePolicy().hasHeightForWidth());
        Get_User_Balance_PB->setSizePolicy(sizePolicy);
        Get_User_Balance_PB->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        SignOut_PB = new QPushButton(groupBox);
        SignOut_PB->setObjectName("SignOut_PB");
        SignOut_PB->setGeometry(QRect(300, 650, 550, 100));
        SignOut_PB->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 200, 500, 100));
        pushButton->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        Get_Account_Number_PB = new QPushButton(groupBox);
        Get_Account_Number_PB->setObjectName("Get_Account_Number_PB");
        Get_Account_Number_PB->setGeometry(QRect(610, 350, 500, 100));
        Get_Account_Number_PB->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        View_Transaction_History = new QPushButton(groupBox);
        View_Transaction_History->setObjectName("View_Transaction_History");
        View_Transaction_History->setGeometry(QRect(300, 520, 550, 100));
        View_Transaction_History->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 200, 500, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 24pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(114, 142, 27, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border a"
                        "round the button */"));

        retranslateUi(Admin_Window);

        QMetaObject::connectSlotsByName(Admin_Window);
    } // setupUi

    void retranslateUi(QWidget *Admin_Window)
    {
        Admin_Window->setWindowTitle(QCoreApplication::translate("Admin_Window", "Client Model - Admin Main Window", nullptr));
        groupBox->setTitle(QString());
        Sign_In_Label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Admin_Window", "Update User Data", nullptr));
        Create_New_User_PB->setText(QCoreApplication::translate("Admin_Window", "Create New User", nullptr));
        Get_User_Balance_PB->setText(QCoreApplication::translate("Admin_Window", "Get User Balance", nullptr));
        SignOut_PB->setText(QCoreApplication::translate("Admin_Window", "Sign Out", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_Window", "Delete User", nullptr));
        Get_Account_Number_PB->setText(QCoreApplication::translate("Admin_Window", "Get Account Username", nullptr));
        View_Transaction_History->setText(QCoreApplication::translate("Admin_Window", "View Transaction History", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin_Window", "View Bank Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Window: public Ui_Admin_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_WINDOW_H
