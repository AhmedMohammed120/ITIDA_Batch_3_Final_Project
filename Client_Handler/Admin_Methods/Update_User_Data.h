#ifndef UPDATE_USER_DATA_H
#define UPDATE_USER_DATA_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class Update_User_Data;
}

class Update_User_Data : public QWidget
{
    Q_OBJECT

public:
    explicit Update_User_Data(QWidget *parent = nullptr);
    ~Update_User_Data();

private slots:
    void on_Back_clicked();

    void on_Search_clicked();

    void Write_To_LW(QString Data);

    void on_Update_User_Data_PB_clicked();

    void Write_To_LW_2(QString Data);

private:
    Ui::Update_User_Data *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // UPDATE_USER_DATA_H
