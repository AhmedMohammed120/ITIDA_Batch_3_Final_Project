
#include "FileSystemManager.hpp"
Login_Database::Login_Database(QString Path_Cpy, QString FileName_Cpy)
    :LoginFile{Path_Cpy + FileName_Cpy }
{


}

qint32 Login_Database::Add_Account(QString List)
{
    //List format(Email,PW,Type)
    QStringList Account_Data = List.split(',');

    QString Email = Account_Data[0];
    QString PW = Account_Data[1];
    QString Type = Account_Data[2];

    QJsonObject NewObject;
    qint32 ID = QRandomGenerator::global()->bounded(1000000);
    NewObject["ID"] = ID;
    NewObject["Email"] = Email;
    NewObject["Password"] = PW;

    QJsonArray Accounts_Data = Load_Database();

    if(Type == "User")
    {
        QJsonObject Temp = Accounts_Data[0].toObject();
        QJsonArray Accounts = Temp["Accounts"].toArray();
        Accounts.append(NewObject);
        Temp["Accounts"] = Accounts;
        Accounts_Data[0] = Temp;

    }
    else if(Type == "Admin")
    {
        QJsonObject Temp = Accounts_Data[1].toObject();
        QJsonArray Accounts = Temp["Accounts"].toArray();
        Accounts.append(NewObject);
        Temp["Accounts"] = Accounts;
        Accounts_Data[1] = Temp;
    }

    Save_Database(Accounts_Data);
    return ID;
}

bool Login_Database::Delete_Account(QString String)
{
    QStringList List = String.split(',');
    QString Account_Type = List[1];
    QString ID_String = List[0];
    qint32 ID = ID_String.toInt();
    QJsonArray Accounts_Data = Load_Database();
    bool Status = false;

    if(Account_Type == "User")
    {
        QJsonObject Temp_Obj = Accounts_Data[0].toObject();
        QJsonArray Current_Accounts = Temp_Obj["Accounts"].toArray();
        for(unsigned int Counter = 0;Counter<Current_Accounts.size();Counter++)
        {
            QJsonObject Current_Object = Current_Accounts[Counter].toObject();
            if(Current_Object["ID"]== ID)
            {
                Current_Accounts.removeAt(Counter);
                Temp_Obj["Accounts"] = Current_Accounts;
                Accounts_Data[0] = Temp_Obj;
                Status = true;
                break;
            }
        }

    }
    else if(Account_Type== "Admin")
    {
        QJsonObject Temp_Obj = Accounts_Data[1].toObject();
        QJsonArray Current_Accounts = Temp_Obj["Accounts"].toArray();

        for(unsigned int Counter = 0;Counter<Current_Accounts.size();Counter++)
        {
            QJsonObject Current_Object = Current_Accounts[Counter].toObject();
            if(Current_Object["ID"].toInt()== ID)
            {
                Current_Accounts.removeAt(Counter);
                Temp_Obj["Accounts"] = Current_Accounts;
                Accounts_Data[1] = Temp_Obj;
                Status = true;
                break;
            }
        }
    }
    Save_Database(Accounts_Data);
    if(Status == false)
    {
        //qDebug()<<"This Accounts is not exist"<<Qt::endl;
    }
    return Status;
}

bool Login_Database::Update_Account(qint32 ID,QString New_Data)
{
    //1. Init Variables
    QJsonArray Array = Load_Database();
    QJsonObject Result;
    bool Status = false;
    QJsonObject Temp;
    QStringList List = New_Data.split(',');

    //2. Loop between User and Admin Accounts to get account ID
    for(unsigned int Counter = 0;Counter<Array.size();Counter++)
    {
        Temp = Array[Counter].toObject();
        QJsonArray Accounts = Temp["Accounts"].toArray();

        //3. Loop for each account inside user accounts or admin accounts
        for(unsigned int Counter2 = 0;Counter2<Accounts.size();Counter2++)
        {
            QJsonObject TempObject = Accounts[Counter2].toObject();
            if(TempObject["ID"].toInt()==ID)
            {
                //4. Update account with the new data
                TempObject["Email"] = List[0];
                TempObject["Password"] = List[1];
                Accounts[Counter2] = TempObject;
                Temp["Accounts"] = Accounts;
                Array[Counter] = Temp;
                Status = true;
                break;
            }
        }

    }
    if(Status == false)
    {
        //TBD
    }
    else
    {
        //5. Save database
        Save_Database(Array);
    }


    return 0;
}

QString Login_Database::Get_Account_Info(QString String)
{
    //1. Init Variables
    QStringList List = String.split(',');
    QString Username = List[1];
    QString PW = List[2];
    QString Result;
    bool Status = false;

    //2. Load database
    QJsonArray Array = Load_Database();

    //3. Loop between User and Admin Accounts to get account ID
    for(unsigned int Counter = 0;Counter<Array.size();Counter++)
    {
        //4. Create Temp Object contains admin object or user object
        QJsonObject Temp = Array[Counter].toObject();

        /*5. Create Accounts which is an array of json objects each object contains
         ID,Email & Password*/
        QJsonArray Accounts = Temp["Accounts"].toArray();

        //6. Loop for each account
        for(unsigned int Counter2 = 0;Counter2<Accounts.size();Counter2++)
        {
            QJsonObject TempObject = Accounts[Counter2].toObject();

            //7. Check for Email and Password to correct log in process
            if(TempObject["Email"] == Username && TempObject["Password"]== PW)
            {
                //8. Success login
                int ID = TempObject["ID"].toInt();

                //10 Return a string contains ID and Email of the account separated by comma
                Result = QString::number(ID) + ',' + Temp["Type"].toString();
                Status = true;
                break;
            }
        }

    }
    if(Status == false)
    {
        //qDebug()<<"Can't Find Account ID"<<Qt::endl;
        Result = "NA";
    }
    return Result;
}

QJsonArray Login_Database::Load_Database()
{
    //1. Open file as read only file
    LoginFile.open(QIODevice::ReadOnly);

    //2. Read data from the file
    QByteArray Data = LoginFile.readAll();
    QJsonDocument Data_Document = QJsonDocument::fromJson(Data);

    //3. Convert data to a json object
    QJsonArray Array = Data_Document.array();

    //4. Close the file and return array of json objects
    LoginFile.close();
    return Array;
}

bool Login_Database::Save_Database(QJsonArray Updated_Data)
{
    //1. Open file as write only file
    LoginFile.open(QIODevice::WriteOnly);

    //2. Convert the array of json objects to json document
    QJsonDocument Document(Updated_Data);

    //3. Convert the json document to byte array data to can save it in the file
    QByteArray Accounts_Data = Document.toJson();

    //4. Clear the file
    LoginFile.resize(0);

    //5. Write the updated data
    LoginFile.write(Accounts_Data);

    //6. Close the file
    LoginFile.close();
    return 0;
}

QString Login_Database::View_Database() //To be done
{
    QJsonArray JsonDatabase = Load_Database();
    QJsonObject Users_Data = JsonDatabase[0].toObject();
    QJsonArray Users_Accounts = Users_Data["Accounts"].toArray();
    QString Result;
    for(unsigned int Counter = 0;Counter<Users_Accounts.size();Counter++)
    {
        QJsonObject Temp = Users_Accounts[Counter].toObject();
        QString ID_String = QString::number(Temp["ID"].toInt());
        QString Email = Temp["Email"].toString();
        QString PW = Temp["Password"].toString();

        Result+=ID_String + ',' +Email +','+PW + ';' ;
    }
    return Result;
}

QString Login_Database::Get_Account_Username(QString ID)
{
    QString Result;
    qint32 ID_Number = ID.toInt();
    bool Status = false;
    //2. Load database
    QJsonArray Array = Load_Database();

    //3. Loop between User and Admin Accounts to get account ID
    for(unsigned int Counter = 0;Counter<Array.size();Counter++)
    {
        //4. Create Temp Object contains admin object or user object
        QJsonObject Temp = Array[Counter].toObject();

        /*5. Create Accounts which is an array of json objects each object contains
         ID,Email & Password*/
        QJsonArray Accounts = Temp["Accounts"].toArray();

        //6. Loop for each account
        for(unsigned int Counter2 = 0;Counter2<Accounts.size();Counter2++)
        {
            QJsonObject TempObject = Accounts[Counter2].toObject();

            //7. Check for Email and Password to correct log in process
            if(TempObject["ID"].toInt() == ID_Number )
            {
                //8. Success login
                Result =   TempObject["Email"].toString();
                Status = true;
                break;
            }
        }

    }
    if(Status == false)
    {
       // qDebug()<<"Can't Find Account Email"<<Qt::endl;
        Result = "Invalid Account Number";
    }
    return Result;
}

QString Login_Database::Get_Account_PW(QString ID)
{
    QString Result;
    qint32 ID_Number = ID.toInt();
    bool Status = false;
    //2. Load database
    QJsonArray Array = Load_Database();

    //3. Loop between User and Admin Accounts to get account ID
    for(unsigned int Counter = 0;Counter<Array.size();Counter++)
    {
        //4. Create Temp Object contains admin object or user object
        QJsonObject Temp = Array[Counter].toObject();

        /*5. Create Accounts which is an array of json objects each object contains
         ID,Email & Password*/
        QJsonArray Accounts = Temp["Accounts"].toArray();

        //6. Loop for each account
        for(unsigned int Counter2 = 0;Counter2<Accounts.size();Counter2++)
        {
            QJsonObject TempObject = Accounts[Counter2].toObject();

            //7. Check for Email and Password to correct log in process
            if(TempObject["ID"].toInt() == ID_Number )
            {
                //8. Success login
                Result =   TempObject["Password"].toString();
                Status = true;
                break;
            }
        }
    }
    if(Status == false)
    {
        //qDebug()<<"Can't Find Account Email"<<Qt::endl;
        Result = "Invalid Account Number";
    }
    return Result;

}
















// Accounts Database class

Accounts_Database::Accounts_Database(QString Path_Cpy, QString FileName_Cpy)
    :Accounts_Database_File(Path_Cpy + FileName_Cpy)
{

}

qint32 Accounts_Database::Add_Account(QString String)
{
    //Init Varialbes
    QJsonArray Array = Load_Database();
    QStringList List = String.split(',');
    QString Account_Number = List[0];
    QString Account_Name = List[1];
    QString Account_Age = List[2];
    QString Account_Type = List[3];
    QString Account_Balance = List[4];

    //2. Make New Object
    QJsonObject TempObj;
    TempObj["Account Number"] = Account_Number.toInt();
    TempObj["Account Name"] = Account_Name;
    TempObj["Account Age"] = Account_Age.toInt();
    TempObj["Account Type"] = Account_Type;
    TempObj["Account Balance"] = Account_Balance.toInt();

    //3. Save New Database
    Array.append(TempObj);
    Save_Database(Array);

}

QString Accounts_Database::Get_Account_Info(QString String)
{

    QJsonArray Accounts = Load_Database();
    qint32 Account_Number = String.toInt();
    QString Result;
    bool Status = false;

    for(unsigned int Counter = 0;Counter < Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();
        if(Temp["Account Number"].toInt()==Account_Number)
        {
            QString Account_Number = QString::number(Temp["Account Number"].toInt());
            QString Account_Name = Temp["Account Name"].toString();
            QString Account_Age = QString::number(Temp["Account Age"].toInt());
            QString Account_Type = Temp["Account Type"].toString();
            QString Account_Balance = QString::number(Temp["Account Balance"].toDouble(),'f',2);
            Result = Account_Number + ',' + Account_Name + ',' + Account_Age + ',';
            Result+= Account_Type + ',' + Account_Balance;
            Status = true;
            break;
        }
    }
    if(Status==false)
    {
        Result = "Invalid Account Number";
    }
    return Result;
}




bool Accounts_Database::Delete_Account(QString String)
{
    bool Status = false;
    QJsonArray Accounts = Load_Database();
    qint32 Account_Number;
    Account_Number = String.toInt();
    for(unsigned int Counter = 0;Counter<Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();
        if(Temp["Account Number"].toInt()==Account_Number)
        {
            Accounts.removeAt(Counter);
            Save_Database(Accounts);
            Status = true;
            break;
        }
    }

    return Status;
}

bool Accounts_Database::Update_Account(qint32 ID,QString New_Data)
{
    bool Status = false;
    QJsonArray Accounts = Load_Database();
    QStringList List = New_Data.split(',');
    QString Account_Name = List[0];
    QString Account_Age = List[1];
    QString Account_Type = List[2];
    QString Account_Balance = List[3];


    for(unsigned int Counter = 0;Counter<Accounts.size();Counter++)
    {
        QJsonObject TempObject = Accounts[Counter].toObject();
        //qDebug()<<"Account Number: "<<TempObject["Account Number"].toInt()<<Qt::endl;
        if(ID==TempObject["Account Number"].toInt())
        {
            Status = true;
            //Change Data
            TempObject["Account Name"] = Account_Name;
            TempObject["Account Age"] = Account_Age.toInt();
            TempObject["Account Balance"] = Account_Balance.toDouble();
            TempObject["Account Type"] = Account_Type;

            //Update Json Array
            Accounts[Counter] = TempObject;

            // Save Updated database
            Save_Database(Accounts);
            //qDebug()<<"Success Process"<<Qt::endl;

            break;
        }
    }
    return Status;
}

QJsonArray Accounts_Database::Load_Database()
{
    //1. Open Database
    Accounts_Database_File.open(QIODevice::ReadOnly);

    //2. Load database
    QByteArray Data = Accounts_Database_File.readAll();

    //3. Change it to Json Array
    QJsonDocument Document = QJsonDocument::fromJson(Data);

    QJsonArray Accounts = Document.array();

    //4. Close the file
    Accounts_Database_File.close();

    //4. Return the array
    return Accounts;
}

bool Accounts_Database::Save_Database(QJsonArray Updated_Data)
{
    //1. Open file as write only file
    Accounts_Database_File.open(QIODevice::WriteOnly);

    //2. Change Json array to Json Document to convert it to byte array
    QJsonDocument Document(Updated_Data);

    //3. Convert Document to byte array
    QByteArray Accounts_Data = Document.toJson();

    //4. Clear the file then write the updated data
    Accounts_Database_File.resize(0);
    Accounts_Database_File.write(Accounts_Data);

    //5. Close the file
    Accounts_Database_File.close();

    return 1;
}

QString Accounts_Database::View_Database()
{
    QString Result;
    QString Account_Number;
    QString Account_Name;
    QString Account_Age;
    QString Account_Type;
    QString Account_Balance;

    QJsonArray Accounts = Load_Database();
    for(unsigned int Counter = 0; Counter<Accounts.size();Counter++)
    {
        QJsonObject TempObject = Accounts[Counter].toObject();
        Account_Number = QString::number(TempObject["Account Number"].toInt());
        Account_Name = TempObject["Account Name"].toString();
        Account_Age = QString::number(TempObject["Account Age"].toInt());
        Account_Type = TempObject["Account Type"].toString();
        Account_Balance = QString::number(TempObject["Account Balance"].toInt());

        Result+=Account_Number + ',' + Account_Name + ',' + Account_Age + ','+Account_Type;
        Result += ',' + Account_Balance + ';';
        //qDebug()<<Result;
    }
    return Result;
}










// User Transaction Interface
User_Transation_History::User_Transation_History(QString Path_Cpy,  QString FileName_Cpy)
    :Transaction_History_Database(Path_Cpy + FileName_Cpy)
{

}

bool User_Transation_History::Delete_Account(QString String)
{
    bool Status = false;
    QJsonArray Accounts = Load_Database();
    qint32 Account_Number;
    Account_Number = String.toInt();
    for(unsigned int Counter = 0;Counter<Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();
        if(Temp["Account Number"].toInt()==Account_Number)
        {
            Accounts.removeAt(Counter);
            Save_Database(Accounts);
            Status = true;
            break;
        }
    }
    return Status;
}

QString User_Transation_History::Get_Account_Info(QString String)
{
    QJsonArray Accounts = Load_Database();
    QString Result = "";
    qint32 ID = String.toInt();
    bool Status = false;

    for(unsigned int Counter = 0;Counter < Accounts.size();Counter++)
    {
        QJsonObject Temp;
        Temp = Accounts[Counter].toObject();

        if(Temp["Account Number"].toInt()==ID)
        {
            QJsonArray Transactions = Temp["Transaction History"].toArray();
            for(unsigned int Counter2 = 0;Counter2<Transactions.size();Counter2++)
            {
                QJsonObject Temp_Transaction;
                Temp_Transaction = Transactions[Counter2].toObject();
                auto It = Temp_Transaction.begin();
                QString Transaction_String = QString("%1 ").arg( It.key());
                Transaction_String +="-> "+It.value().toString();
                Result+=Transaction_String + ";";
            }
            Status = true;
            break;
        }

    }
    if(Result =="" && Status)
    {
        Result ="There is no Transactions for this account yet";
    }
    else if(Result == ""&& Status == false)
    {
        Result = "Invalid Account";
    }
    return Result;
}

bool User_Transation_History::Update_Account(qint32 ID, QString New_Data)
{
    bool Status = false;
    QDateTime CurrnetTime= QDateTime::currentDateTime();

    QString Time = CurrnetTime.toString("yyyy, MMMM , dddd, hh:mm:ss AP");

    QJsonArray Accounts = Load_Database();

    for(unsigned int Counter = 0;Counter < Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();

        if(ID == Temp["Account Number"].toInt())
        {
            QJsonArray Transactions = Temp["Transaction History"].toArray();

            QJsonObject New_Transaction;
            New_Transaction[Time] = New_Data;
            Transactions.push_front(New_Transaction);
            Temp["Transaction History"] = Transactions;
            Accounts[Counter] = Temp;
            Save_Database(Accounts);
            Status = true;
            break;
        }
    }
    return Status;
}

QJsonArray User_Transation_History::Load_Database()
{
    Transaction_History_Database.open(QIODevice::ReadOnly);

    QByteArray Data = Transaction_History_Database.readAll();

    QJsonDocument Document= QJsonDocument::fromJson(Data);

    QJsonArray Data_Json_Array = Document.array();

    Transaction_History_Database.close();

    return Data_Json_Array;
}

bool User_Transation_History::Save_Database(QJsonArray Updated_Data)
{
    //1. Open the file
    Transaction_History_Database.open(QIODevice::WriteOnly);

    //2. Change Json array to Json Document to convert it to byte array
    QJsonDocument Document(Updated_Data);

    //3. Convert Document to byte array
    QByteArray Accounts_Data = Document.toJson();

    //4. Clear the file then write the updated data
    Transaction_History_Database.resize(0);
    Transaction_History_Database.write(Accounts_Data);

    //5. Close the file
    Transaction_History_Database.close();

    return 1;
}

QString User_Transation_History::View_Database()
{


}

qint32 User_Transation_History::Add_Account(QString String)
{
    //1. Load Database
    QJsonArray Accounts = Load_Database();
    QString Account_Number = String;

    //2. Create New Object
    QJsonObject TempObject;
    TempObject["Account Number"] = Account_Number.toInt();
    QJsonArray Transaction_History;
    TempObject["Transaction History"] = Transaction_History;

    //3. Save the new object to json array
    Accounts.append(TempObject);

    //4. Save the new data in the database file
    Save_Database(Accounts);

    //5. Return Account Number
    return Account_Number.toInt();
}


































// Client Requests log Database


Client_Requests_Log::Client_Requests_Log(QString Path_Cpy, QString File_Name_Cpy)
    :Client_Requests_Database{Path_Cpy + File_Name_Cpy}
{

}

bool Client_Requests_Log::Delete_Account(QString String)
{
    bool Status = false;
    QJsonArray Accounts = Load_Database();
    qint32 Account_Number;
    Account_Number = String.toInt();
    for(unsigned int Counter = 0;Counter<Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();
        if(Temp["Account Number"].toInt()==Account_Number)
        {
            Accounts.removeAt(Counter);
            Save_Database(Accounts);
            Status = true;
            break;
        }
    }
    return Status;

}

QString Client_Requests_Log::Get_Account_Info(QString String)
{
    QJsonArray Accounts = Load_Database();
    QString Result;
    qint32 ID = String.toInt();

    for(unsigned int Counter = 0;Counter < Accounts.size();Counter++)
    {
        QJsonObject Temp;
        Temp = Accounts[Counter].toObject();

        if(Temp["Account Number"].toInt()==ID)
        {
            QJsonArray Requests_Log = Temp["Request Log"].toArray();
            for(unsigned int Counter2 = 0;Counter2<Requests_Log.size();Counter2++)
            {
                QJsonObject Temp_Request_Obj;
                Temp_Request_Obj = Requests_Log[Counter2].toObject();
                auto It = Temp_Request_Obj.begin();
                QString Request_Log_String = QString("%1 ").arg( It.key());
                Request_Log_String +="-> "+It.value().toString();
                Result+=Request_Log_String + ";";
            }
            break;
        }
    }
    return Result;
}

bool Client_Requests_Log::Update_Account(qint32 ID, QString New_Data)
{
    //1. Init Variables
    bool Status = false;
    QDateTime CurrnetTime= QDateTime::currentDateTime();
    QString Time = CurrnetTime.toString("yyyy, MMMM , dddd, hh:mm:ss AP");

    //2. Load database
    QJsonArray Accounts = Load_Database();

    //3. Loop for database with the input ID
    for(unsigned int Counter = 0;Counter < Accounts.size();Counter++)
    {
        QJsonObject Temp = Accounts[Counter].toObject();

        if(ID == Temp["Account Number"].toInt())
        {
            QJsonArray Requests_Log = Temp["Request Log"].toArray();

            QJsonObject New_Request;
            New_Request[Time] = New_Data;
            Requests_Log.push_front(New_Request);
            Temp["Request Log"] = Requests_Log;
            Accounts[Counter] = Temp;
            Save_Database(Accounts);
            Status = true;
            break;
        }
    }
    return Status;
}

QJsonArray Client_Requests_Log::Load_Database()
{
    Client_Requests_Database.open(QIODevice::ReadOnly);

    QByteArray Data = Client_Requests_Database.readAll();

    QJsonDocument Document= QJsonDocument::fromJson(Data);

    QJsonArray Data_Json_Array = Document.array();

    Client_Requests_Database.close();

    return Data_Json_Array;
}

bool Client_Requests_Log::Save_Database(QJsonArray Updated_Data)
{
    //1. Open the file
    Client_Requests_Database.open(QIODevice::WriteOnly);

    //2. Change Json array to Json Document to convert it to byte array
    QJsonDocument Document(Updated_Data);

    //3. Convert Document to byte array
    QByteArray Accounts_Data = Document.toJson();

    //4. Clear the file then write the updated data
    Client_Requests_Database.resize(0);
    Client_Requests_Database.write(Accounts_Data);

    //5. Close the file
    Client_Requests_Database.close();

    return 1;
}

QString Client_Requests_Log::View_Database()
{

}

qint32 Client_Requests_Log::Add_Account(QString String)
{
    //1. Init Account Number
    qint32 Account_Number = String.toInt();

    //2. Load database
    QJsonArray Accounts = Load_Database();

    //3.Create new object & Init it
    QJsonObject TempObject;

    TempObject["Account Number"] = Account_Number;
    QJsonArray Requests;
    TempObject["Request Log"] = Requests;

    //4. Append the new object to the json array
    Accounts.append(TempObject);

    //5. Save the database
    Save_Database(Accounts);

    return Account_Number;
}
