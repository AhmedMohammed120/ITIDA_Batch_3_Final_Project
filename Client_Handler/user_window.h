#ifndef USER_WINDOW_H
#define USER_WINDOW_H

#include <QWidget>
#include "User_Methods/User_Account_Number.h"
#include "User_Methods/user_account_balance.h"
#include "User_Methods/User_Transaction_History.h"
#include "User_Methods/Make_Transaction.h"
#include "User_Methods/Transfer_Funds.h"

namespace Ui {
class User_Window;
}

class User_Window : public QWidget
{
    Q_OBJECT

public:
    explicit User_Window(QWidget *parent = nullptr);
    ~User_Window();
    void New_User_Request(QString Request);
    QString Account_Number;

private slots:
    void on_Back_clicked();

    void on_Get_User_Account_Number_clicked();

    void on_User_Balance_PB_clicked();

    void on_Transaction_History_PB_clicked();

    void on_pushButton_clicked();

    void on_Transfer_Funds_PB_clicked();

private:
    Ui::User_Window *ui;
    User_Account_Number* User_Account_Number_Ptr;
    User_Account_Balance* User_Account_Balance_Ptr;
    User_Transaction_History* User_Transaction_History_Ptr;
    Make_Transaction* Make_Transaction_Ptr;
    Transfer_Funds* Transfer_Funds_Ptr;
};

#endif // USER_WINDOW_H
