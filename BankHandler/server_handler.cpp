#include "server_handler.h"
extern Login_Request_Handler Request_Handler_Object;
ServerHandler::ServerHandler(int ID_Cpy,QObject *parent)
    : QThread{parent}
{
    ID = ID_Cpy;
}

void ServerHandler::ReadData()
{
    QByteArray Data;
    Data = Server_Socket->readAll();
    QString Data_String = Data;
    QStringList List = Data_String.split(',');
    qDebug()<<"Recieved Data ->"<<Data.toStdString();

    QString Handling_Result = Request_Handler_Object.RequestHandler(List[0],Data_String);
    //QString Handling_Result = Handling_Process(List[0],Data_String);
    Send_Data_To_Client(Handling_Result);

}

void ServerHandler::Disconnect()
{
    if(Server_Socket->isOpen())
    {
        Server_Socket->disconnect();
        qDebug()<<"Client with ID "<<ID<<"Has been disconnected from the server"<<Qt::endl;
    }
    else
    {
        qDebug()<<"Socket is already disconnected to the current client"<<Qt::endl;

    }

}

void ServerHandler::run()
{
    // Init Socket
    Server_Socket = new QTcpSocket;
    Server_Socket->setSocketDescriptor(ID);

    // Connect Signals and slots
    connect(Server_Socket,&QTcpSocket::readyRead,this,&ReadData,Qt::DirectConnection);
    connect(Server_Socket,&QTcpSocket::disconnected,this,&Disconnect,Qt::DirectConnection);
    exec();
}

void ServerHandler::Send_Data_To_Client(QString Data)
{

    if(Server_Socket->isOpen())
    {
        Server_Socket->write(Data.toUtf8());
        qDebug()<<"Sending Data to client->"<<Data<<Qt::endl;
    }
    else
    {
        qDebug()<<"Unexpected Issue"<<Qt::endl;
    }
}
