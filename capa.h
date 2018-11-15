#ifndef CAPA_H
#define CAPA_H

#include <vector>
#include "neurona.h"
using namespace std;

class Capa
{
public:
    vector< Neurona > listaNeuronas;
    int cntNeuronas;//Para visualizar que funcione
    Capa(int nCntNeuronas, bool esUltima);
    void AgregarNeurona(Neurona nNeurona){};
    void ImprimirLista();//Solo visualizar
};

#endif // CAPA_H
