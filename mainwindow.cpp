#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "codificadorletras.h"
#include "red.h"

Red red(6,{1,6,6,6,6,4});
float codigoLetra = 0;
vector<float> datosObtenidos = {};
float errorActual;

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

//Queen
void MainWindow::on_pushButton_2_clicked()
{
    errorActual = 0;
    vector<float> rsl = {1,0,0,0};
    errorActual = red.calcularError(datosObtenidos, rsl);
    ui->label_6->setText(QString::number(errorActual));
}

void MainWindow::on_pushButton_3_clicked()
{
    datosObtenidos = {};
    datosObtenidos = red.pensar(codigoLetra , &red);
    QString datosStr = "";
    for(int i = 0; i < datosObtenidos.size(); i++){
        datosStr.append(QString::number(datosObtenidos[i]));
        datosStr.append("\n");
    }
    ui->label_3->setText(datosStr);
}

//Maluma
void MainWindow::on_pushButton_4_clicked()
{
    errorActual = 0;
    vector<float> rsl = {0,1,0,0};
    errorActual = red.calcularError(datosObtenidos, rsl);
    ui->label_6->setText(QString::number(errorActual));
}

//Metallica
void MainWindow::on_pushButton_5_clicked()
{
    errorActual = 0;
    vector<float> rsl = {0,0,1,0};
    errorActual = red.calcularError(datosObtenidos, rsl);
    ui->label_6->setText(QString::number(errorActual));
}

//Iglesias
void MainWindow::on_pushButton_6_clicked()
{
    errorActual = 0;
    vector<float> rsl = {0,0,0,1};
    errorActual = red.calcularError(datosObtenidos, rsl);
    ui->label_6->setText(QString::number(errorActual));
}

//Retropropacion
void MainWindow::on_pushButton_7_clicked()
{

}
