/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_write;
    QPushButton *pushButton_quit;
    QPlainTextEdit *messageText;
    QPlainTextEdit *writeContent;
    QPushButton *pushButton_open;
    QPlainTextEdit *read_text;
    QPushButton *pushButton_openReadOnly;
    QPushButton *pushButton_seek;
    QPushButton *pushButton_pos;
    QPushButton *pushButton_close;
    QPushButton *pushButton_flush;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *seek_spinBox;
    QLabel *positionText;
    QSpinBox *writetimes;
    QLineEdit *filtersString;
    QLabel *bytesToWrite;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(971, 642);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_write = new QPushButton(centralWidget);
        pushButton_write->setObjectName(QStringLiteral("pushButton_write"));
        pushButton_write->setGeometry(QRect(450, 60, 75, 23));
        pushButton_quit = new QPushButton(centralWidget);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(380, 530, 75, 23));
        messageText = new QPlainTextEdit(centralWidget);
        messageText->setObjectName(QStringLiteral("messageText"));
        messageText->setGeometry(QRect(60, 180, 771, 111));
        writeContent = new QPlainTextEdit(centralWidget);
        writeContent->setObjectName(QStringLiteral("writeContent"));
        writeContent->setGeometry(QRect(60, 100, 771, 71));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(90, 60, 75, 23));
        read_text = new QPlainTextEdit(centralWidget);
        read_text->setObjectName(QStringLiteral("read_text"));
        read_text->setGeometry(QRect(60, 410, 781, 111));
        pushButton_openReadOnly = new QPushButton(centralWidget);
        pushButton_openReadOnly->setObjectName(QStringLiteral("pushButton_openReadOnly"));
        pushButton_openReadOnly->setGeometry(QRect(330, 370, 181, 23));
        pushButton_seek = new QPushButton(centralWidget);
        pushButton_seek->setObjectName(QStringLiteral("pushButton_seek"));
        pushButton_seek->setGeometry(QRect(70, 310, 81, 31));
        pushButton_pos = new QPushButton(centralWidget);
        pushButton_pos->setObjectName(QStringLiteral("pushButton_pos"));
        pushButton_pos->setGeometry(QRect(330, 310, 81, 31));
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(690, 310, 111, 31));
        pushButton_flush = new QPushButton(centralWidget);
        pushButton_flush->setObjectName(QStringLiteral("pushButton_flush"));
        pushButton_flush->setGeometry(QRect(560, 310, 111, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(840, 100, 101, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(850, 210, 101, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(850, 450, 101, 21));
        seek_spinBox = new QSpinBox(centralWidget);
        seek_spinBox->setObjectName(QStringLiteral("seek_spinBox"));
        seek_spinBox->setGeometry(QRect(170, 310, 131, 31));
        seek_spinBox->setMaximum(100000);
        seek_spinBox->setValue(20);
        positionText = new QLabel(centralWidget);
        positionText->setObjectName(QStringLiteral("positionText"));
        positionText->setGeometry(QRect(430, 310, 111, 31));
        writetimes = new QSpinBox(centralWidget);
        writetimes->setObjectName(QStringLiteral("writetimes"));
        writetimes->setGeometry(QRect(580, 60, 101, 22));
        writetimes->setMaximum(100000);
        writetimes->setValue(1);
        filtersString = new QLineEdit(centralWidget);
        filtersString->setObjectName(QStringLiteral("filtersString"));
        filtersString->setGeometry(QRect(200, 60, 181, 22));
        bytesToWrite = new QLabel(centralWidget);
        bytesToWrite->setObjectName(QStringLiteral("bytesToWrite"));
        bytesToWrite->setGeometry(QRect(700, 60, 101, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(810, 60, 101, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 971, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_write->setText(QApplication::translate("MainWindow", "write", 0));
        pushButton_quit->setText(QApplication::translate("MainWindow", "Quit", 0));
        writeContent->setPlainText(QApplication::translate("MainWindow", "test write files in winrt kkadddsdaf dsdafadsfasdfs adsfasdfasdfkkkkkkk399999999asdfas9dfasdfasdf9adsfasdfasdfa3kp\303\266iukhjjhfgjdf56lhklg5ertest write files in winrt kkadddsdaf dsdafadsfasdfs adsfasdfasdfkkkkkkk399999999asdfas9dfasdfasdf9adsfasdfasdfa3kp\303\266iukhjjhfgjdf56lhklg5ertest write files in winrt kkadddsdaf dsdafadsfasdfs adsfasdfasdfkkkkkkk399999999asdfas9dfasdfasdf9adsfasdfasdfa3kp\303\266iukhjjhfgjdf56lhklg5er", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "Open", 0));
        read_text->setPlainText(QString());
        pushButton_openReadOnly->setText(QApplication::translate("MainWindow", "Read file (ReadOnly)", 0));
        pushButton_seek->setText(QApplication::translate("MainWindow", "seek", 0));
        pushButton_pos->setText(QApplication::translate("MainWindow", "position", 0));
        pushButton_close->setText(QApplication::translate("MainWindow", "close", 0));
        pushButton_flush->setText(QApplication::translate("MainWindow", "flush", 0));
        label->setText(QApplication::translate("MainWindow", "Write content", 0));
        label_2->setText(QApplication::translate("MainWindow", "Debug Print", 0));
        label_3->setText(QApplication::translate("MainWindow", "Read file content", 0));
        positionText->setText(QApplication::translate("MainWindow", "20", 0));
        filtersString->setText(QApplication::translate("MainWindow", "filtername (.doc)", 0));
        bytesToWrite->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Bytes", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
