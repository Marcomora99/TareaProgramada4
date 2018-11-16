#include "red.h"
#include <iostream> //para probar el imprimir
#include <cstdlib>
#include <time.h>
using namespace std; 

Red::Red(int nCapas, vector<int> nNeuronas)
{
    capas = nCapas;// por el momento solo se usa para poder imprimir
    neuronas = nNeuronas;// por el momento solo se usa para poder imprimir
    unsigned int cntConexiones;
    for(int i = 0; i < capas; i++){
        for(int i = 0; i < neuronas.size(); i++){
            cntConexiones++;   
        }
    }
    vector< vector< int > > n(cntConexiones, vector<int>(cntConexiones, 0));
    matrizConexiones = n;
    for(int i = 0; i < nCapas; i++){
        if(i == nCapas - 1){
            listaCapas.push_back(Capa(nNeuronas[i], 1));
        }else{
            listaCapas.push_back(Capa(nNeuronas[i], 0));
        }
    }
    
    float floatAleatorio, aleatorio;
    srand( time( NULL ) );
    for(int i = 0; i < nCapas; i++){
        for(int j = 0; j < nNeuronas[i]; j++){
            for(int k = 0; k < nNeuronas[i + 1]; k++){
                aleatorio = ( float )rand() / RAND_MAX;
                floatAleatorio = 0 + aleatorio * (1 - 0);
                listaCapas[i].listaNeuronas[j].AgregarConexion(&listaCapas[i+1].listaNeuronas[j], floatAleatorio);    
            }
        }
    }
}

Red::~Red(){}

//para visualizar en realidad no nos sirve para nada
void Red::ImprimirMatriz()
{
    unsigned int cntConexiones = 0;
    for(int i = 0; i < capas; i++){
        for(int i = 0; i < neuronas.size(); i++){
            cntConexiones++;   
        }
    }
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
