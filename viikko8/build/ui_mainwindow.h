/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Switchplayer;
    QPushButton *min_5;
    QPushButton *sec_120;
    QPushButton *Switchplayer_2;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label;
    QPushButton *Start;
    QPushButton *Stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Switchplayer = new QPushButton(centralwidget);
        Switchplayer->setObjectName("Switchplayer");
        Switchplayer->setGeometry(QRect(80, 80, 80, 18));
        min_5 = new QPushButton(centralwidget);
        min_5->setObjectName("min_5");
        min_5->setGeometry(QRect(290, 120, 80, 18));
        sec_120 = new QPushButton(centralwidget);
        sec_120->setObjectName("sec_120");
        sec_120->setGeometry(QRect(190, 120, 80, 18));
        Switchplayer_2 = new QPushButton(centralwidget);
        Switchplayer_2->setObjectName("Switchplayer_2");
        Switchplayer_2->setGeometry(QRect(390, 80, 80, 18));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(70, 40, 118, 23));
        progressBar->setMaximum(300);
        progressBar->setValue(0);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(370, 40, 118, 23));
        progressBar_2->setMaximum(300);
        progressBar_2->setValue(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 30, 161, 31));
        label->setWordWrap(false);
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(190, 160, 80, 18));
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(290, 160, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Switchplayer->setText(QCoreApplication::translate("MainWindow", "Switchplayer", nullptr));
        min_5->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
        sec_120->setText(QCoreApplication::translate("MainWindow", "120sec", nullptr));
        Switchplayer_2->setText(QCoreApplication::translate("MainWindow", "Switchplayer", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select player to start", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
