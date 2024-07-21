#include "Delete_User.h"
#include "ui_Delete_User.h"
#include "Client.h"
#include "admin_window.h"

extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;
Delete_User_Handler Delete_User_Handler_Object;
Delete_User::Delete_User(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Delete_User)
{
    ui->setupUi(this);
    Signal_Handler_Ptr = new Signals_Handler();
    Delete_User_Handler_Object.Init_Signals_Handler(Signal_Handler_Ptr);
    connect(Signal_Handler_Ptr,&Signals_Handler::Delete_User_Handle_Signal,this,&Delete_User::Write_To_LW);
    ui->Delete_User_LE->setReadOnly(true);
}

Delete_User::~Delete_User()
{
    delete ui;
}

void Delete_User::on_Back_clicked()
{
    this->hide();
    Admin_Ptr->show();
}


void Delete_User::on_Delete_clicked()
{
    QString Format = "Delete,";
    Format+= ui->Account_Number_LE->text();
    qDebug()<<"Format->"<<Format<<Qt::endl;
    Client_Ptr->SendDataToServer(Format);
}

void Delete_User::Write_To_LW(QString Data)
{
    ui->Delete_User_LE->clear();
    ui->Delete_User_LE->setText(Data);
}

