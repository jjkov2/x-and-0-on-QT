#include "mainwindow.h"
#include "ui_mainwindow.h"

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
//true - X
//false - 0
bool xor0 = true;
//for buttons on game board
QString one;
QString two;
QString three;
QString four;
QString five;
QString six;
QString seven;
QString eight;
QString nine;
bool playWithAI = false;
//true - yes
//false - no


void MainWindow::on_bttn_1_clicked()
{
    if(::xor0 == true && ::one != "X" && ::one != "0"){
        one = "X";
        ui->bttn_1->setText("X");

        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
        }
    }
    else if(::xor0 == false && ::one != "X" && ::one != "0"){
        one = "0";
        ui->bttn_1->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;

    }
    MainWindow::check();
}

void MainWindow::on_bttn_2_clicked()
{
    if(::xor0 == true&& ::two != "X" && ::two != "0"){
        two = "X";
        ui->bttn_2->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true ){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::two != "X" && ::two != "0"){
        two = "0";
        ui->bttn_2->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();

}

void MainWindow::on_bttn_3_clicked()
{
    if(::xor0 == true && ::three != "X" && ::three != "0"){
        ::three = "X";
        ui->bttn_3->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::three != "X" && ::three != "0"){
        ::three = "0";
        ui->bttn_3->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_4_clicked()
{
    if(::xor0 == true && ::four != "X" && ::four != "0"){
        ::four = "X";
        ui->bttn_4->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::four != "X" && ::four != "0"){
        ::four = "0";
        ui->bttn_4->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_5_clicked()
{
    if(::xor0 == true && ::five != "X" && ::five != "0"){
        ::five = "X";
        ui->bttn_5->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::five != "X" && ::five != "0"){
        ::five = "0";
        ui->bttn_5->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_6_clicked()
{
    if(::xor0 == true && ::six != "X" && ::six != "0"){
        ::six = "X";
        ui->bttn_6->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::six != "X" && ::six != "0"){
        ::six = "0";
        ui->bttn_6->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_7_clicked()
{
    if(::xor0 == true && ::seven != "X" && ::seven != "0"){
        ::seven = "X";
        ui->bttn_7->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::seven != "X" && ::seven != "0"){
        ::seven = "0";
        ui->bttn_7->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_8_clicked()
{
    if(::xor0 == true && ::eight != "X" && ::eight != "0"){
        ::eight = "X";
        ui->bttn_8->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::eight != "X" && ::eight != "0"){
        ::eight = "0";
        ui->bttn_8->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::on_bttn_9_clicked()
{
    if(::xor0 == true && ::nine != "X" && ::nine != "0"){
        ::nine = "X";
        ui->bttn_9->setText("X");
        ui->whoMove->setText("move: 0");
        ::xor0 = false;
        if(::playWithAI == true){
            MainWindow::on_pushButton_clicked();
    }
    }
    else if(::xor0 == false && ::nine != "X" && ::nine != "0"){
        ::nine = "0";
        ui->bttn_9->setText("0");
        ui->whoMove->setText("move: X");
        ::xor0 = true;
    }
    MainWindow::check();
}

void MainWindow::check()
{
    if(::one == "X" && ::two == "X" && ::three == "X"){
        ui->result->setText("X win");
    }
    else if(::four == "X" && ::five == "X" && ::six == "X"){
        ui->result->setText("X win");
    }
    else if(::seven == "X" && ::eight == "X" && ::nine == "X"){
        ui->result->setText("X win");
    }
    else if(::one == "X" && ::four == "X" && ::seven == "X"){
        ui->result->setText("X win");
    }
    else if(::two == "X" && ::five == "X" && ::eight == "X"){
        ui->result->setText("X win");
    }
    else if(::three == "X" && ::six == "X" && ::nine == "X"){
        ui->result->setText("X win");
    }
    else if(::one == "X" && ::five == "X" && ::nine == "X"){
        ui->result->setText("X win");
    }
    else if(::three == "X" && ::five == "X" && ::seven == "X"){
        ui->result->setText("X win");
    }

    else if(::one == "0" && ::two == "0" && ::three == "0"){
        ui->result->setText("0 win");
    }
    else if(::four == "0" && ::five == "0" && ::six == "0"){
        ui->result->setText("0 win");
    }
    else if(::seven == "0" && ::eight == "0" && ::nine == "0"){
        ui->result->setText("0 win");
    }
    else if(::one == "0" && ::four == "0" && ::seven == "0"){
        ui->result->setText("0 win");
    }
    else if(::two == "0" && ::five == "0" && ::eight == "0"){
        ui->result->setText("0 win");
    }
    else if(::three == "0" && ::six == "0" && ::nine == "0"){
        ui->result->setText("0 win");
    }
    else if(:: one == "0" && ::five == "0" && ::nine == "0"){
        ui->result->setText("0 win");
    }
    else if(::three == "0" && ::five == "0" && ::seven == "0"){
        ui->result->setText("0 win");
    }
}

void MainWindow::on_bttn_clear_clicked()
{
    ui->result->setText("");
    ui->bttn_1->setText("");
    ui->bttn_2->setText("");
    ui->bttn_3->setText("");
    ui->bttn_4->setText("");
    ui->bttn_5->setText("");
    ui->bttn_6->setText("");
    ui->bttn_7->setText("");
    ui->bttn_8->setText("");
    ui->bttn_9->setText("");
    ui->whoMove->setText("move: X");
    ::one = "";
    ::two = "";
    ::three = "";
    ::four = "";
    ::five = "";
    ::six = "";
    ::seven = "";
    ::eight = "";
    ::nine = "";
    ::xor0 = true;
    playWithAI = false;
}


void MainWindow::on_pushButton_clicked()
{
    ::playWithAI = true;
    if(::one == "X" && ::two != "X" && ::two != "0"){
        ::two = "0";
        ui->bttn_2->setText("0");
    }
    else if(::two == "X" && ::three != "X" && ::three != "0"){
        ::three = "0";
        ui->bttn_3->setText("0");
    }
    else if(::three == "X" && ::four != "X" && ::four != "0"){
        ::four = "0";
        ui->bttn_4->setText("0");
    }
    else if(::four == "X" && ::five != "X" && ::five != "0"){
        ::five = "0";
        ui->bttn_5->setText("0");
    }
    else if(::five == "X" && ::six != "X" && ::six != "0"){
        ::six = "0";
        ui->bttn_6->setText("0");
    }
    else if(::six == "X" && ::seven != "X" && ::seven != "0"){
       ::seven = "0";
        ui->bttn_7->setText("0");
    }
    else if(::seven == "X" && ::eight != "X" && ::eight != "0"){
        ::eight = "0";
        ui->bttn_8->setText("0");
    }
    else if(::eight == "X" && ::nine != "X" && ::nine != "0"){
        ::nine = "0";
        ui->bttn_9->setText("0");
    }
    else if(::nine == "X" && :: one != "X" && ::one != "0"){
        ::one = "0";
        ui->bttn_1->setText("0");
    }

        else if(::one == "X" && ::four != "X" && ::four != "0"){
            ::four = "0";
            ui->bttn_4->setText("0");
        }
        else if(::two == "X" && ::five != "X" && ::five != "0"){
            ::five = "0";
            ui->bttn_5->setText("0");
        }
    else if(::two  == "X" && ::one != "X" && ::one != "0"){
        ::one = "0";
        ui->bttn_1->setText("0");
    }
        else if(::three == "X" && ::five != "X" && ::five != "0"){
            ::five = "0";
            ui->bttn_5->setText("0");
        }
        else if(::three == "X" && ::six != "X" && ::six != "0"){
            ::six = "0";
            ui->bttn_6->setText("0");
        }
        else if(::four == "X" && ::seven != "X" && ::seven != "0"){
            ::seven = "0";
            ui->bttn_7->setText("0");
        }
    else if(::four == "X" && ::five != "X" && ::five != "0"){
        ::five = "0";
        ui->bttn_5->setText("0");
    }
        else if(::five == "X" && ::one != "X" && ::one != "0"){
            ::one = "0";
            ui->bttn_1->setText("0");
        }
        else if(::five == "X" && ::two != "X" && ::two != "0"){
            ::two = "0";
            ui->bttn_2->setText("0");
        }
        else if(::five == "X" && ::three != "X" && ::three != "0"){
            ::three = "0";
            ui->bttn_3->setText("0");
        }
        else if(::five == "X" && ::four != "X" && ::four != "0"){
            ::four = "0";
            ui->bttn_4->setText("0");
        }
        else if(::five == "X" && ::six != "X" && ::six != "0"){
            ::six = "0";
            ui->bttn_6->setText("0");
        }
        else if(::five == "X" && ::seven != "X" && ::seven != "0"){
            ::seven = "0";
            ui->bttn_7->setText("0");
        }
        else if(::five == "X" && ::eight != "X" && ::eight != "0"){
            ::eight = "0";
            ui->bttn_8->setText("0");
        }
        else if(::five == "X" && ::nine != "X" && ::nine != "0"){
            ::nine = "0";
            ui->bttn_9->setText("0");
        }
        else if(::six == "X" && ::three != "X" && ::three != "0"){
            ::three = "0";
            ui->bttn_3->setText("0");
        }
        else if(::six == "X" && ::five != "X" && ::five != "0"){
            ::five = "0";
            ui->bttn_5->setText("0");
        }
        else if(::six == "X" && ::nine != "X" && ::nine != "0"){
            ::nine = "0";
            ui->bttn_9->setText("0");
        }
        else if(::seven == "X" && ::four != "X" && ::four != "0"){
            ::four = "0";
            ui->bttn_4->setText("0");
        }
        else if(::seven == "X" && ::five != "X" && ::five != "0"){
            ::five = "0";
            ui->bttn_5->setText("0");
        }
        else if(::seven == "X" && ::eight != "X" && ::eight != "0"){
            ::eight = "0";
            ui->bttn_8->setText("0");
        }
        else if(::eight == "X" && ::seven != "X" && ::seven != "0"){
            ::seven = "0";
            ui->bttn_7->setText("0");
        }
        else if(::eight == "X" && ::five != "X" && ::five != "0"){
            ::five = "0";
            ui->bttn_5->setText("0");
        }
        else if(::eight == "X" && ::nine != "X" && ::nine != "0"){
            ::nine = "0";
            ui->bttn_9->setText("0");
        }
        else if(::nine == "X" && ::eight != "X" && ::eight != "0"){
            ::eight = "0";
            ui->bttn_8->setText("0");
        }
        else if(::nine == "X" && ::six != "X" && ::six != "0"){
            ::six = "0";
            ui->bttn_6->setText("0");
        }

    ::xor0 = true;
    ui->whoMove->setText("move: X");
}
