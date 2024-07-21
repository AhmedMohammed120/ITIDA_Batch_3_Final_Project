#ifndef VIEW_TRANSACTION_HISTORY_H
#define VIEW_TRANSACTION_HISTORY_H

#include <QWidget>
#include "signals_handler.h"

namespace Ui {
class View_Transaction_History;
}

class View_Transaction_History : public QWidget
{
    Q_OBJECT

public:
    explicit View_Transaction_History(QWidget *parent = nullptr);
    ~View_Transaction_History();
    void Clear();

private slots:
    void on_Back_clicked();

    void on_Search_clicked();

    void Write_To_LW(QString Data);

private:
    Ui::View_Transaction_History *ui;
    Signals_Handler* Signals_Handler_Ptr;
};

#endif // VIEW_TRANSACTION_HISTORY_H
