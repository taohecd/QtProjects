#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QWDialog)
{
    ui->setupUi(this);
}

QWDialog::~QWDialog()
{
    delete ui;
}


void QWDialog::on_checkBox_clicked(bool checked)
{
        QFont font=ui->textEdit->font();
        font.setUnderline(checked);
        ui->textEdit->setFont(font);
}

