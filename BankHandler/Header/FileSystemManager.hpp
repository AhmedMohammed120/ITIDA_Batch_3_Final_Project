/****************************************************************
 * FILE DESCRIPTION
 ****************************************************************
 *        File     :  FileSystemManager.hpp
 *        Brief    :  Header file for file system management.
 *        Details  :  This file contains declarations for classes and functions related to managing the file system,
 *                    including reading from and writing to databases.
 ****************************************************************/
#ifndef FILE_SYSTEM_MANAGER_HPP
#define FILE_SYSTEM_MANAGER_HPP

/****************************************************************
 * INCLUDES
 ****************************************************************/
#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QJsonArray>
#include <QDebug>
#include <QRandomGenerator>
#include <QDateTime>

/****************************************************************
 *    GLOBAL DATA TYPE AND INSTRUCTIONS Union, Enum & Struct
 ****************************************************************/

/*
 * Brief    : Class for JSON file management.
 * Details  : This class provides methods for reading from and writing to JSON files.
 */


class Json_Abstract
{

public:

    /*
     * Brief    : Read data from the database.
     * Details  : Reads data from the database file and populates the accounts array with account information.
     */
  //  virtual bool Add_Account()=0;
    /*
     * Brief    : Write data to the database.
     * Details  : Writes account information from the accounts array to the database file.
     */
    virtual bool Delete_Account(QString String)=0;

    virtual QString Get_Account_Info(QString String)=0;

    virtual bool Update_Account(qint32 ID,QString New_Data)=0;

    virtual QJsonArray Load_Database()=0;

    virtual bool Save_Database(QJsonArray Updated_Data)=0;

    virtual QString View_Database()=0;

    virtual qint32 Add_Account(QString String)=0;
};


class Login_Database: public Json_Abstract
{
private:
    QString Login_Database_Path;
    QFile LoginFile;
    QJsonDocument Document;
    QJsonArray Accounts;

public:
    Login_Database(QString Path_Cpy,  QString FileName_Cpy);

    QString Get_Account_Info(QString String)override;

    qint32 Add_Account(QString List)override;

    bool Delete_Account(QString String)override;

    bool Update_Account(qint32 ID,QString New_Data)override;

    QJsonArray Load_Database()override;

    bool Save_Database(QJsonArray Updated_Data)override;

    QString View_Database()override;// To be done
};



class Accounts_Database: public Json_Abstract
{
    qint32 ID;
    QString Account_Name;
    qint32 Balance;
    QString Account_Type;
    QString Accounts_Database_Path;
    QFile Accounts_Database_File;


public:
    Accounts_Database(QString Path_Cpy,  QString FileName_Cpy);
    bool Delete_Account(QString String)override;
    bool Update_Account(qint32 ID,QString New_Data)override;
    QJsonArray Load_Database()override;
    bool Save_Database(QJsonArray Updated_Data)override;
    QString View_Database()override;
    qint32 Add_Account(QString String)override;
    QString Get_Account_Info(QString String) override;
};


class User_Transation_History: public Json_Abstract
{
private:
    QFile Transaction_History_Database;

public:
    User_Transation_History(QString Path_Cpy,  QString FileName_Cpy);
    bool Delete_Account(QString String) override;
    QString Get_Account_Info(QString String) override;
    bool Update_Account(qint32 ID, QString New_Data) override;
    QJsonArray Load_Database() override;
    bool Save_Database(QJsonArray Updated_Data) override;
    QString View_Database() override;
    qint32 Add_Account(QString String) override;
};

class Client_Requests_Log: public Json_Abstract
{
private:
    QFile Client_Requests_Database;


    // Json_Abstract interface
public:
    Client_Requests_Log(QString Path_Cpy,QString File_Name_Cpy);
    bool Delete_Account(QString String) override;
    QString Get_Account_Info(QString String) override;
    bool Update_Account(qint32 ID, QString New_Data) override;
    QJsonArray Load_Database() override;
    bool Save_Database(QJsonArray Updated_Data) override;
    QString View_Database() override;
    qint32 Add_Account(QString String) override;
};

#endif


/****************************************************************
 *  END OF  FILE: FileSystemManager.hpp
 ****************************************************************/
