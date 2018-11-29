#include "mainwindow.h"
#include <QApplication>
#include <iostream> // Debug
#include "red.h"
#include "codificadorletras.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*codificadorLetras c;
    c.analizarArchivo("C:\\Users\\b75031\\Desktop\\WeAreTheChampions.txt");*/

    return a.exec();
}
