#include "MyServer.h"

MyServer::MyServer(QObject *parent)
    : QTcpServer{parent}, QIn(stdin), QOut{stdout}
{}

void MyServer::StartServer()
{
    QOut<<"Enter IP to Listen: ";
    QOut.flush();
    IP = QIn.readLine();

    QOut<<"Enter Port to Listen: ";
    QOut.flush();
    Port = QIn.readLine().toInt();

    QOut<<"Current IP is: "<<IP<<Qt::endl;
    QOut<<"Current Port is: "<<Port<<Qt::endl;

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

void MyServer::incomingConnection(qintptr handle)
{
    QOut<<"Client"<<handle<<"Has Connected to the server"<<Qt::endl;
    ServerHandler* ServerHandler_Ptr = new ServerHandler(handle);
    connect(ServerHandler_Ptr,&QThread::finished,ServerHandler_Ptr,&QThread::deleteLater);

    ServerHandler_Ptr->start();
}
