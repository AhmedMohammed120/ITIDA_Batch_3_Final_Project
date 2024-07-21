#include "mainwindow.h"
#include "ui_mainwindow.h"
extern Login_Response_Handler Response_Handler_Object;
Admin_Window* Admin_Ptr;
User_Window* User_Ptr;
Client *Client_Ptr;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Client_Object.ConnectToDevice("192.168.8.7",12345);
    Signals_Handler_Ptr = new Signals_Handler();

    qDebug()<<"Init Signal Handler Pointer"<<Qt::endl;

    Response_Handler_Object.Init_Signals_Handler(Signals_Handler_Ptr);
    connect(Signals_Handler_Ptr,&Signals_Handler::Sign_In_Handler_Signal,this,&MainWindow::Sign_In_Handle_Slot);

    Admin = new Admin_Window();
    User = new User_Window();
    Admin_Ptr = Admin;
    User_Ptr = User;
    Client_Ptr = &Client_Object;
    ui->Login_LE->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Sign_In_Handle_Slot(QString Data)
{
    QStringList List = Data.split(',');
    qDebug()<<"Slot Handling"<<Qt::endl;
    if(Data == "Admin")
    {
        Admin->Clear();
        Admin->show();
        this->hide();

    }
    else if(List[0] == "User")
    {   
        User->show();
        this->hide();
        User_Ptr->Account_Number = List[1];
        User_Ptr->New_User_Request("New Login Request");
    }
    else
    {
        ui->Login_LE->clear();
        ui->Login_LE->setText(Data);
    }

}

void MainWindow::Clear_PW()
{
    ui->PW_LE->clear();
}

void MainWindow::Send_Data_To_Server(QString Data)
{
    Client_Object.SendDataToServer(Data);
}

void MainWindow::on_Sign_In_PB_clicked()
{
    QString Sign_In_Format;
       Sign_In_Format = "Login" ;
    Sign_In_Format+=',' + ui->Username_LE->text() + ',' + ui->PW_LE->text();

    qDebug()<<"Format ->"<<Sign_In_Format<<Qt::endl;
    Send_Data_To_Server(Sign_In_Format);
}

