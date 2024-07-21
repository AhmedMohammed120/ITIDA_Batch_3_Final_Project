#ifndef SERVER_REQUEST_HANDLER_H
#define SERVER_REQUEST_HANDLER_H

#include <QObject>
#include <QSharedPointer>
#include <QtCore/qmath.h>

class Server_Request_Handler
{
protected:
    bool is_Admin = false;
    qint32 ID;
    QString Account_Name;
    QString Account_Type;
    qint32 Age;
    double Balance;

public:
    Server_Request_Handler();
    virtual QString RequestHandler(QString Request,QString Info) = 0;
    virtual void NextHandler(Server_Request_Handler* Handler) = 0;
};



class Login_Request_Handler: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;


public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler);
};




class Create_New_Account_Request_Handler: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};



class Get_Account_Username: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class Get_Account_Balance: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};


class Delete_User: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};


class View_Transaction_History: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class View_Bank_Database: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class Update_User_Data: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class Handler_User_Request: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class Funds_Handler: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};

class Transfer_Funds_Handler: public Server_Request_Handler
{
private:
    Server_Request_Handler* Handler;

public:
    QString RequestHandler(QString Request,QString Info);
    void NextHandler(Server_Request_Handler* Handler_Cpy);
};





QString Handling_Process(QString Request,QString Info);


#endif // SERVER_REQUEST_HANDLER_H
