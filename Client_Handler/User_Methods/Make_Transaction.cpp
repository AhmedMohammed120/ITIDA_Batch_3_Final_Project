#include "Make_Transaction.h"
#include "ui_Make_Transaction.h"
#include "Client.h"
#include <QTimer>
#include "mainwindow.h"

extern User_Window* User_Ptr;
extern Client *Client_Ptr;
Transaction_Handler Transaction_Handler_Object;

Make_Transaction::Make_Transaction(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Make_Transaction)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Transaction_Handler_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Transaction_Handler_Signal,this,&Make_Transaction::Write_To_LE);
}

Make_Transaction::~Make_Transaction()
{
    delete ui;
}

void Make_Transaction::on_Deduct_Funds_PB_clicked()
{
    QString Format = "Make_Transaction,Deduct_Funds,";
    Format+= User_Ptr->Account_Number + ',';
    Format+= ui->Funds_LE->text();
    Client_Ptr->SendDataToServer(Format);

    QTimer::singleShot(1, this, [this]() {
        // Code to execute after the 1 millisecond delay
        User_Ptr->New_User_Request("Deduct Funds of Amount "+ ui->Funds_LE->text());
    });
}


void Make_Transaction::on_Back_clicked()
{
    User_Ptr->show();
    this->hide();
}


void Make_Transaction::on_Add_Funds_PB_clicked()
{
    QString Format = "Make_Transaction,Add_Funds,";
    Format+= User_Ptr->Account_Number + ',';
    int Sign = ui->Funds_LE->text().toInt();
    if(Sign >=0)
    {
    Format+= ui->Funds_LE->text();
    Client_Ptr->SendDataToServer(Format);

    QTimer::singleShot(1, this, [this]() {
        // Code to execute after the 1 millisecond delay
        User_Ptr->New_User_Request("Add Funds of Amount "+ ui->Funds_LE->text());
    });
    }
    else
    {
        ui->Process_LE->setText("Invalid Process, Funds To Add Can't be Negative Value");
    }
}

void Make_Transaction::Write_To_LE(QString Data)
{
    QStringList InfoList = Data.split(',');
    if(InfoList[1]=="Invalid Process")
    {
        ui->Process_LE->setText(InfoList[1] + ',' + InfoList[2]);
    }
    else
    {
         ui->Process_LE->setText(InfoList[1]);
    }
}

