#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QFile;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    static void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);
    static MainWindow* s_mainW;
    void message(QString);

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_write_clicked();

    void on_pushButton_seek_clicked();

    void on_pushButton_pos_clicked();

    void on_pushButton_flush_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_openReadOnly_clicked();

    void on_pushButton_quit_clicked();

    void on_writeContent_textChanged();

    void on_writetimes_valueChanged(int arg1);

private:
    void testWrite();
    QString m_fileName;
    QFile* targetFile;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
