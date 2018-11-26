#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "codificadorletras.h"
#include "red.h"

Red red(6,{1,6,6,6,6,4});

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    codificadorLetras coder;
    ui->label_2->setText(QString::number(coder.analizarArchivo(ui->plainTextEdit->toPlainText().toStdString())));
}

void MainWindow::on_pushButton_2_clicked()
{

}
