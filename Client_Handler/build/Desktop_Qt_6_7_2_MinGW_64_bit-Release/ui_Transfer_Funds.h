/********************************************************************************
** Form generated from reading UI file 'Transfer_Funds.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_FUNDS_H
#define UI_TRANSFER_FUNDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Transfer_Funds
{
public:
    QPushButton *Back;
    QLineEdit *Process_LE;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Account_Number_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Funds_Amount_LE;
    QLabel *label_3;

    void setupUi(QWidget *Transfer_Funds)
    {
        if (Transfer_Funds->objectName().isEmpty())
            Transfer_Funds->setObjectName("Transfer_Funds");
        Transfer_Funds->resize(1263, 884);
        Back = new QPushButton(Transfer_Funds);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(340, 550, 500, 100));
        Process_LE = new QLineEdit(Transfer_Funds);
        Process_LE->setObjectName("Process_LE");
        Process_LE->setGeometry(QRect(260, 210, 931, 28));
        pushButton = new QPushButton(Transfer_Funds);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 250, 500, 100));
        layoutWidget = new QWidget(Transfer_Funds);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 120, 1171, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        Account_Number_LE = new QLineEdit(layoutWidget);
        Account_Number_LE->setObjectName("Account_Number_LE");

        horizontalLayout->addWidget(Account_Number_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        Funds_Amount_LE = new QLineEdit(layoutWidget);
        Funds_Amount_LE->setObjectName("Funds_Amount_LE");

        horizontalLayout_2->addWidget(Funds_Amount_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(Transfer_Funds);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 20, 1101, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(Transfer_Funds);

        QMetaObject::connectSlotsByName(Transfer_Funds);
    } // setupUi

    void retranslateUi(QWidget *Transfer_Funds)
    {
        Transfer_Funds->setWindowTitle(QCoreApplication::translate("Transfer_Funds", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Transfer_Funds", "Back to Main Page", nullptr));
        pushButton->setText(QCoreApplication::translate("Transfer_Funds", "Transfer Funds", nullptr));
        label->setText(QCoreApplication::translate("Transfer_Funds", "Enter Account Number:", nullptr));
        label_2->setText(QCoreApplication::translate("Transfer_Funds", "Enter Funds Amount:", nullptr));
        label_3->setText(QCoreApplication::translate("Transfer_Funds", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Transfer Funds to Another Account</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transfer_Funds: public Ui_Transfer_Funds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_FUNDS_H
