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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N3;
    QPushButton *N6;
    QLineEdit *firstNumber;
    QLineEdit *secondNumber;
    QPushButton *N4;
    QPushButton *N1;
    QPushButton *N0;
    QPushButton *N7;
    QPushButton *N5;
    QPushButton *N2;
    QPushButton *clear;
    QPushButton *N8;
    QPushButton *enter;
    QPushButton *N9;
    QLineEdit *result;
    QPushButton *multi;
    QPushButton *minus;
    QPushButton *plus;
    QPushButton *divide;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *debug2;
    QLineEdit *debug1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(250, 160, 80, 18));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(250, 190, 80, 18));
        firstNumber = new QLineEdit(centralwidget);
        firstNumber->setObjectName("firstNumber");
        firstNumber->setGeometry(QRect(70, 130, 81, 20));
        firstNumber->setAutoFillBackground(false);
        firstNumber->setReadOnly(false);
        firstNumber->setClearButtonEnabled(false);
        secondNumber = new QLineEdit(centralwidget);
        secondNumber->setObjectName("secondNumber");
        secondNumber->setGeometry(QRect(160, 130, 81, 20));
        secondNumber->setAutoFillBackground(false);
        secondNumber->setReadOnly(false);
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(70, 190, 80, 18));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(70, 160, 80, 18));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(70, 250, 80, 18));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(70, 220, 80, 18));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(160, 190, 80, 18));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(160, 160, 80, 18));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(160, 250, 80, 18));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(160, 220, 80, 18));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(250, 250, 80, 18));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(250, 220, 80, 18));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(250, 130, 161, 20));
        result->setAutoFillBackground(false);
        result->setReadOnly(false);
        multi = new QPushButton(centralwidget);
        multi->setObjectName("multi");
        multi->setGeometry(QRect(340, 220, 80, 18));
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(340, 190, 80, 18));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(340, 160, 80, 18));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(340, 250, 80, 18));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 110, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 110, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 110, 61, 16));
        debug2 = new QLineEdit(centralwidget);
        debug2->setObjectName("debug2");
        debug2->setGeometry(QRect(330, 80, 161, 20));
        debug2->setAutoFillBackground(false);
        debug2->setReadOnly(false);
        debug1 = new QLineEdit(centralwidget);
        debug1->setObjectName("debug1");
        debug1->setGeometry(QRect(330, 50, 161, 20));
        debug1->setAutoFillBackground(false);
        debug1->setReadOnly(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multi->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
