#include "red.h"
#include <iostream> //para probar el imprimir
using namespace std; //para probar el imprimir

Red::Red(int nCapas, vector<int> nNeuronas)
{
    capas = nCapas;// por el momento solo se usa para poder imprimir
    neuronas = nNeuronas;// por el momento solo se usa para poder imprimir
    unsigned int cntConexiones = capas * neuronas;
    vector< vector< int > > n(cntConexiones, vector<int>(cntConexiones, 0));
    matrizConexiones = n;
    for(int i = 0; i < nCapas; i++){
        if(i == nCapas - 1){
            listaCapas.push_back(Capa(nNeuronas[i], 1));
        }else{
            listaCapas.push_back(Capa(nNeuronas[i], 0));
        }
    }
    /*
    for(int i = 0; i < nCapas; i++){
        for(int j = 0; i < nNeuronas[i]; i++){
            listaCapas[i].listaNeuronas[j].AgregarConexion(listaCapas[i+1].listaNeuronas[j] ,);
        }
    }
    */
}

Red::~Red(){}

//para visualizar en realidad no nos sirve para nada
void Red::ImprimirMatriz()
{
    int cntConexiones = capas * neuronas;
    for(int i = 0  ; i < cntConexiones ; ++i){
        for(int j = 0 ; j < cntConexiones ; ++j){
            cout << matrizConexiones[i][j];
            if(j == matrizConexiones[i].size() - 1){
                cout << endl;
            }
        }
    }
}

//para visualizar en realidad no nos sirve para nada
void Red::ImprimirListaCapas()
{
    for(int i = 0  ; i < capas ; ++i){
        cout << listaCapas[i].cntNeuronas;
        listaCapas[i].ImprimirLista();
    }
}
