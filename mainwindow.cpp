#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "codificadorletras.h"
#include "red.h"

Red red(6,{1,6,6,6,6,4});
float codigoLetra = 0;
vector<float> datosObtenidos = {};

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
    float codigoLetra = coder.analizarArchivo(ui->plainTextEdit->toPlainText().toStdString());
    ui->label_2->setText(QString::number(codigoLetra));
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{
    datosObtenidos = red.pensar(codigoLetra , &red);
    QString datosStr = "";
    for(int i = 0; i < datosObtenidos.size(); i++){
        datosStr.append(QString::number(datosObtenidos[i]));
        datosStr.append("\n");
    }
    ui->label_3->setText(datosStr);
}
