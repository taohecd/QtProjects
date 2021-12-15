#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login-Tao");
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
//    qDebug()<<ui->label_username->text();
    if(ui->label_username->text()==" " && ui->label_password->text()==" ") {
        qDebug()<<"login";
    }else{
                  qDebug()<<"Wrong";
    }
}

