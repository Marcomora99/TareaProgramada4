#include "capa.h"
#include <iostream>

Capa::Capa(int nCntNeuronas)
{
    cntNeuronas = nCntNeuronas;
    for(int i = 0; i < cntNeuronas; i++){
        listaNeuronas.push_back(Neurona(i));
    }
}

// solo para visualizar
void Capa::ImprimirLista(){
    for(int i = 0  ; i < cntNeuronas ; ++i){
        cout << listaNeuronas[i].x;
    }
    cout << endl;
}
