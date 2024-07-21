#include "Server_Request_Handler.h"
#include "FileSystemManager.hpp"

Login_Request_Handler Request_Handler_Object;
Create_New_Account_Request_Handler Create_New_Account_Ptr;
Get_Account_Username Get_Account_Username_Object;
Get_Account_Balance Get_Account_Balance_Object;
Delete_User Delete_User_Object;
View_Transaction_History View_Transaction_History_Object;
View_Bank_Database View_Bank_Database_Object;
Update_User_Data Update_User_Data_Object;
Handler_User_Request Handler_User_Request_Object;
Funds_Handler Funds_Handler_Object;
Transfer_Funds_Handler Transfer_Funds_Handler_Object;
bool Status = true;
// Init Databases
Login_Database Login_Database_File("..\\..\\BankDatabase\\","Login_Database.json");
Accounts_Database Accounts_Database_File("..\\..\\BankDatabase\\","Accounts_Database.json");
User_Transation_History Transaction_History_File("..\\..\\BankDatabase\\","Transaction_History.json");
Client_Requests_Log Client_Requests_Log_File("..\\..\\BankDatabase\\","Clients_Requests_Log.json");

void Init_Handlers(void)
{
    Request_Handler_Object.NextHandler(&Create_New_Account_Ptr);
    Create_New_Account_Ptr.NextHandler(&Get_Account_Username_Object);
    Get_Account_Username_Object.NextHandler(&Delete_User_Object);
    Delete_User_Object.NextHandler(&Get_Account_Balance_Object);
    Get_Account_Balance_Object.NextHandler(&View_Transaction_History_Object);
    View_Transaction_History_Object.NextHandler(&View_Bank_Database_Object);
    View_Bank_Database_Object.NextHandler(&Update_User_Data_Object);
    Update_User_Data_Object.NextHandler(&Handler_User_Request_Object);
    Handler_User_Request_Object.NextHandler(&Funds_Handler_Object);
    Funds_Handler_Object.NextHandler(&Transfer_Funds_Handler_Object);
    Transfer_Funds_Handler_Object.NextHandler(nullptr);
}

QString Handling_Process(QString Request,QString Info)
{
    QString Result;
    if(true/*Request == "Login"*/)
    {
        Result = Request_Handler_Object.RequestHandler(Request,Info);
    }
    else if(Request == "Create")
    {
        Result = Create_New_Account_Ptr.RequestHandler("Create",Info);
    }
    else if(Request == "Get_Account_Username")
    {
        Result = Get_Account_Username_Object.RequestHandler("Get_Account_Username",Info);
    }
    else if(Request == "Get_Account_Balance")
    {
        Result = Get_Account_Balance_Object.RequestHandler("Get_Account_Balance",Info);
    }
    else if(Request == "Delete")
    {
        Result = Delete_User_Object.RequestHandler("Delete",Info);
    }
    else if(Request == "View_Transaction_History")
    {
        Result = View_Transaction_History_Object.RequestHandler("View_Transaction_History",Info);
    }
    else
    {
        Result = "Invalid Request";
    }
    return Result;
}













Server_Request_Handler::Server_Request_Handler() {}
QString Login_Request_Handler::RequestHandler(QString Request, QString Info)
{
    //1. Init Variables
    QString Handling_Result = "Null";
    if(Status == true)
    {
        Init_Handlers();
        Status = false;
    }

    //2. Check Required Request
    if(Request == "Login")
    {
        //3. if Request is a login request
        qDebug()<<"New Login Request"<<Qt::endl;

        //4. Check Validity of the account
        QString Handler;
        Handler = Login_Database_File.Get_Account_Info(Info);

        //5. If Account is valid
        if(Handler!="NA")
        {
        QStringList List = Handler.split(',');

        //Get Account ID
        ID = List[0].toInt();
        if(List[1]== "Admin")
        {
            is_Admin =true;
            Handling_Result ="Login,Admin";
        }
        else
        {
            is_Admin =false;
            Handling_Result = "Login,User," + List[0];
        }

        }
        else
        {
            Handling_Result = "Login,Invalid Account";
        }
        return Handling_Result;
    }
    else
    {
        //Move to the next Handler
       return Handler->RequestHandler( Request,  Info);
    }


}

void Login_Request_Handler::NextHandler(Server_Request_Handler* Next_Handler)
{
    Handler = Next_Handler;
}


QString Create_New_Account_Request_Handler::RequestHandler(QString Request, QString Info)
{
    QString Result;
    if(Request == "Create")
    {
        //1. Handle Login Database File
        qDebug()<<"Creating New Account Request"<<Qt::endl;
        QStringList List = Info.split(',');
        QString Login_Info;
        qint32 Account_Number;
        Login_Info = List[1] + ',' + List[2] + ',' + "User";

        //Handle Accounts Database file
        Account_Number = Login_Database_File.Add_Account(Login_Info);
        QString Account_Number_Str = QString::number(Account_Number);
        QString Accounts_Database_Info = Account_Number_Str +',' + List[3] + ',' + List[5]+',' + List[4] +',' + List[6];
        Accounts_Database_File.Add_Account(Accounts_Database_Info);



        //Handle Transaction Database file
        Transaction_History_File.Add_Account(Account_Number_Str);
        Client_Requests_Log_File.Add_Account(Account_Number_Str);
        Result = "Create,Success";
        return Result;
    }
    else
    {
        if(Handler !=nullptr)
        {
            return this->Handler->RequestHandler(Request,Info);
        }
    }
}

void Create_New_Account_Request_Handler::NextHandler(Server_Request_Handler* Next_Handler)
{
    this->Handler = Next_Handler;
}




//Get_Account_Username Handling
QString Get_Account_Username::RequestHandler(QString Request, QString Info)
{
    QString Result;
    if(Request == "Get_Account_Username")
    {
        Result = "Get_Account_Username,";
        qDebug()<<"Get Account Username Request"<<Qt::endl;
        QStringList List = Info.split(',');
        Result += Login_Database_File.Get_Account_Username(List[1]);
        //qDebug()<<"Result -> "<<Result<<Qt::endl;
    return Result;
    }
    else
    {
        if(Handler!=nullptr)
        {
        return  Handler->RequestHandler(Request,Info);
        }
    }

}

void Get_Account_Username::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}


QString Get_Account_Balance::RequestHandler(QString Request, QString Info)
{
    QString Result ;
    if(Request == "Get_Account_Balance")
    {
        QString Account_Info ;
        Result = "Get_Account_Balance,";
        qDebug()<<"Get Account Balance Request"<<Qt::endl;
        QStringList List = Info.split(',');
        Account_Info = Accounts_Database_File.Get_Account_Info(List[1]);
        List = Account_Info.split(',');
        //qDebug()<<"Account Info: "<<Account_Info<<Qt::endl;
        //Result += ;
        if(List[0]!="Invalid Account Number")
        {
        Result += List[4];
        }
        else
        {
            Result+=List[0];
        }
        //qDebug()<<"Result->"<<Result<<Qt::endl;
        return Result;
    }
    else
    {
        if(Handler != nullptr)
        {
            return Handler->RequestHandler(Request,Info);
        }
    }

}

void Get_Account_Balance::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler=Handler_Cpy;
}

QString Delete_User::RequestHandler(QString Request, QString Info)
{
    bool Status = false;
    QString Result = "Delete,";
    QStringList List = Info.split(',');
    if(Request == "Delete")
    {
        qDebug()<<"Delete Request"<<Qt::endl;
        Status = Login_Database_File.Delete_Account(List[1] + ",User");
        if(Status == true)
        {

            Accounts_Database_File.Delete_Account(List[1]);
            Transaction_History_File.Delete_Account(List[1]);
            Client_Requests_Log_File.Delete_Account(List[1]);
            Result+="Account has been deleted successfully";
        }
        else
        {
            Result += "Invalid Account";
        }
        return Result;
    }
    else
    {
        if(Handler!=nullptr)
        {
            return Handler->RequestHandler(Request,Info);
        }
    }

}

void Delete_User::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

QString View_Transaction_History::RequestHandler(QString Request, QString Info)
{
    QString Result = "View_Transaction_History|";
    QStringList List = Info.split(',');
    if(Request == "View_Transaction_History")
    {
        qDebug()<<"View Transaction History Request"<<Qt::endl;
        Result += Transaction_History_File.Get_Account_Info(List[1]);
        // qDebug()<<Result;
        return Result;
    }
    else
    {
        if(Handler!=nullptr)
        {
            return Handler->RequestHandler(Request,Info);
        }
    }

}

void View_Transaction_History::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler=Handler_Cpy;
}

QString View_Bank_Database::RequestHandler(QString Request, QString Info)
{
    QString Result = "View_Bank_Database|";
    if(Request=="View_Bank_Database")
    {
        qDebug()<<"View Bank Database Request"<<Qt::endl;
        return Result+= Accounts_Database_File.View_Database();
    }
    else
    {
        if(Handler!=nullptr)
        {
         return   Handler->RequestHandler(Request,Info);
        }
    }
    return Result;
}

void View_Bank_Database::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler=Handler_Cpy;
}

QString Update_User_Data::RequestHandler(QString Request, QString Info)
{
    QString Result;
    if(Request == "Update_User_Data")
    {
        qDebug()<<"Update User Data Request"<<Qt::endl;
        Result = "Update_User_Data,";
        bool Status = false;
        QStringList List = Info.split(',');
        QString Validation = Login_Database_File.Get_Account_Username(List[1]);
        if(Validation == "Invalid Account Number")
        {
            Result+="Invalid Account Number";
        }
        else{
            Result+= Validation + ',';
            Result+= Login_Database_File.Get_Account_PW(List[1]) + ',';
            Result+= Accounts_Database_File.Get_Account_Info(List[1]);
        }

    }
    else if(Request == "Update_User_Data_2")
    {

        QStringList List = Info.split(',');
        Login_Database_File.Update_Account(List[1].toInt(),List[2] +',' +List[3]);
        QString Account_Info = List[4] + ',' + List[5] + ',' + List[6] + ',' + List[7] ;
        Accounts_Database_File.Update_Account(List[1].toInt(),Account_Info);
        Result = "Update_User_Data_2, Account Had been Updated Successfully";

    }
    else{
        if(Handler!=nullptr)
        {
           return Handler->RequestHandler(Request,Info);
        }
    }
    return Result;
}

void Update_User_Data::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

QString Handler_User_Request::RequestHandler(QString Request, QString Info)
{
    if(Request == "New Request")
    {
        qDebug()<<"Update Request Log File Request"<<Qt::endl;
        bool Status = false;
        QStringList List = Info.split(',');
        Status = Client_Requests_Log_File.Update_Account(List[1].toInt(),List[2]);
        return "";

    }
    else{
        if(Handler!=nullptr)
        {
            return Handler->RequestHandler(Request,Info);
        }
    }
}

void Handler_User_Request::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

QString Funds_Handler::RequestHandler(QString Request, QString Info)
{
    if(Request == "Make_Transaction")
    {
        qDebug()<<"Make Transaction Request"<<Qt::endl;
        QStringList List = Info.split(',');
        double Funds_Amount = qAbs(List[3].toDouble());
        double Total_Balance_Amount ;
        QString Result = "Make_Transaction,";
        QStringList Info_List = (Accounts_Database_File.Get_Account_Info(List[2])).split(',');
        Total_Balance_Amount = Info_List[4].toDouble();
        if(List[1]=="Deduct_Funds")
        {
            if(Total_Balance_Amount>=Funds_Amount)
            {
                Total_Balance_Amount-=Funds_Amount;
                Result+= "Success Deduct Funds Process ";
                Transaction_History_File.Update_Account(List[2].toInt(),"Deduct Funds with amount of "+ QString::number( Funds_Amount) +'$');
            }
            else
            {
                Result+= "Invalid Process, Deducted Funds is higher than current Balance ";
            }
        }
        else if(List[1]=="Add_Funds")
        {
            Total_Balance_Amount+=Funds_Amount;
            Result+= "Success Add Funds Process ";
            Transaction_History_File.Update_Account(List[2].toInt(),"Add Funds with amount of "+ QString::number( Funds_Amount) +'$');
        }
        QString Updated_Info = Info_List[1]+ ',' + Info_List[2] + ','+ Info_List[3] + ',' +QString::number( Total_Balance_Amount) ;
        Accounts_Database_File.Update_Account(List[2].toInt(),Updated_Info);
        return Result;
    }
    else{
        if(Handler!=nullptr)
        {
            return Handler->RequestHandler(Request,Info);
        }
    }
}


void Funds_Handler::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler = Handler_Cpy;
}

QString Transfer_Funds_Handler::RequestHandler(QString Request, QString Info)
{
    QString Result;

    if(Request == "Transfer_Funds")
    {
        qDebug()<<"Transfer Funds Request"<<Qt::endl;
        Result = "Transfer_Funds,";
        QStringList List = Info.split(',');
        QStringList First_Account_Info = (Accounts_Database_File.Get_Account_Info(List[1])).split(',');
        QString Second_Account_Info = (Accounts_Database_File.Get_Account_Info(List[2]));
         double Funds = List[3].toDouble();
        long double First_Account_Balance = First_Account_Info[4].toDouble();
        //qDebug()<<"Second_Account_Info ->"<<Second_Account_Info<<Qt::endl;
        if(Second_Account_Info == "Invalid Account Number")
        {
            return Result += Second_Account_Info;
        }
        else
        {
            if(First_Account_Balance<Funds)
            {
                Result += "Invalid Process, Funds Value is Higher than current Balance of the account";
            }
            else
            {
                QStringList Second_Account_Info_List = Second_Account_Info.split(',');
                long double Second_Account_Balance = Second_Account_Info_List[4].toDouble();
                Second_Account_Balance+=Funds;
                First_Account_Balance-=Funds;

                QString First_Account_Updated_Info = First_Account_Info[1]+ ',' + First_Account_Info[2] + ','+ First_Account_Info[3] + ',' +QString::number( static_cast<double>(First_Account_Balance),'g',20) ;
                QString Second_Account_Updated_Info = Second_Account_Info_List[1]+ ',' + Second_Account_Info_List[2] + ','+ Second_Account_Info_List[3] + ',' +QString::number( static_cast<double>(Second_Account_Balance),'g',20) ;
                Accounts_Database_File.Update_Account(List[1].toInt(),First_Account_Updated_Info);
                Accounts_Database_File.Update_Account(List[2].toInt(),Second_Account_Updated_Info);

                Transaction_History_File.Update_Account(List[1].toInt(),"Transfer Funds of amount "+ QString::number( Funds) +'$' + "to the Account with number "+ List[2]);
                Transaction_History_File.Update_Account(List[2].toInt(),"Receive Funds of amount "+ QString::number( Funds) +'$' + "from the Account with number "+ List[1]);
                Result+= "Funds Transferred Successfully";
            }
        }
    }
    else{
        if(Handler!=nullptr)
        {
            //return Handler->RequestHandler(Request,Info);

        }
    }
    return Result;
}

void Transfer_Funds_Handler::NextHandler(Server_Request_Handler *Handler_Cpy)
{
    Handler =Handler_Cpy;
}
