#include "get_user_balance.h"
#include "ui_get_user_balance.h"
#include "Client.h"
#include "admin_window.h"

Get_Account_Balance_Handler Account_Balance_Handler;
extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;
Signals_Handler* Signals_Handler_Ptr_2;

Get_User_Balance::Get_User_Balance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Get_User_Balance)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Signals_Handler_Ptr_2 = Signals_Handler_Ptr;
    Account_Balance_Handler.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Get_Balance_Handle_Signal,this,&Get_User_Balance::Write_To_LW);

}

Get_User_Balance::~Get_User_Balance()
{
    delete ui;
}

void Get_User_Balance::Clear()
{
    ui->Account_Number_LE_2->clear();
    ui->Get_Account_Number_LE->clear();
}

void Get_User_Balance::on_Back_2_clicked()
{
    this->hide();
    Admin_Ptr->show();
}


void Get_User_Balance::on_Search_2_clicked()
{
    QString Format = "Get_Account_Balance,";
    Format+= ui->Account_Number_LE_2->text();
    qDebug()<<"Format->"<<Format<<Qt::endl;
    Client_Ptr->SendDataToServer(Format);
}

void Get_User_Balance::Write_To_LW(QString Balance)
{
    ui->Get_Account_Number_LE->clear();

    ui->Get_Account_Number_LE->setText(Balance);

}

