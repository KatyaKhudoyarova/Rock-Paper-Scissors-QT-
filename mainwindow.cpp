#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::make_choice()
{
    choice_r=rand()%3;
    choice_comp=choices[choice_r];
    ui->label_5->setText(choice_comp) ;
    ui->label_4->setText(check_winner());
}
void MainWindow::on_pushButton_clicked(int choice)
{
    choice_human=choices[choice];
    make_choice();
}
void MainWindow::on_pushButton_clicked()

{
    choice_h=0;
    on_pushButton_clicked(choice_h);
}


void MainWindow::on_pushButton_2_clicked()
{
    choice_h=1;
    on_pushButton_clicked(choice_h);
}


void MainWindow::on_pushButton_3_clicked()
{
    choice_h=2;
    on_pushButton_clicked(choice_h);
}
QString MainWindow::check_winner()
{
    if(choice_h==choice_r)
    {return "Нічия";}
    else
    {
        if((choice_r+1)%3==choice_h)
            return "Переміг комп'ютер";
        else
            return "Ви перемогли";
    }
}

