/********************************************************************************
** Form generated from reading UI file 'view_bank_database.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_BANK_DATABASE_H
#define UI_VIEW_BANK_DATABASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Bank_Database
{
public:
    QLabel *Sign_In_Label;
    QListWidget *Bank_Database_LW;
    QPushButton *Back;
    QLabel *label_3;
    QLabel *Sign_In_Label_2;

    void setupUi(QWidget *View_Bank_Database)
    {
        if (View_Bank_Database->objectName().isEmpty())
            View_Bank_Database->setObjectName("View_Bank_Database");
        View_Bank_Database->resize(1228, 880);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        View_Bank_Database->setWindowIcon(icon);
        Sign_In_Label = new QLabel(View_Bank_Database);
        Sign_In_Label->setObjectName("Sign_In_Label");
        Sign_In_Label->setGeometry(QRect(-10, -10, 1150, 900));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sign_In_Label->sizePolicy().hasHeightForWidth());
        Sign_In_Label->setSizePolicy(sizePolicy);
        Sign_In_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);"));
        Sign_In_Label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ezgif-6-82dce513e7.png")));
        Sign_In_Label->setScaledContents(true);
        Bank_Database_LW = new QListWidget(View_Bank_Database);
        Bank_Database_LW->setObjectName("Bank_Database_LW");
        Bank_Database_LW->setGeometry(QRect(100, 100, 991, 571));
        Bank_Database_LW->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"border-radius: 10px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        Back = new QPushButton(View_Bank_Database);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(350, 710, 401, 71));
        Back->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        label_3 = new QLabel(View_Bank_Database);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 20, 531, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 24pt \"Segoe Script\";\n"
""));
        Sign_In_Label_2 = new QLabel(View_Bank_Database);
        Sign_In_Label_2->setObjectName("Sign_In_Label_2");
        Sign_In_Label_2->setGeometry(QRect(1150, 240, 1150, 900));
        sizePolicy.setHeightForWidth(Sign_In_Label_2->sizePolicy().hasHeightForWidth());
        Sign_In_Label_2->setSizePolicy(sizePolicy);
        Sign_In_Label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);"));
        Sign_In_Label_2->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ezgif-6-82dce513e7.png")));
        Sign_In_Label_2->setScaledContents(true);

        retranslateUi(View_Bank_Database);

        QMetaObject::connectSlotsByName(View_Bank_Database);
    } // setupUi

    void retranslateUi(QWidget *View_Bank_Database)
    {
        View_Bank_Database->setWindowTitle(QCoreApplication::translate("View_Bank_Database", "Admin - View Bank Database", nullptr));
        Sign_In_Label->setText(QString());
        Back->setText(QCoreApplication::translate("View_Bank_Database", "Back to Admin Page", nullptr));
        label_3->setText(QCoreApplication::translate("View_Bank_Database", "Bank Accounts Database ", nullptr));
        Sign_In_Label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class View_Bank_Database: public Ui_View_Bank_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_BANK_DATABASE_H
