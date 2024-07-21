#ifndef VIEW_BANK_DATABASE_H
#define VIEW_BANK_DATABASE_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class View_Bank_Database;
}

class View_Bank_Database : public QWidget
{
    Q_OBJECT

public:
    explicit View_Bank_Database(QWidget *parent = nullptr);
    ~View_Bank_Database();

private slots:
    void on_Back_clicked();
    void Write_To_LW(QString Data);

private:
    Ui::View_Bank_Database *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // VIEW_BANK_DATABASE_H
