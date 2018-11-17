#ifndef CAPA_H
#define CAPA_H

#include <vector>
#include "neurona.h"
using namespace std;

class Capa
{
public:
    vector< Neurona > listaNeuronas;
    Capa(int cntNeuronas);
    //void AgregarNeurona(Neurona n){}; CREO QUE NO SE VA A OCUPAR
};

#endif // CAPA_H
