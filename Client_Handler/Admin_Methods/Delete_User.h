#ifndef DELETE_USER_H
#define DELETE_USER_H

#include "signals_handler.h"
#include <QWidget>

namespace Ui {
class Delete_User;
}

class Delete_User : public QWidget
{
    Q_OBJECT

public:
    explicit Delete_User(QWidget *parent = nullptr);
    ~Delete_User();

private slots:
    void on_Back_clicked();
    void on_Delete_clicked();
    void Write_To_LW(QString Data);

private:
    Ui::Delete_User *ui;
    Signals_Handler* Signal_Handler_Ptr;
};

#endif // DELETE_USER_H
