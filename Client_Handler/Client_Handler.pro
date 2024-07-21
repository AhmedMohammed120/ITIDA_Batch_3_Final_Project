QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    Admin_Methods/Create_User.cpp \
    Admin_Methods/Delete_User.cpp \
    Admin_Methods/Update_User_Data.cpp \
    Admin_Methods/get_account_number.cpp \
    Admin_Methods/get_user_balance.cpp \
    Admin_Methods/view_bank_database.cpp \
    Admin_Methods/view_transaction_history.cpp \
    Client.cpp \
    User_Methods/Make_Transaction.cpp \
    User_Methods/Transfer_Funds.cpp \
    User_Methods/User_Account_Number.cpp \
    User_Methods/User_Transaction_History.cpp \
    User_Methods/user_account_balance.cpp \
    admin_window.cpp \
    main.cpp \
    mainwindow.cpp \
    response_handler.cpp \
    signals_handler.cpp \
    user_window.cpp

HEADERS += \
    Admin_Methods/Create_User.h \
    Admin_Methods/Delete_User.h \
    Admin_Methods/Update_User_Data.h \
    Admin_Methods/get_account_number.h \
    Admin_Methods/get_user_balance.h \
    Admin_Methods/view_bank_database.h \
    Admin_Methods/view_transaction_history.h \
    Client.h \
    User_Methods/Make_Transaction.h \
    User_Methods/Transfer_Funds.h \
    User_Methods/User_Account_Number.h \
    User_Methods/User_Transaction_History.h \
    User_Methods/user_account_balance.h \
    admin_window.h \
    mainwindow.h \
    response_handler.h \
    signals_handler.h \
    user_window.h

FORMS += \
    Admin_Methods/Create_User.ui \
    Admin_Methods/Delete_User.ui \
    Admin_Methods/Update_User_Data.ui \
    Admin_Methods/get_account_number.ui \
    Admin_Methods/get_user_balance.ui \
    Admin_Methods/view_bank_database.ui \
    Admin_Methods/view_transaction_history.ui \
    User_Methods/Make_Transaction.ui \
    User_Methods/Transfer_Funds.ui \
    User_Methods/User_Account_Number.ui \
    User_Methods/User_Transaction_History.ui \
    User_Methods/user_account_balance.ui \
    admin_window.ui \
    mainwindow.ui \
    user_window.ui
