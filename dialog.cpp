#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog(){
    delete ui;
}

void Dialog::on_yes_clicked(){
    emit s_yes_clicked();
    close();
}

void Dialog::on_no_clicked(){
    close();

}
