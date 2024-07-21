#include "User_Transaction_History.h"
#include "ui_User_Transaction_History.h"
#include "mainwindow.h"
extern User_Window* User_Ptr;
extern Signals_Handler *Transaction_History_Ptr;
extern Client *Client_Ptr;
User_Transaction_History::User_Transaction_History(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User_Transaction_History)
{
    ui->setupUi(this);
    connect(Transaction_History_Ptr,&Signals_Handler::Transaction_History_Signal,this,&User_Transaction_History::Write_To_LW);

}

User_Transaction_History::~User_Transaction_History()
{
    delete ui;
}

void User_Transaction_History::on_Back_PB_clicked()
{
    this->hide();
    User_Ptr->show();
}

void User_Transaction_History::Write_To_LW(QString Data)
{
    ui->Transaction_History_LW->clear();
    QStringList List = Data.split(';');
    if(List[0]!="Invalid Account" && (List[0]!= "There is no Transactions for this account yet"))
    {
        for(unsigned int Counter = 0;Counter<List.size()-1;Counter++)
        {
            ui->Transaction_History_LW->addItem(QString::number(Counter+1) +". " +  List[Counter] + "\n");
        }
    }
    else
    {
        ui->Transaction_History_LW->addItem(Data);
    }

}

