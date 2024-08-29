/********************************************************************************
** Form generated from reading UI file 'view_transaction_history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TRANSACTION_HISTORY_H
#define UI_VIEW_TRANSACTION_HISTORY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Transaction_History
{
public:
    QLabel *Sign_In_Label;
    QPushButton *Search;
    QListWidget *Transaction_History_LW;
    QPushButton *Back;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *Account_Number_LE;

    void setupUi(QWidget *View_Transaction_History)
    {
        if (View_Transaction_History->objectName().isEmpty())
            View_Transaction_History->setObjectName("View_Transaction_History");
        View_Transaction_History->resize(1150, 820);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        View_Transaction_History->setWindowIcon(icon);
        Sign_In_Label = new QLabel(View_Transaction_History);
        Sign_In_Label->setObjectName("Sign_In_Label");
        Sign_In_Label->setGeometry(QRect(0, 0, 1150, 900));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sign_In_Label->sizePolicy().hasHeightForWidth());
        Sign_In_Label->setSizePolicy(sizePolicy);
        Sign_In_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);"));
        Sign_In_Label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ezgif-6-82dce513e7.png")));
        Sign_In_Label->setScaledContents(true);
        Search = new QPushButton(View_Transaction_History);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(370, 140, 411, 71));
        Search->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        Transaction_History_LW = new QListWidget(View_Transaction_History);
        Transaction_History_LW->setObjectName("Transaction_History_LW");
        Transaction_History_LW->setGeometry(QRect(20, 220, 1100, 471));
        Transaction_History_LW->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 12pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 30px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        Back = new QPushButton(View_Transaction_History);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(360, 700, 461, 101));
        Back->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"\n"
"border-radius: 25px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        label_3 = new QLabel(View_Transaction_History);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 10, 551, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 24pt \"Segoe Script\";\n"
""));
        widget = new QWidget(View_Transaction_History);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 80, 971, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 3000 14pt \"Segoe Script\";"));

        horizontalLayout->addWidget(label_2);

        Account_Number_LE = new QLineEdit(widget);
        Account_Number_LE->setObjectName("Account_Number_LE");
        Account_Number_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 16pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 15px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));

        horizontalLayout->addWidget(Account_Number_LE);


        retranslateUi(View_Transaction_History);

        QMetaObject::connectSlotsByName(View_Transaction_History);
    } // setupUi

    void retranslateUi(QWidget *View_Transaction_History)
    {
        View_Transaction_History->setWindowTitle(QCoreApplication::translate("View_Transaction_History", "Admin - Get User Transaction History", nullptr));
        Sign_In_Label->setText(QString());
        Search->setText(QCoreApplication::translate("View_Transaction_History", "Search", nullptr));
        Back->setText(QCoreApplication::translate("View_Transaction_History", "Back to Admin Page", nullptr));
        label_3->setText(QCoreApplication::translate("View_Transaction_History", "User Transaction History", nullptr));
        label_2->setText(QCoreApplication::translate("View_Transaction_History", "Enter Account Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Transaction_History: public Ui_View_Transaction_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TRANSACTION_HISTORY_H
