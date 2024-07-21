#ifndef SIGNALS_HANDLER_H
#define SIGNALS_HANDLER_H

#include <QObject>

class Signals_Handler : public QObject
{
    Q_OBJECT
public:
    explicit Signals_Handler(QObject *parent = nullptr);
    void Emit_Sign_In_Signal(QString Data);
    void Emit_Get_Username_Handle_Signal(QString Username);
    void Emit_Get_Account_Balance_Signal(QString Balance);
    void Emit_Delete_User_Signal(QString Data);
    void Emit_Transaction_History_Signal(QString Data);
    void Emit_View_Bank_Database_Signal(QString Data);
    void Emit_Update_User_Data_Signal(QString Data);
    void Emit_Update_User_Data_2_Signal(QString Data);
    void Emit_Transaction_Handler_Signal(QString Data);
    void Emit_Transfer_Funds_Handler_Signal(QString Data);


signals:
    void Sign_In_Handler_Signal(QString Data);
    void Create_User_Handler_Signal(QString Data);
    void Get_Username_Handle_Signal(QString Username);
    void Get_Balance_Handle_Signal(QString Balance);
    void Delete_User_Handle_Signal(QString Data);
    void Transaction_History_Signal(QString Data);
    void View_Bank_Database_Signal(QString Data);
    void Update_User_Data_Signal(QString Data);
    void Update_User_Data_2_Signal(QString Data);
    void Transaction_Handler_Signal(QString Data);
    void Transfer_Funds_Handler_Signall(QString Data);



};

#endif // SIGNALS_HANDLER_H
