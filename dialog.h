#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_Robot1_clicked();
    void on_Robot2_clicked();
    void on_Robot3_clicked();
    void on_Robot4_clicked();
    void on_Robot5_clicked();
    void on_Robot6_clicked();
    void on_All_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
