#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button1_clicked();
    void on_Button2_clicked();
    void on_Button4_clicked();
    void on_Robot1_clicked();
    void on_Robot2_clicked();
    void on_Robot3_clicked();
    void on_All_clicked();
    void on_Penalty_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
