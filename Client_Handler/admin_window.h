#ifndef ADMIN_WINDOW_H
#define ADMIN_WINDOW_H

#include <QWidget>
#include "Admin_Methods/Create_User.h"
#include "Admin_Methods/get_account_number.h"
#include "Admin_Methods/get_user_balance.h"
#include "Admin_Methods/Delete_User.h"
#include "Admin_Methods/view_transaction_history.h"
#include "Admin_Methods/view_bank_database.h"
#include "Admin_Methods/Update_User_Data.h"

namespace Ui {
class Admin_Window;
}

class Admin_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Admin_Window(QWidget *parent = nullptr);
    //void Init_Main_Window(Ui::MainWindow *MainWindow_UI_Cpy);
    ~Admin_Window();
    void Clear();

private slots:
    void on_SignOut_PB_clicked();
    void on_Create_New_User_PB_clicked();

    void on_Get_Account_Number_PB_clicked();

    void on_Get_User_Balance_PB_clicked();

    void on_pushButton_clicked();

    void on_View_Transaction_History_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Admin_Window *ui;
    Create_User* Create_User_Ptr;
    Get_Account_Number* Get_Account_Number_Ptr;
    Get_User_Balance* Get_User_Balance_Ptr;
    Delete_User* Delete_User_Ptr;
    View_Transaction_History* View_Transaction_History_Ptr;
    View_Bank_Database* View_Bank_Database_Ptr;
    Update_User_Data* Update_User_Data_Ptr;

    // Ui::MainWindow *MainWindow_UI;

};

#endif // ADMIN_WINDOW_H
