#include "User_Account_Number.h"
#include "ui_User_Account_Number.h"
#include "mainwindow.h"
extern User_Window* User_Ptr;
User_Account_Number::User_Account_Number(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User_Account_Number)
{
    ui->setupUi(this);
}

User_Account_Number::~User_Account_Number()
{
    delete ui;
}

void User_Account_Number::Init_Account_Number(QString Data)
{
    ui->Account_Number_LE->setText(Data);
    ui->Account_Number_LE->setReadOnly(true);
}

void User_Account_Number::on_Back_PB_clicked()
{
    this->hide();
    User_Ptr->show();
}

