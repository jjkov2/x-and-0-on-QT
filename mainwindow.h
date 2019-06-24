#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_bttn_1_clicked();

    void on_bttn_2_clicked();

    void on_bttn_3_clicked();

    void on_bttn_4_clicked();

    void on_bttn_5_clicked();

    void on_bttn_6_clicked();

    void on_bttn_7_clicked();

    void on_bttn_8_clicked();

    void on_bttn_9_clicked();

    void check();

    void on_bttn_clear_clicked();



    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
