#ifndef GET_USER_BALANCE_H
#define GET_USER_BALANCE_H

#include <QWidget>
#include "signals_handler.h"
namespace Ui {
class Get_User_Balance;
}

class Get_User_Balance : public QWidget
{
    Q_OBJECT

public:
    explicit Get_User_Balance(QWidget *parent = nullptr);
    ~Get_User_Balance();
    void Clear();

private slots:
    void on_Back_2_clicked();
    void on_Search_2_clicked();
    void Write_To_LW(QString Balance);

private:
    Ui::Get_User_Balance *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // GET_USER_BALANCE_H
