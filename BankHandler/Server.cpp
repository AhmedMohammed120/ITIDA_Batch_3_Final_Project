#include "Server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent}, QIn(stdin), QOut{stdout}
{}

void Server::StartServer()
{
    Port = 12345;
    QOut<<"IP to listen: 192.168.8.7 "<<Qt::endl;
    QOut<<"Port to Listen: "<<Port<<Qt::endl;

    this->listen(QHostAddress::Any,Port);
    if(this->isListening())
    {
        QOut<<"Server is Currently Listening"<<Qt::endl;
    }
    else
    {
        QOut<<"Unexpected Issue"<<Qt::endl;
    }


}

// This Method is a slot is running when any
//client connected to the server
void Server::incomingConnection(qintptr handle)
{
    QOut<<"Client"<<handle<<"Has Connected to the server"<<Qt::endl;
    ServerHandler* ServerHandler_Ptr = new ServerHandler(handle);
    connect(ServerHandler_Ptr,&QThread::finished,ServerHandler_Ptr,&QThread::deleteLater);
    // Start thread that connected to a specific client
    ServerHandler_Ptr->start();
}
