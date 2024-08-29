/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCome;
    QWidget *centralwidget;
    QGroupBox *Sign_In_GB;
    QLabel *Sign_In_Label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Username_Label;
    QLineEdit *Username_LE;
    QHBoxLayout *horizontalLayout;
    QLabel *PW_Label;
    QLineEdit *PW_LE;
    QLineEdit *Login_LE;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Sign_In_PB;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(920, 419);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionCome = new QAction(MainWindow);
        actionCome->setObjectName("actionCome");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Sign_In_GB = new QGroupBox(centralwidget);
        Sign_In_GB->setObjectName("Sign_In_GB");
        Sign_In_GB->setGeometry(QRect(0, 0, 921, 441));
        Sign_In_GB->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        Sign_In_Label = new QLabel(Sign_In_GB);
        Sign_In_Label->setObjectName("Sign_In_Label");
        Sign_In_Label->setGeometry(QRect(0, 0, 921, 451));
        Sign_In_Label->setStyleSheet(QString::fromUtf8(""));
        Sign_In_Label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/App_Icon.png")));
        Sign_In_Label->setScaledContents(true);
        label_2 = new QLabel(Sign_In_GB);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 631, 41));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 700 20pt \"Segoe Script\";\n"
""));
        layoutWidget = new QWidget(Sign_In_GB);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 90, 781, 129));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Username_Label = new QLabel(layoutWidget);
        Username_Label->setObjectName("Username_Label");
        Username_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe Script\";"));

        horizontalLayout_2->addWidget(Username_Label);

        Username_LE = new QLineEdit(layoutWidget);
        Username_LE->setObjectName("Username_LE");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Username_LE->sizePolicy().hasHeightForWidth());
        Username_LE->setSizePolicy(sizePolicy);
        Username_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 20px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));

        horizontalLayout_2->addWidget(Username_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PW_Label = new QLabel(layoutWidget);
        PW_Label->setObjectName("PW_Label");
        PW_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe Script\";"));

        horizontalLayout->addWidget(PW_Label);

        PW_LE = new QLineEdit(layoutWidget);
        PW_LE->setObjectName("PW_LE");
        PW_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 20px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));

        horizontalLayout->addWidget(PW_LE);


        verticalLayout->addLayout(horizontalLayout);

        Login_LE = new QLineEdit(Sign_In_GB);
        Login_LE->setObjectName("Login_LE");
        Login_LE->setGeometry(QRect(221, 232, 621, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Login_LE->sizePolicy().hasHeightForWidth());
        Login_LE->setSizePolicy(sizePolicy1);
        Login_LE->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"color: qconicalgradient(cx:0.058, cy:0.636, angle:0, stop:0 rgba(91, 80, 0, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.168269 rgba(235, 219, 102, 255), stop:0.225 rgba(128, 105, 15, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:0.990385 rgba(119, 98, 14, 255), stop:1 rgba(35, 40, 3, 255));\n"
"\n"
"\n"
"border-radius: 20px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        label = new QLabel(Sign_In_GB);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 350, 291, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/images.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(Sign_In_GB);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(770, 350, 151, 71));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/124124.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(Sign_In_GB);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(620, 350, 151, 71));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Downloads/Coretech.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(Sign_In_GB);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 350, 121, 71));
        label_5->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/Eme.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(Sign_In_GB);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 350, 211, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Ahmed Mohammed/Desktop/Pictures/ITIDA.png")));
        label_6->setScaledContents(true);
        Sign_In_PB = new QPushButton(Sign_In_GB);
        Sign_In_PB->setObjectName("Sign_In_PB");
        Sign_In_PB->setGeometry(QRect(230, 280, 601, 35));
        Sign_In_PB->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"font: 700 20pt \"Segoe Script\";\n"
"\n"
"\n"
"\n"
"border-radius: 15px; /* This should be half of the width/height */\n"
"border: 2px solid black; /* Optional: adds a visible border around the button */"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Bank System - Client Model", nullptr));
        actionCome->setText(QCoreApplication::translate("MainWindow", "Come", nullptr));
        Sign_In_GB->setTitle(QCoreApplication::translate("MainWindow", "Login Page", nullptr));
        Sign_In_Label->setText(QString());
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Bank System - Client Application</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("MainWindow", "Bank System - Client Application ", nullptr));
        Username_Label->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        PW_Label->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        Sign_In_PB->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
