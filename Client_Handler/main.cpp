#include "mainwindow.h"
#include "Client.h"
#include <QApplication>
extern Client *Client_Ptr;
MainWindow*  Main_Window_Ptr;
int main(int argc, char *argv[])
{
    //Client_Ptr->ConnectToDevice("192.168.8.7",12345);
    QApplication a(argc, argv);
    MainWindow w;
    Main_Window_Ptr = &w;
    w.show();
    return a.exec();
}
