#ifndef MAKE_TRANSACTION_H
#define MAKE_TRANSACTION_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class Make_Transaction;
}

class Make_Transaction : public QWidget
{
    Q_OBJECT

public:
    explicit Make_Transaction(QWidget *parent = nullptr);
    ~Make_Transaction();

private slots:
    void on_Deduct_Funds_PB_clicked();

    void on_Back_clicked();

    void on_Add_Funds_PB_clicked();

    void Write_To_LE(QString Data);

private:
    Ui::Make_Transaction *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // MAKE_TRANSACTION_H
