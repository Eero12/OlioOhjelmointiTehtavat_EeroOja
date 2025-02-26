#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Select mode");
}

MainWindow::~MainWindow()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::stop()
{
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    ui->label->setText("Select mode");
    timer->stop();
    delete timer;
    timer = nullptr;
    player1 = false;
    player2 = false;
    game = false;
    gameSelected = false;

}


void MainWindow::on_Switchplayer_2_clicked()
{
    if(gameSelected){
    player1 = false;
    player2 = true;
    ui->label->setText("Player2's turn");
    }
}


void MainWindow::on_Switchplayer_clicked()
{
    if(gameSelected){
    player1 = true;
    player2 = false;
    ui->label->setText("Player1's turn");
    }

}

void MainWindow::on_sec_120_clicked()
{
    if(!game){
    gameSelected = true;
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    }
}


void MainWindow::on_min_5_clicked()
{   if(!game){
    gameSelected= true;
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    }
}

void MainWindow::updateProgressBar()
{
    if(player1 && !player2){
    player1Time = player1Time-1;
    ui->progressBar->setValue(player1Time);
    if(ui->progressBar->value() == 0){ui->label->setText("Player 1 lost by time!! Press stop to restart game");}
    }
    if(player2 && !player1){
        player2Time = player2Time-1;
        ui->progressBar_2->setValue(player2Time);
        if(ui->progressBar_2->value() == 0){ui->label->setText("Player 2 lost by time!! Press stop to restart game");}
    }
    if(!player1 && !player2){
        ui->label->setText("Starting player not selected");
    }
}


void MainWindow::on_Start_clicked()
{
    if(!game){
    timer = new QTimer(this);
    connect(timer,
            &QTimer::timeout,
            this,
            &MainWindow::updateProgressBar);

    timer->setInterval(1000);
    timer->start();
    game = true;
    }
}


void MainWindow::on_Stop_clicked()
{
    stop();
}

