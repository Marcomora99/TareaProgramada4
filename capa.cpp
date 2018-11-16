#include "capa.h"

Capa::Capa(int cntNeuronas, bool esUltima)
{
    for(int i = 0; i < cntNeuronas; i++){
        if(esUltima){
            listaNeuronas.push_back(Neurona(1));
        }else{
            listaNeuronas.push_back(Neurona(0));
        }
    }
}
