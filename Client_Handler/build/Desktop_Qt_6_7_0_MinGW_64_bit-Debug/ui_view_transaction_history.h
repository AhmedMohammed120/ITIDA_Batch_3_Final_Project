/********************************************************************************
** Form generated from reading UI file 'view_transaction_history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TRANSACTION_HISTORY_H
#define UI_VIEW_TRANSACTION_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Account_Number_LE;
    QPushButton *Search;
    QListWidget *Transaction_History_LW;
    QPushButton *Back;

    void setupUi(QWidget *View_Transaction_History)
    {
        if (View_Transaction_History->objectName().isEmpty())
            View_Transaction_History->setObjectName("View_Transaction_History");
        View_Transaction_History->resize(1227, 891);
        groupBox = new QGroupBox(View_Transaction_History);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 10, 1151, 771));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";\n"
"font: 900 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        Account_Number_LE = new QLineEdit(groupBox);
        Account_Number_LE->setObjectName("Account_Number_LE");

        horizontalLayout_2->addWidget(Account_Number_LE);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        Search = new QPushButton(groupBox);
        Search->setObjectName("Search");

        gridLayout->addWidget(Search, 1, 0, 1, 1);

        Transaction_History_LW = new QListWidget(groupBox);
        Transaction_History_LW->setObjectName("Transaction_History_LW");

        gridLayout->addWidget(Transaction_History_LW, 2, 0, 1, 1);

        Back = new QPushButton(groupBox);
        Back->setObjectName("Back");

        gridLayout->addWidget(Back, 3, 0, 1, 1);


        retranslateUi(View_Transaction_History);

        QMetaObject::connectSlotsByName(View_Transaction_History);
    } // setupUi

    void retranslateUi(QWidget *View_Transaction_History)
    {
        View_Transaction_History->setWindowTitle(QCoreApplication::translate("View_Transaction_History", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("View_Transaction_History", "View Transaction History", nullptr));
        label_2->setText(QCoreApplication::translate("View_Transaction_History", "Enter Account Number:", nullptr));
        Search->setText(QCoreApplication::translate("View_Transaction_History", "Search", nullptr));
        Back->setText(QCoreApplication::translate("View_Transaction_History", "Back to Admin Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Transaction_History: public Ui_View_Transaction_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TRANSACTION_HISTORY_H
