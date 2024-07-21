#include "view_bank_database.h"
#include "ui_view_bank_database.h"
#include "Client.h"
#include "admin_window.h"

Bank_Database_Handler Bank_Database_Handler_Object;
extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;

View_Bank_Database::View_Bank_Database(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::View_Bank_Database)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Bank_Database_Handler_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::View_Bank_Database_Signal,this,&View_Bank_Database::Write_To_LW);
}

View_Bank_Database::~View_Bank_Database()
{
    delete ui;
}

void View_Bank_Database::on_Back_clicked()
{
    this->hide();
    Admin_Ptr->show();
}

void View_Bank_Database::Write_To_LW(QString Data)
{
    ui->Bank_Database_LW->clear();
    QStringList List = Data.split(';');
    for(unsigned int Counter = 0;Counter<List.size()-1;Counter++)
    {
        QStringList List2 = List[Counter].split(',');
        ui->Bank_Database_LW->addItem("Account Number: " + List2[0]);
        ui->Bank_Database_LW->addItem("User Name: " + List2[1]);
        ui->Bank_Database_LW->addItem("User Age: " + List2[2]);
        ui->Bank_Database_LW->addItem("Account Type: " + List2[3]);
        ui->Bank_Database_LW->addItem("Account Balance: " + List2[4]);
        ui->Bank_Database_LW->addItem("\n\n ");
    }
}

