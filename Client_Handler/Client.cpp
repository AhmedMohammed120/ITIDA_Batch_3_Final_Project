#include "Client.h"
bool ReadyRead_Status = false;
QString Received_Data = "";
//Sign_In_Response_Handler Response_Handler_Object;
Login_Response_Handler Response_Handler_Object;
Client::Client(QObject *parent)
    : QObject{parent}
{
    connect(&Socket,&QTcpSocket::connected,this,&Client::Connection);
    connect(&Socket,&QTcpSocket::disconnected,this,&Client::Disconnection);
    connect(&Socket,&QTcpSocket::errorOccurred,this,&Client::ErrorOccurred);
    connect(&Socket,&QTcpSocket::stateChanged,this,&Client::StateChanged);
    connect(&Socket,&QTcpSocket::readyRead,this,&Client::ReadyRead);
}

void Client::ConnectToDevice(QString IP_Cpy,qint32 Port_Cpy)
{
    if(Socket.isOpen())
    {
        if(IP_Cpy==IP && Port_Cpy==Port)
        {

        }
        else
        {
            Socket.close();
            Port = Port_Cpy;
            IP = IP_Cpy;
            Socket.connectToHost(IP,Port);
        }
    }
    else
    {
        Port = Port_Cpy;
        IP = IP_Cpy ;
        Socket.connectToHost(IP,Port);
    }
}

void Client::Disconnect()
{
    if(Socket.isOpen())
    {
        Socket.close();
    }
    else
    {
        /*To be done*/
    }
}

void Client::SendDataToServer(QString Data)
{
    if(Socket.isOpen())
    {

        Socket.write(Data.toUtf8()); // Change it to byte array
    }
}

void Client::Connection()
{
    emit Connection_Signal();
}

void Client::Disconnection()
{
    emit Disconnection_Signal();
}

void Client::ErrorOccurred(QAbstractSocket::SocketError socketError)
{
    emit ErrorOccurred_Signal(socketError);
}

void Client::StateChanged(QAbstractSocket::SocketState socketState)
{
    if(socketState == QAbstractSocket::UnconnectedState)
    {
        Socket.close();
    }
    emit StateChanged_Signal(socketState);

}

void Client::ReadyRead()
{
    QByteArray Data_ByteArray = Socket.readAll();
    QString Data = QString(Data_ByteArray);
    Received_Data = Data;
    Response_Handler_Object.Handle_Response(Data);
}
