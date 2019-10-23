#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Robot1_clicked()
{
    //Start/Pause Robot 1

}

void Dialog::on_Robot2_clicked()
{
    //Start/Pause Robot 2

}

void Dialog::on_Robot3_clicked()
{
    //Start/Pause Robot 3

}

void Dialog::on_Robot4_clicked()
{
    //Start/Pause Robot 4

}

void Dialog::on_Robot5_clicked()
{
    //Start/Pause Robot 5

}

void Dialog::on_Robot6_clicked()
{
    //Start/Pause Robot 6

}

void Dialog::on_All_clicked()
{
    //Start/Pause All Robots

}
