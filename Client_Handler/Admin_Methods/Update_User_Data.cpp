#include "Update_User_Data.h"
#include "ui_Update_User_Data.h"
#include "Client.h"
#include "admin_window.h"


//Get_Account_Balance_Handler Account_Balance_Handler;
extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;
Update_User_Handler Update_User_Object;

Update_User_Data::Update_User_Data(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Update_User_Data)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Update_User_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Update_User_Data_Signal,this,&Update_User_Data::Write_To_LW);
    connect(Signals_Handler_Ptr,&Signals_Handler::Update_User_Data_2_Signal,this,&Update_User_Data::Write_To_LW_2);
}

Update_User_Data::~Update_User_Data()
{
    delete ui;
}

void Update_User_Data::on_Back_clicked()
{
    this->hide();
    Admin_Ptr->show();
}


void Update_User_Data::on_Search_clicked()
{
    QString Format = "Update_User_Data,";
    Format+= ui->Account_Number_LE->text();
    Client_Ptr->SendDataToServer(Format);
}

void Update_User_Data::Write_To_LW(QString Data)
{
    ui->Test_LW->clear();
    QStringList List = Data.split(',');
    if(List[1]!="Invalid Account Number")
    {
    ui->Email_LE->setText(List[1]);
    ui->PW_LE->setText(List[2]);
    ui->Name_LE->setText(List[4]);
    ui->Age_LE->setText(List[5]);
    ui->Account_Type_LE->setText(List[6]);
    ui->Balance_LE->setText(List[7]);
    ui->Test_LW->addItem("Valid Account");
    }
    else
    {
        ui->Test_LW->addItem(List[1]);
    }
}


void Update_User_Data::on_Update_User_Data_PB_clicked()
{
    QString Format = "Update_User_Data_2,";
    Format+= ui->Account_Number_LE->text() + ',';
    Format+= ui->Email_LE->text() + ',';
    Format+= ui->PW_LE->text()+ ',';
    Format+= ui->Name_LE->text()+ ',';
    Format+= ui->Age_LE->text()+ ',';
    Format+= ui->Account_Type_LE->text() + ',';
    Format+= ui->Balance_LE->text() ;
    Client_Ptr->SendDataToServer(Format);
}

void Update_User_Data::Write_To_LW_2(QString Data)
{
    ui->Test_LW->clear();
    QStringList List = Data.split(',');
    ui->Test_LW->addItem(List[1]);
}

