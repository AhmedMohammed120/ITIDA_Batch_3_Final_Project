#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTextStream>
#include <QDebug>
#include <Server.h>
#include "server_handler.h"
class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void StartServer();

signals:

    // QTcpServer interface
protected:
    // This Method is a slot is running when any
    //client connected to the server
    void incomingConnection(qintptr handle);


private:
    QTextStream QIn;
    QTextStream QOut;
    qint32 Port;
    QString IP;
    ServerHandler* Server_Handler_Ptr;
};

#endif // SERVER_H
