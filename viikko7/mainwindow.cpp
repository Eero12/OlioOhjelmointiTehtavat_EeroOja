#include "mainwindow.h"
#include "ui_mainwindow.h"



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


void MainWindow::on_N1_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '1';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '1';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N2_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '2';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '2';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N3_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '3';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '3';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N4_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '4';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '4';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N5_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '5';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '5';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N6_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '6';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '6';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N7_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '7';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '7';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N8_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '8';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '8';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N9_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '9';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '9';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}
void MainWindow::on_N0_clicked()
{
    if(firstNumberSelected){
        visiblenumber1 += '0';
        QString uusStr = QString::fromStdString(visiblenumber1);
        ui->firstNumber->setText(uusStr);
    }
    if(secondNumberSelected){
        visiblenumber2 += '0';
        QString uusStr = QString::fromStdString(visiblenumber2);
        ui->secondNumber->setText(uusStr);
    }
}


void MainWindow::on_minus_clicked()
{
    minuschecked = true;
    multichecked = false;
    pluschecked = false;
    dividechecked = false;


}

void MainWindow::on_multi_clicked()
{

    minuschecked = false;
    multichecked = true;
    pluschecked = false;
    dividechecked = false;
}


void MainWindow::on_plus_clicked()
{

    minuschecked = false;
    multichecked = false;
    pluschecked = true;
    dividechecked = false;
}


void MainWindow::on_divide_clicked()
{

    minuschecked = false;
    multichecked = false;
    pluschecked = false;
    dividechecked = true;
}


void MainWindow::on_firstNumber_selectionChanged()
{
    firstNumberSelected = true;
    secondNumberSelected = false;
}


void MainWindow::on_secondNumber_selectionChanged()
{
    firstNumberSelected = false;
    secondNumberSelected = true;
}



void MainWindow::on_enter_clicked()
{
    int answer = 0;
    numero1 = stoi(visiblenumber1);
    numero2 = stoi(visiblenumber2);
    if(minuschecked){
        answer = numero1 - numero2;
    }
    else if(pluschecked){
        answer = numero1 + numero2;
    }
    else if(multichecked){
        answer = numero1 * numero2;
    }
    else if(dividechecked){
        answer = numero1 / numero2;
    }
    else{
        ui->result->setText("Error");
    }

    QString uusStr1 = QString::number(numero2);
    ui->debug1->setText(uusStr1);
    QString uusStr2 = QString::number(numero1);
    ui->debug2->setText(uusStr2);

   QString uusStr = QString::number(answer);
    ui->result->setText(uusStr);


}


void MainWindow::on_clear_clicked()
{
    visiblenumber1.clear();
    visiblenumber2.clear();
    numero1 = 0;
    numero2 = 0;

    minuschecked = false;
    multichecked = false;
    pluschecked = false;
    dividechecked = false;

    firstNumberSelected = false;
    secondNumberSelected = false;

    ui->secondNumber->clear();
    ui->firstNumber->clear();
    ui->result->clear();
    ui->debug1->clear();
    ui->debug2->clear();


}

