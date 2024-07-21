#include "Signals_Handler.h"
#include "mainwindow.h"
Signals_Handler::Signals_Handler(QObject *parent)
    : QObject{parent}
{

}

void Signals_Handler::Emit_Sign_In_Signal(QString Data)
{
    emit Sign_In_Handler_Signal(Data);
}

void Signals_Handler::Emit_Get_Username_Handle_Signal(QString ID)
{
    emit Get_Username_Handle_Signal(ID);
}

void Signals_Handler::Emit_Get_Account_Balance_Signal(QString Balance)
{
    emit Get_Balance_Handle_Signal(Balance);
}

void Signals_Handler::Emit_Delete_User_Signal(QString Data)
{
    emit Delete_User_Handle_Signal(Data);
}

void Signals_Handler::Emit_Transaction_History_Signal(QString Data)
{
    emit Transaction_History_Signal(Data);
}

void Signals_Handler::Emit_View_Bank_Database_Signal(QString Data)
{
    emit View_Bank_Database_Signal(Data);
}

void Signals_Handler::Emit_Update_User_Data_Signal(QString Data)
{
    emit Update_User_Data_Signal(Data);
}

void Signals_Handler::Emit_Update_User_Data_2_Signal(QString Data)
{
    emit Update_User_Data_2_Signal(Data);
}

void Signals_Handler::Emit_Transaction_Handler_Signal(QString Data)
{
    emit Transaction_Handler_Signal(Data);
}

void Signals_Handler::Emit_Transfer_Funds_Handler_Signal(QString Data)
{
    emit Transfer_Funds_Handler_Signall(Data);
}
