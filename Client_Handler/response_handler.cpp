#include "response_handler.h"
//Signals_Handler* Signals_Handler_Ptr;
extern Login_Response_Handler Response_Handler_Object;
extern Get_Account_Response_Handler Get_Account_Handler;
extern Get_Account_Balance_Handler Account_Balance_Handler;
extern Delete_User_Handler Delete_User_Handler_Object;
extern Transaction_History_Handler Transaction_History_Handler_Object;
extern Bank_Database_Handler Bank_Database_Handler_Object;
extern Update_User_Handler Update_User_Object;
extern Transaction_Handler Transaction_Handler_Object;
extern Transfer_Funds_Handler Transfer_Funds_Handler_Object;

bool Status = true;


void Init(void)
{
    Response_Handler_Object.Next_Handler(&Get_Account_Handler);
    Get_Account_Handler.Next_Handler(&Account_Balance_Handler);
    Account_Balance_Handler.Next_Handler(&Delete_User_Handler_Object);
    Delete_User_Handler_Object.Next_Handler(&Transaction_History_Handler_Object);
    Transaction_History_Handler_Object.Next_Handler(&Bank_Database_Handler_Object);
    Bank_Database_Handler_Object.Next_Handler(&Update_User_Object);
    Update_User_Object.Next_Handler(&Transaction_Handler_Object);
    Transaction_Handler_Object.Next_Handler(&Transfer_Funds_Handler_Object);
    Transfer_Funds_Handler_Object.Next_Handler(nullptr);
}
Response_Handler::Response_Handler(QObject *parent)
    : QObject{parent}
{


}

void Login_Response_Handler::Handle_Response(QString Response)
{
    if(Status == true)
    {
        Init();
    }
    QStringList List = Response.split(',');
    if(List[0]=="Login")
    {
        if(List[1]== "Admin")
        {
        Signals_Handler_Ptr->Emit_Sign_In_Signal(List[1]);
        qDebug()<<"Emit Signal for Data"<<Response<<Qt::endl;
        }
        else if(List[1]=="User")
        {
            Signals_Handler_Ptr->Emit_Sign_In_Signal(List[1] + ',' + List[2]);
            qDebug()<<"Emit Signal for Data"<<Response<<Qt::endl;
        }
        else
        {
            Signals_Handler_Ptr->Emit_Sign_In_Signal(List[1]);
            qDebug()<<"Emit Signal for Data"<<Response<<Qt::endl;
        }
    }
    else
    {
        Handler->Handle_Response(Response);
    }
}

void Login_Response_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

void Login_Response_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}


void Get_Account_Response_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split(',');
    if(List[0]== "Get_Account_Username")
    {
    Signals_Handler_Ptr->Emit_Get_Username_Handle_Signal(List[1]);
    qDebug()<<"Get Account Number Handling->"<<List[1]<<Qt::endl;
    qDebug()<<"Pointer ->"<<Signals_Handler_Ptr<<Qt::endl;
    }
    else
    {
        if(Handler!=nullptr)
        {
        Handler->Handle_Response(Response);
        }
    }
}

void Get_Account_Response_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

void Get_Account_Response_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    this->Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Get_Account_Balance_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split(',');
    if(List[0]== "Get_Account_Balance")
    {
        Signals_Handler_Ptr->Emit_Get_Account_Balance_Signal(List[1]);
    }
    else
    {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }

}

void Get_Account_Balance_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

void Get_Account_Balance_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    this->Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}




void Delete_User_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split(',');
    if(List[0]== "Delete")
    {
        Signals_Handler_Ptr->Emit_Delete_User_Signal(List[1]);
    }
    else
    {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }

}

void Delete_User_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

void Delete_User_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    this->Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Transaction_History_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split('|');
    if(List[0]=="View_Transaction_History")
    {
        qDebug()<<"Emit Transaction History Signal"<<Response;
        qDebug()<<"List->"<<List[1];
        Signals_Handler_Ptr->Emit_Transaction_History_Signal(List[1]);
    }
    else
    {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }
}

void Transaction_History_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    this->Handler = Handler_Cpy;
}

void Transaction_History_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Bank_Database_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split('|');
    if(List[0] == "View_Bank_Database")
    {
        Signals_Handler_Ptr->Emit_View_Bank_Database_Signal(List[1]);
    }
    else {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }
}

void Bank_Database_Handler::Next_Handler(Response_Handler *Handler_Cpy)
{
    this->Handler = Handler_Cpy;
}

void Bank_Database_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Update_User_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split(',');
    if(List[0] == "Update_User_Data")
    {
        Signals_Handler_Ptr->Emit_Update_User_Data_Signal(Response);
    }
    else if(List[0]== "Update_User_Data_2")
    {
         Signals_Handler_Ptr->Emit_Update_User_Data_2_Signal(Response);
    }
    else
    {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }
}



void Update_User_Handler::Next_Handler(Response_Handler *Handler)
{
    this->Handler = Handler;
}

void Update_User_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Transaction_Handler::Handle_Response(QString Response)
{
    QStringList List = Response.split(',');
    if(List[0] == "Make_Transaction")
    {
        Signals_Handler_Ptr->Emit_Transaction_Handler_Signal(Response);
    }
    else
    {
        if(Handler!=nullptr)
        {
            Handler->Handle_Response(Response);
        }
    }
}

void Transaction_Handler::Next_Handler(Response_Handler *Handler)
{
    this->Handler = Handler;
}

void Transaction_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}

void Transfer_Funds_Handler::Handle_Response(QString Response)
{
        QStringList List = Response.split(',');
        if(List[0] == "Transfer_Funds")
        {
            Signals_Handler_Ptr->Emit_Transfer_Funds_Handler_Signal(Response);
        }
        else
        {
            if(Handler!=nullptr)
            {
                Handler->Handle_Response(Response);
            }
        }
}

void Transfer_Funds_Handler::Next_Handler(Response_Handler *Handler)
{
    this->Handler = Handler;
}

void Transfer_Funds_Handler::Init_Signals_Handler(Signals_Handler *Signals_Handler_Ptr_Cpy)
{
    Signals_Handler_Ptr = Signals_Handler_Ptr_Cpy;
}
