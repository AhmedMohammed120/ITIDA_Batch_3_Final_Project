#ifndef USER_ACCOUNT_NUMBER_H
#define USER_ACCOUNT_NUMBER_H

#include <QWidget>

namespace Ui {
class User_Account_Number;
}

class User_Account_Number : public QWidget
{
    Q_OBJECT

public:
    explicit User_Account_Number(QWidget *parent = nullptr);
    ~User_Account_Number();
    void Init_Account_Number(QString Data);

private slots:
    void on_Back_PB_clicked();

private:
    Ui::User_Account_Number *ui;

};

#endif // USER_ACCOUNT_NUMBER_H
