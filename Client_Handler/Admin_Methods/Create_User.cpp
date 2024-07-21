#include "Create_User.h"
#include "ui_Create_User.h"
#include "../mainwindow.h"
#include "../admin_window.h"
#include "Client.h"
extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;

Create_User::Create_User(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Create_User)
{
    ui->setupUi(this);
}

Create_User::~Create_User()
{
    delete ui;
}

void Create_User::on_pushButton_clicked()
{
    this->hide();
    Admin_Ptr->show();
}


void Create_User::on_Create_New_Account_PB_clicked()
{
    QString Format;
    QString Email = ui->Email_LE->text();
    QString PW = ui->PW_LE->text();
    QString Name = ui->Name_LE->text();
    QString Age = ui->Age_LE->text();
    QString Balance = ui->Balance_LE->text();
    QString Account_Type = ui->Account_Type_LE->text();
    Format = "Create," + Email +',' + PW + ',' + Name + ',' + Account_Type + ',';
    Format+= Age + ',' + Balance;
    Client_Ptr->SendDataToServer(Format);
    qDebug()<<"Create Account Format->"<<Format<<Qt::endl;
}

