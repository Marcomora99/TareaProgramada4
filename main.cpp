#include "mainwindow.h"
#include <QApplication>
#include <iostream> // Debug
#include "red.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Red* r = new Red(4 , {2,2,2,2});
    return a.exec();
}
