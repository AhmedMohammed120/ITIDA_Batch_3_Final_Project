#include "admin_window.h"
#include "ui_admin_window.h"
#include "mainwindow.h"

extern MainWindow*  Main_Window_Ptr;
extern Client *Client_Ptr;
Admin_Window::Admin_Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin_Window)
{
    ui->setupUi(this);
    Create_User_Ptr = new Create_User();
    Get_Account_Number_Ptr = new Get_Account_Number();
    Get_User_Balance_Ptr = new Get_User_Balance();
    Delete_User_Ptr = new Delete_User();
    View_Transaction_History_Ptr = new View_Transaction_History();
    View_Bank_Database_Ptr = new View_Bank_Database();
    Update_User_Data_Ptr = new Update_User_Data();

    // Create_User_Ptr->LE;
    // Get_Account_Number_Ptr = new Get_Account_Number();
    // Get_User_Balance_Ptr = new Get_User_Balance();
    // Delete_User_Ptr = new Delete_User();
    // View_Transaction_History_Ptr = new View_Transaction_History();
    // View_Bank_Database_Ptr = new View_Bank_Database();
    // Update_User_Data_Ptr = new Update_User_Data();


}

// void Admin_Window::Init_Main_Window(Ui::MainWindow *MainWindow_UI_Cpy)
// {
//     MainWindow_UI = MainWindow_UI_Cpy;
// }

Admin_Window::~Admin_Window()
{
    delete ui;
}

void Admin_Window::Clear()
{
    Get_Account_Number_Ptr->Clear();
    Get_User_Balance_Ptr->Clear();
    View_Transaction_History_Ptr->Clear();
}

void Admin_Window::on_SignOut_PB_clicked()
{

    this->hide();
    Main_Window_Ptr->Clear_PW();

    Main_Window_Ptr->show();
}


void Admin_Window::on_Create_New_User_PB_clicked()
{
    this->hide();
    Create_User_Ptr->show();
}


void Admin_Window::on_Get_Account_Number_PB_clicked()
{
    this->hide();
    Get_Account_Number_Ptr->show();
}


void Admin_Window::on_Get_User_Balance_PB_clicked()
{
    this->hide();
    Get_User_Balance_Ptr->show();
}


void Admin_Window::on_pushButton_clicked()
{
    this->hide();
    Delete_User_Ptr->show();
}


void Admin_Window::on_View_Transaction_History_clicked()
{
    this->hide();
    View_Transaction_History_Ptr->show();
}


void Admin_Window::on_pushButton_2_clicked()
{

    QString Format = "View_Bank_Database";
    qDebug()<<"Format->"<<Format<<Qt::endl;
    Client_Ptr->SendDataToServer(Format);
    this->hide();
    View_Bank_Database_Ptr->show();
}


void Admin_Window::on_pushButton_3_clicked()
{
    this->hide();
    Update_User_Data_Ptr->show();
}

