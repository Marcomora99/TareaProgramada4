#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "red.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Red *r = new Red(10,2);
    r->ImprimirListaCapas();
    cout << endl;
    r->ImprimirMatriz();
    Neurona *n = new Neurona(1);
    cout << n->GetCarga() << endl;
    cout << n->GetUmbral() << endl;
    return a.exec();
}
