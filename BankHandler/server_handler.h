#ifndef SERVERHANDLER_H
#define SERVERHANDLER_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include "Server_Request_Handler.h"
#include "FileSystemManager.hpp"



class ServerHandler : public QThread
{
    Q_OBJECT

public:
    explicit ServerHandler(int ID_Cpy,QObject *parent = nullptr);
    void Send_Data_To_Client(QString Data);

signals:
    void Handle_Data_Request(QString Data);

public slots:
    void ReadData();
    void Disconnect();
private:
    QTcpSocket* Server_Socket;
    qint32 ID;
    Server_Request_Handler* Ptr;
    // QThread interface
protected:
    void run();
};

#endif // SERVERHANDLER_H
