#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "response_handler.h"

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    void ConnectToDevice(QString IP_Cpy,qint32 Port_Cpy);
    void Disconnect();
    void SendDataToServer(QString Data);

private slots:
    void Connection();
    void Disconnection();
    void ErrorOccurred(QAbstractSocket::SocketError socketError);
    void StateChanged(QAbstractSocket::SocketState socketState);
    void ReadyRead();

signals:
    void Connection_Signal();
    void Disconnection_Signal();
    void ErrorOccurred_Signal(QAbstractSocket::SocketError socketError);
    void StateChanged_Signal(QAbstractSocket::SocketState socketState);
    void ReadyRead_Signal(QString Data);

private:
    QString IP;
    qint32 Port;
    QTcpSocket Socket;

};

#endif // MYCLIENT_H
