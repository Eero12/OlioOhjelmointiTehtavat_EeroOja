#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool player1;
    bool player2;
    void stop();
    bool game = false;
    bool gameSelected = false;

private slots:
    void on_Switchplayer_clicked();

    void on_Switchplayer_2_clicked();

    void on_sec_120_clicked();

    void on_min_5_clicked();

    void updateProgressBar();

    void on_Start_clicked();

    void on_Stop_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short gameTime = 0;
    QTimer *timer = nullptr;

};
#endif // MAINWINDOW_H
