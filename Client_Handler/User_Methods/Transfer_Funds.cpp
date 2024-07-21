#include "Transfer_Funds.h"
#include "ui_Transfer_Funds.h"
#include "Client.h"
#include <QTimer>
#include "mainwindow.h"

extern User_Window* User_Ptr;
extern Client *Client_Ptr;
Transfer_Funds_Handler Transfer_Funds_Handler_Object;

Transfer_Funds::Transfer_Funds(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Transfer_Funds)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Transfer_Funds_Handler_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Transfer_Funds_Handler_Signall,this,&Transfer_Funds::Write_To_LE);
    ui->Process_LE->setReadOnly(true);
}

Transfer_Funds::~Transfer_Funds()
{
    delete ui;
}

void Transfer_Funds::on_pushButton_clicked()
{
    //Transfer Funds Push button
    QString Format = "Transfer_Funds,";
    Format+= User_Ptr->Account_Number + ',';
    Format+= ui->Account_Number_LE->text()+ ',';
    int Sign = ui->Funds_Amount_LE->text().toInt();
    if(Sign >=0)
    {
        Format+= ui->Funds_Amount_LE->text();
        Client_Ptr->SendDataToServer(Format);

        QTimer::singleShot(1, this, [this]() {
            // Code to execute after the 1 millisecond delay
            User_Ptr->New_User_Request("Transfer Funds to Account Number "+ui->Account_Number_LE->text()+ "With Amount of " + ui->Funds_Amount_LE->text() + '$');
        });
    }
    else
    {
        ui->Process_LE->setText("Invalid Process, Funds To Transfer Can't be Negative Value");
    }
}


void Transfer_Funds::on_Back_clicked()
{
    this->hide();
    User_Ptr->show();
}

void Transfer_Funds::Write_To_LE(QString Data)
{
    ui->Process_LE->setText(Data);

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

