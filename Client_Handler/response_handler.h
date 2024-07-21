#ifndef RESPONSE_HANDLER_H
#define RESPONSE_HANDLER_H

#include <QObject>
#include "Signals_Handler.h"
#include <QDebug>

class Response_Handler : public QObject
{
    Q_OBJECT
protected:
    Response_Handler* Handler;
    Signals_Handler* Signals_Handler_Ptr;

public:
    explicit Response_Handler(QObject *parent = nullptr);
    virtual void Handle_Response(QString Response)=0;
    virtual void Next_Handler(Response_Handler* Handler)=0;
    virtual void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy)=0;
};

class Login_Response_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};


class Get_Account_Response_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Get_Account_Balance_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Delete_User_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Transaction_History_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Bank_Database_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Update_User_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Transaction_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};

class Transfer_Funds_Handler: public Response_Handler
{

public:
    void Handle_Response(QString Response) override;
    void Next_Handler(Response_Handler *Handler) override;
    void Init_Signals_Handler(Signals_Handler* Signals_Handler_Ptr_Cpy);
};


#endif // RESPONSE_HANDLER_H
