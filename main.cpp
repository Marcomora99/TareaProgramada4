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
    /*Red* r = new Red(4 , {1,2,3,4});
    for(int i = 0; i < r->capas; i++){
        for(int j = 0; j < r->neuronas[i]; j++){
            cout << r->listaCapas[i].listaNeuronas[j].carga << "->" << endl;
            if(i != r->capas - 1){
                for(int k = 0; k < r->neuronas[i + 1]; k++){
                    cout << r->listaCapas[i].listaNeuronas[j].listaConexiones[k].neuronaReceptora->carga << endl;
                }
            }
        }
    }

    cout << "----------------------------" << endl;

    r->pensar(0.563585);
    for(int i = 0; i < r->capas; i++){
        for(int j = 0; j < r->neuronas[i]; j++){
            cout << r->listaCapas[i].listaNeuronas[j].carga << "->" << endl;
            if(i != r->capas - 1){
                for(int k = 0; k < r->neuronas[i + 1]; k++){
                    cout << r->listaCapas[i].listaNeuronas[j].listaConexiones[k].neuronaReceptora->carga << endl;
                }
            }
        }
    }*/

    codificadorLetras c;
    c.analizarArchivo("C:\\Users\\b75031\\Desktop\\WeAreTheChampions.txt");


    return a.exec();
}
