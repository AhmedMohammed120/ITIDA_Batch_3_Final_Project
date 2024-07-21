#include "user_window.h"
#include "ui_user_window.h"
#include "mainwindow.h"
#include <QTimer>

extern MainWindow*  Main_Window_Ptr;
extern Client *Client_Ptr;
User_Window::User_Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User_Window)
{
    ui->setupUi(this);
    User_Account_Number_Ptr = new User_Account_Number();
    User_Account_Balance_Ptr = new User_Account_Balance();
    User_Transaction_History_Ptr = new User_Transaction_History();
    Make_Transaction_Ptr = new Make_Transaction();
    Transfer_Funds_Ptr = new Transfer_Funds();
}

User_Window::~User_Window()
{
    delete ui;
}

void User_Window::New_User_Request(QString Request)
{
    QString Format = "New Request,";
    Format+= Account_Number + ',';
    Format+=Request;
    Client_Ptr->SendDataToServer(Format);
}

void User_Window::on_Back_clicked()
{
    this->hide();
    Main_Window_Ptr->Clear_PW();
    Main_Window_Ptr->show();
}


void User_Window::on_Get_User_Account_Number_clicked()
{
    User_Account_Number_Ptr->Init_Account_Number(Account_Number);
    this->hide();
    User_Account_Number_Ptr->show();
    New_User_Request("Get Account Number");
}


void User_Window::on_User_Balance_PB_clicked()
{
    QString Format = "Get_Account_Balance,";
    Format+= Account_Number;
    qDebug()<<"Format->"<<Format<<Qt::endl;
    Client_Ptr->SendDataToServer(Format);


    User_Account_Balance_Ptr->show();
    this->hide();
    QTimer::singleShot(1, this, [this]() {
    // Code to execute after the 1 millisecond delay
    New_User_Request("Get User Balance");
    });
}



void User_Window::on_Transaction_History_PB_clicked()
{
    QString Format = "View_Transaction_History,";
    Format+= Account_Number;
    Client_Ptr->SendDataToServer(Format);
    User_Transaction_History_Ptr->show();
    this->hide();

    QTimer::singleShot(1, this, [this]() {
        // Code to execute after the 1 millisecond delay
        New_User_Request("View Transaction History");
    });
}


void User_Window::on_pushButton_clicked()
{
    // Make Transaction Push Button
    this ->hide();
    Make_Transaction_Ptr->show();
}


void User_Window::on_Transfer_Funds_PB_clicked()
{
    this ->hide();
    Transfer_Funds_Ptr->show();
}

