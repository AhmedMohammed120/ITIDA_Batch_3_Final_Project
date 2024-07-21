#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Client.h"
#include <QSharedPointer>
#include "admin_window.h"
#include "Signals_Handler.h"
#include "User_Window.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Clear_PW();
    void Send_Data_To_Server(QString Data);




private slots:
    void on_Sign_In_PB_clicked();
    void Sign_In_Handle_Slot(QString Data);

private:
    Ui::MainWindow *ui;
    Admin_Window* Admin;
    User_Window* User;
    Client Client_Object;
    Signals_Handler* Signals_Handler_Ptr;




    //QSharedPointer<Sign_In_Response_Handler> Sign_In_Handler;

};
#endif // MAINWINDOW_H
