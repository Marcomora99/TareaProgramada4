#include "capa.h"
#include <iostream>

Capa::Capa(int nCntNeuronas, bool esUltima)
{
    cntNeuronas = nCntNeuronas;
    for(int i = 0; i < cntNeuronas; i++){
        if(esUltima){
            listaNeuronas.push_back(Neurona(i , 1));
        }else{
            listaNeuronas.push_back(Neurona(i , 0));
        }
    }
}

// solo para visualizar
void Capa::ImprimirLista(){
    for(int i = 0  ; i < cntNeuronas ; ++i){
        cout << listaNeuronas[i].x;
    }
    cout << endl;
}
