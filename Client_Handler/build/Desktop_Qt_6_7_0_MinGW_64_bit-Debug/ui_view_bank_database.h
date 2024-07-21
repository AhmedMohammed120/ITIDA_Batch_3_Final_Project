/********************************************************************************
** Form generated from reading UI file 'view_bank_database.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_BANK_DATABASE_H
#define UI_VIEW_BANK_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Bank_Database
{
public:
    QListWidget *Bank_Database_LW;
    QPushButton *Back;

    void setupUi(QWidget *View_Bank_Database)
    {
        if (View_Bank_Database->objectName().isEmpty())
            View_Bank_Database->setObjectName("View_Bank_Database");
        View_Bank_Database->resize(1228, 880);
        Bank_Database_LW = new QListWidget(View_Bank_Database);
        Bank_Database_LW->setObjectName("Bank_Database_LW");
        Bank_Database_LW->setGeometry(QRect(120, 70, 991, 551));
        Back = new QPushButton(View_Bank_Database);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(370, 688, 401, 71));

        retranslateUi(View_Bank_Database);

        QMetaObject::connectSlotsByName(View_Bank_Database);
    } // setupUi

    void retranslateUi(QWidget *View_Bank_Database)
    {
        View_Bank_Database->setWindowTitle(QCoreApplication::translate("View_Bank_Database", "Form", nullptr));
        Back->setText(QCoreApplication::translate("View_Bank_Database", "Back to Admin Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Bank_Database: public Ui_View_Bank_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_BANK_DATABASE_H
