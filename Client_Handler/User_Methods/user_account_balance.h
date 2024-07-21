#ifndef USER_ACCOUNT_BALANCE_H
#define USER_ACCOUNT_BALANCE_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class User_Account_Balance;
}

class User_Account_Balance : public QWidget
{
    Q_OBJECT

public:
    explicit User_Account_Balance(QWidget *parent = nullptr);
    ~User_Account_Balance();

private slots:
    void on_Back_clicked();
    void Write_To_LE(QString Data);

private:
    Ui::User_Account_Balance *ui;
    Signals_Handler* Ptr;
};

#endif // USER_ACCOUNT_BALANCE_H
