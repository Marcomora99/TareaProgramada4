#ifndef CAPA_H
#define CAPA_H

#include <vector>
#include "neurona.h"
using namespace std;

class Capa
{
    vector< Neurona > listaNeuronas;
public:
    int cntNeuronas;//Para visualizar que funcione
    Capa(int nCntNeuronas);
    void AgregarNeurona(Neurona nNeurona){};
    void ImprimirLista();//Solo visualizar
};

#endif // CAPA_H
