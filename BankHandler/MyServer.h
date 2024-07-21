#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTextStream>
#include <QDebug>
#include <ServerHandler.h>

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);
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
};

#endif // MYSERVER_H
