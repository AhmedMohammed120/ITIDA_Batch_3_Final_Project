#include "view_transaction_history.h"
#include "ui_view_transaction_history.h"
#include "Client.h"
#include "admin_window.h"


Transaction_History_Handler Transaction_History_Handler_Object;
extern Client *Client_Ptr;
extern Admin_Window* Admin_Ptr;
Signals_Handler *Transaction_History_Ptr;

View_Transaction_History::View_Transaction_History(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::View_Transaction_History)
{
    ui->setupUi(this);
    Signals_Handler_Ptr = new Signals_Handler();
    Transaction_History_Ptr = Signals_Handler_Ptr;
    Transaction_History_Handler_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Transaction_History_Signal,this,&View_Transaction_History::Write_To_LW);
}

View_Transaction_History::~View_Transaction_History()
{
    delete ui;
}

void View_Transaction_History::Clear()
{
    ui->Transaction_History_LW->clear();
    ui->Account_Number_LE->clear();
}

void View_Transaction_History::on_Back_clicked()
{
    this->hide();
    Admin_Ptr->show();
}


void View_Transaction_History::on_Search_clicked()
{
    QString Format = "View_Transaction_History,";
    Format+= ui->Account_Number_LE->text();
    qDebug()<<"Format->"<<Format<<Qt::endl;
    Client_Ptr->SendDataToServer(Format);
}

void View_Transaction_History::Write_To_LW(QString Data)
{
    QStringList List = Data.split(';');
    ui->Transaction_History_LW->clear();
    if(List[0]!="Invalid Account" && List[0]!= "There is no Transactions for this account yet")
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

