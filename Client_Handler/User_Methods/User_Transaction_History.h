#ifndef USER_TRANSACTION_HISTORY_H
#define USER_TRANSACTION_HISTORY_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class User_Transaction_History;
}

class User_Transaction_History : public QWidget
{
    Q_OBJECT

public:
    explicit User_Transaction_History(QWidget *parent = nullptr);
    ~User_Transaction_History();

private slots:
    void on_Back_PB_clicked();
    void Write_To_LW(QString Data);

private:
    Ui::User_Transaction_History *ui;

};

#endif // USER_TRANSACTION_HISTORY_H
