#ifndef TRANSFER_FUNDS_H
#define TRANSFER_FUNDS_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class Transfer_Funds;
}

class Transfer_Funds : public QWidget
{
    Q_OBJECT

public:
    explicit Transfer_Funds(QWidget *parent = nullptr);
    ~Transfer_Funds();

private slots:
    void on_pushButton_clicked();

    void on_Back_clicked();

    void Write_To_LE(QString Data);

private:
    Ui::Transfer_Funds *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // TRANSFER_FUNDS_H
