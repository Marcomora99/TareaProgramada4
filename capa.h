#ifndef CAPA_H
#define CAPA_H

#include <vector>
#include "neurona.h"
using namespace std;

class Capa
{
    vector< Neurona > listaNeuronas;
public:
    Capa(int cntNeuronas, bool esUltima);
    vector < Neurona >* GetListaNeuronas(){return &listaNeuronas;}
    //void AgregarNeurona(Neurona n){}; CREO QUE NO SE VA A OCUPAR
};

#endif // CAPA_H
