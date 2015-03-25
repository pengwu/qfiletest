#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QStandardPaths>
#include <QTimer>

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

MainWindow* MainWindow::s_mainW = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    targetFile(0)
{
    ui->setupUi(this);
    ui->bytesToWrite->setText(QString::number(ui->writeContent->toPlainText().size() * ui->writetimes->value()));
}

void MainWindow::myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    Q_UNUSED(context)
    Q_UNUSED(type)
    if (s_mainW)
        s_mainW->message(msg);
    OutputDebugString(reinterpret_cast<const wchar_t *>(msg.utf16()));
}

void MainWindow::message(QString msg)
{
    if (ui && ui->messageText)
        ui->messageText->appendPlainText(msg);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = 0;
}

void MainWindow::on_pushButton_open_clicked()
{
    QString fileName = QStandardPaths::writableLocation(QStandardPaths::DataLocation);
    fileName = QFileDialog::getSaveFileName(0, "Save to", fileName, ui->filtersString->text());

    targetFile = new QFile(fileName, this);
    bool ret = targetFile->open(QFile::WriteOnly);
    m_fileName = fileName;
    qDebug () << QString("writeonly mode open %1 is %02\n").arg(fileName).arg(ret? "true":"false");
}

void MainWindow::on_pushButton_write_clicked()
{
    if (!targetFile)
        return;
    QString content = ui->writeContent->toPlainText();
    int writeret = 0;
    for (int i = 1; i <= ui->writetimes->value(); i++) {
        int count = targetFile->write(content.toUtf8());
        if (count < 0)
            break;
        writeret += count;
    }
    qDebug() << QString("write %1 bytes").arg(writeret);
}

void MainWindow::on_pushButton_seek_clicked()
{
    if (!targetFile)
        return;
    int position = ui->seek_spinBox->value();
    qDebug() << "Seek to" << position << " result:" << targetFile->seek(position);
    on_pushButton_pos_clicked();
}

void MainWindow::on_pushButton_pos_clicked()
{
    if (!targetFile)
        return;

    int pos = targetFile->pos();
    ui->positionText->setText(QString::number(pos));
}

void MainWindow::on_pushButton_flush_clicked()
{
    if (targetFile)
        targetFile->flush();
}

void MainWindow::on_pushButton_close_clicked()
{
    if (targetFile)
        targetFile->close();
}

void MainWindow::on_pushButton_openReadOnly_clicked()
{
    QFile file(m_fileName);
    bool ret = file.open(QFile::ReadOnly);
    QString content;
    if (ret) {
        content = file.readAll();
        ui->read_text->setPlainText(content);
        file.close();
    }
    qDebug() << QString("Readonly mode open %1 is %02 size is %3\n")
                .arg(m_fileName)
                .arg(ret? "true":"false")
                .arg(content.size());
}

void MainWindow::on_pushButton_quit_clicked()
{
    s_mainW = 0;
    close();
}

void MainWindow::on_writeContent_textChanged()
{
    ui->bytesToWrite->setText(QString::number(ui->writeContent->toPlainText().size() * ui->writetimes->value()));
}

void MainWindow::on_writetimes_valueChanged(int arg1)
{
    ui->bytesToWrite->setText(QString::number(ui->writeContent->toPlainText().size() * arg1));
}
