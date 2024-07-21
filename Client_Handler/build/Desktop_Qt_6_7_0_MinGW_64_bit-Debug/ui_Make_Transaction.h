/********************************************************************************
** Form generated from reading UI file 'Make_Transaction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKE_TRANSACTION_H
#define UI_MAKE_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Make_Transaction
{
public:
    QPushButton *Back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Funds_Label;
    QLineEdit *Funds_LE;
    QPushButton *Add_Funds_PB;
    QPushButton *Deduct_Funds_PB;
    QLineEdit *Process_LE;
    QLabel *label_2;

    void setupUi(QWidget *Make_Transaction)
    {
        if (Make_Transaction->objectName().isEmpty())
            Make_Transaction->setObjectName("Make_Transaction");
        Make_Transaction->resize(1224, 900);
        Back = new QPushButton(Make_Transaction);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(340, 550, 500, 100));
        layoutWidget = new QWidget(Make_Transaction);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 120, 1021, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Funds_Label = new QLabel(layoutWidget);
        Funds_Label->setObjectName("Funds_Label");
        Funds_Label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(Funds_Label);

        Funds_LE = new QLineEdit(layoutWidget);
        Funds_LE->setObjectName("Funds_LE");

        horizontalLayout->addWidget(Funds_LE);

        Add_Funds_PB = new QPushButton(Make_Transaction);
        Add_Funds_PB->setObjectName("Add_Funds_PB");
        Add_Funds_PB->setGeometry(QRect(100, 220, 500, 100));
        Deduct_Funds_PB = new QPushButton(Make_Transaction);
        Deduct_Funds_PB->setObjectName("Deduct_Funds_PB");
        Deduct_Funds_PB->setGeometry(QRect(650, 220, 500, 100));
        Process_LE = new QLineEdit(Make_Transaction);
        Process_LE->setObjectName("Process_LE");
        Process_LE->setGeometry(QRect(50, 170, 1021, 28));
        label_2 = new QLabel(Make_Transaction);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 30, 1101, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(Make_Transaction);

        QMetaObject::connectSlotsByName(Make_Transaction);
    } // setupUi

    void retranslateUi(QWidget *Make_Transaction)
    {
        Make_Transaction->setWindowTitle(QCoreApplication::translate("Make_Transaction", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Make_Transaction", "Back", nullptr));
        Funds_Label->setText(QCoreApplication::translate("Make_Transaction", "Funds Value:", nullptr));
        Add_Funds_PB->setText(QCoreApplication::translate("Make_Transaction", "Add Funds", nullptr));
        Deduct_Funds_PB->setText(QCoreApplication::translate("Make_Transaction", "Deduct Funds", nullptr));
        label_2->setText(QCoreApplication::translate("Make_Transaction", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Make a Transaction</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Make_Transaction: public Ui_Make_Transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKE_TRANSACTION_H
