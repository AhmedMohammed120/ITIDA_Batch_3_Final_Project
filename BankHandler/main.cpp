#include <QCoreApplication>
#include <QJsonObject>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QRandomGenerator>
#include <QDebug>
#include <QDateTime>
#include "FileSystemManager.hpp"
#include "Server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Login_Database Login_Database_File("..\\..\\BankDatabase\\","Login_Database.json");
    qDebug()<<"Bank System - Server Application"<<Qt::endl;

    Server MyServer;
    MyServer.StartServer();

    return a.exec();
}
