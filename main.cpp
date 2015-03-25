#include "mainwindow.h"
#include <QApplication>
#include <QtGlobal>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow::s_mainW = &w;
    w.show();

    qInstallMessageHandler(MainWindow::myMessageOutput);

    return a.exec();
}
