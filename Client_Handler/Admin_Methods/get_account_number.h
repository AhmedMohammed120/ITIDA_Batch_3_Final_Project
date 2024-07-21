#ifndef GET_ACCOUNT_NUMBER_H
#define GET_ACCOUNT_NUMBER_H
#include "signals_handler.h"
#include <QWidget>

namespace Ui {
class Get_Account_Number;
}

class Get_Account_Number : public QWidget
{
    Q_OBJECT

public:
    explicit Get_Account_Number(QWidget *parent = nullptr);
    void Clear();
    ~Get_Account_Number();

private slots:

    void on_Search_clicked();

    void on_Back_clicked();
    void Write_Account_Number(QString Number);

private:
    Ui::Get_Account_Number *ui;
    Signals_Handler* Signal_Handler_Ptr;
};

#endif // GET_ACCOUNT_NUMBER_H
