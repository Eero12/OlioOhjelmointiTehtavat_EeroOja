#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    string visiblenumber1;
    string visiblenumber2;
    int numero1;
    int numero2;

    bool firstNumberSelected = false;
    bool secondNumberSelected = false;

    bool multichecked;
    bool minuschecked;
    bool dividechecked;
    bool pluschecked;

private slots:

    void on_N1_clicked();
    void on_N2_clicked();
    void on_N3_clicked();
    void on_N4_clicked();
    void on_N5_clicked();
    void on_N6_clicked();
    void on_N7_clicked();
    void on_N8_clicked();
    void on_N9_clicked();
    void on_N0_clicked();


    void on_minus_clicked();

    void on_multi_clicked();

    void on_plus_clicked();

    void on_divide_clicked();

    void on_firstNumber_selectionChanged();

    void on_secondNumber_selectionChanged();

    void on_enter_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
