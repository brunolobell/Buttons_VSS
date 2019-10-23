#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button1_clicked()
{
    //Start/Pause Serial Communication
        
}

void MainWindow::on_Button2_clicked()
{
    //Start/Pause Receiving Vision Data

}

void MainWindow::on_Robot1_clicked()
{
    //Start/Pause Robot 1

}

void MainWindow::on_Robot2_clicked()
{
    //Start/Pause Robot 2

}

void MainWindow::on_All_clicked()
{
    //Start/Pause Robot 2

}

void MainWindow::on_Robot3_clicked()
{
    //Start/Pause Robot 3

}

void MainWindow::on_Penalty_clicked()
{
    //Start/Pause Penalty

}

void MainWindow::on_Button4_clicked()
{
    //End Button
    close();
}


