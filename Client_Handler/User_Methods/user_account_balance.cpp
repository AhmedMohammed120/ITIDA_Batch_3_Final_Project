#include "user_account_balance.h"
#include "ui_user_account_balance.h"
#include "mainwindow.h"

extern User_Window* User_Ptr;
extern Signals_Handler* Signals_Handler_Ptr_2;
User_Account_Balance::User_Account_Balance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User_Account_Balance)
{
    Ptr = Signals_Handler_Ptr_2;
    connect(Ptr,&Signals_Handler::Get_Balance_Handle_Signal,this,&User_Account_Balance::Write_To_LE);
    ui->setupUi(this);
}

User_Account_Balance::~User_Account_Balance()
{
    delete ui;
}

void User_Account_Balance::on_Back_clicked()
{
    this->hide();
    User_Ptr->show();
}

void User_Account_Balance::Write_To_LE(QString Data)
{
    ui->Account_Balance_LE->setText(Data);
    ui->Account_Balance_LE->setReadOnly(true);
}

