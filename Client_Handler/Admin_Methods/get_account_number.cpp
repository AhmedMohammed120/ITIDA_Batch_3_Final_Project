#include "get_account_number.h"
#include "ui_get_account_number.h"
#include "Client.h"
#include "admin_window.h"

extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;
Get_Account_Response_Handler Get_Account_Handler;

Get_Account_Number::Get_Account_Number(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Get_Account_Number)
{
    ui->setupUi(this);
    Signal_Handler_Ptr = new Signals_Handler();
    Get_Account_Handler.Init_Signals_Handler(Signal_Handler_Ptr);
    connect(Signal_Handler_Ptr,&Signals_Handler::Get_Username_Handle_Signal,this,&Get_Account_Number::Write_Account_Number);
    ui->Get_Account_Number_LE->setReadOnly(true);
}

void Get_Account_Number::Clear()
{
    ui->Account_Number_LE->clear();
    ui->Get_Account_Number_LE->clear();
}

Get_Account_Number::~Get_Account_Number()
{
    delete ui;
}


// void Get_Account_Number::on_Back_To_Admin_Page_PB_clicked()
// {
//     this->hide();
//     Admin_Ptr->show();
// }


void Get_Account_Number::on_Search_clicked()
{
        QString Format = "Get_Account_Username,";
        Format+= ui->Account_Number_LE->text();
        qDebug()<<"Format->"<<Format<<Qt::endl;
        Client_Ptr->SendDataToServer(Format);
}


void Get_Account_Number::on_Back_clicked()
{
    this->hide();
    Admin_Ptr->show();
}

void Get_Account_Number::Write_Account_Number(QString Number)
{

    ui->Get_Account_Number_LE->clear();
    ui->Get_Account_Number_LE->setText(Number);
}

