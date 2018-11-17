#include "capa.h"

Capa::Capa(int cntNeuronas)
{
    for(int i = 0; i < cntNeuronas; i++){
            listaNeuronas.push_back(Neurona());
    }
}
