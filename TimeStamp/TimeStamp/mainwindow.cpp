#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdatetime.h"

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


void MainWindow::on_pushButton_clicked()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString timeStamp = dateTime.toString("yyyy-MM-dd hh:mm::ss.zzz");
    int ms = dateTime.time().msec();
    qint64 epochTime = dateTime.toMSecsSinceEpoch();

    ui->textEdit->append(QString("timeStamp is %1").arg(timeStamp));
    ui->textEdit->append(QString("ms is %1").arg(ms));
    ui->textEdit->append(QString("epochTime is %1").arg(epochTime));
    ui->textEdit->append("");
}

