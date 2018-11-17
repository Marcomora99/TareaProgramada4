#include "capa.h"

Capa::Capa(int cntNeuronas)
{
    //Llena las 'Lista de Neuronas' con las cantidad de neuronas indicada
    for(int i = 0; i < cntNeuronas; i++){
            listaNeuronas.push_back(Neurona());
    }
}
