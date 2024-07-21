#ifndef CREATE_USER_H
#define CREATE_USER_H

#include <QWidget>

namespace Ui {
class Create_User;
}

class Create_User : public QWidget
{
    Q_OBJECT

public:
    explicit Create_User(QWidget *parent = nullptr);
    ~Create_User();

private slots:
    void on_pushButton_clicked();

    void on_Create_New_Account_PB_clicked();

private:
    Ui::Create_User *ui;
};

#endif // CREATE_USER_H
