/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCome;
    QWidget *centralwidget;
    QTabWidget *Login_TW;
    QWidget *tab_3;
    QGroupBox *Sign_In_GB;
    QLineEdit *Login_LE;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PW_Label;
    QLineEdit *PW_LE;
    QPushButton *Sign_In_PB;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *Username_Label;
    QLineEdit *Username_LE;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuClient_System;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1048, 928);
        actionCome = new QAction(MainWindow);
        actionCome->setObjectName("actionCome");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Login_TW = new QTabWidget(centralwidget);
        Login_TW->setObjectName("Login_TW");
        Login_TW->setGeometry(QRect(30, 0, 921, 771));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        Sign_In_GB = new QGroupBox(tab_3);
        Sign_In_GB->setObjectName("Sign_In_GB");
        Sign_In_GB->setGeometry(QRect(10, 30, 951, 691));
        Sign_In_GB->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        Login_LE = new QLineEdit(Sign_In_GB);
        Login_LE->setObjectName("Login_LE");
        Login_LE->setGeometry(QRect(120, 180, 771, 41));
        Login_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";"));
        label = new QLabel(Sign_In_GB);
        label->setObjectName("label");
        label->setGeometry(QRect(260, -11, 421, 41));
        widget = new QWidget(Sign_In_GB);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 120, 891, 41));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PW_Label = new QLabel(widget);
        PW_Label->setObjectName("PW_Label");

        horizontalLayout_2->addWidget(PW_Label);

        PW_LE = new QLineEdit(widget);
        PW_LE->setObjectName("PW_LE");
        PW_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(PW_LE);

        Sign_In_PB = new QPushButton(Sign_In_GB);
        Sign_In_PB->setObjectName("Sign_In_PB");
        Sign_In_PB->setGeometry(QRect(120, 240, 771, 50));
        Sign_In_PB->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        widget1 = new QWidget(Sign_In_GB);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 50, 891, 41));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Username_Label = new QLabel(widget1);
        Username_Label->setObjectName("Username_Label");

        horizontalLayout->addWidget(Username_Label);

        Username_LE = new QLineEdit(widget1);
        Username_LE->setObjectName("Username_LE");
        Username_LE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(Username_LE);

        Login_TW->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1048, 25));
        menuClient_System = new QMenu(menubar);
        menuClient_System->setObjectName("menuClient_System");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuClient_System->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(Sign_In_PB, &QPushButton::clicked, Login_LE, qOverload<>(&QLineEdit::clear));

        Login_TW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCome->setText(QCoreApplication::translate("MainWindow", "Come", nullptr));
        Sign_In_GB->setTitle(QCoreApplication::translate("MainWindow", "Sign In ", nullptr));
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Client System GUI</span></p></body></html>", nullptr));
        PW_Label->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        Sign_In_PB->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        Username_Label->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        Login_TW->setTabText(Login_TW->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Login ", nullptr));
        menuClient_System->setTitle(QCoreApplication::translate("MainWindow", "Client System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
