#ifndef CAPA_H
#define CAPA_H

#include <vector>
#include "neurona.h"
using namespace std;

class Capa
{
public:
    //La lista de neuronas tiene que ser publica para que la red pueda accesarla y asi crear las conexiones
    //TAL VEZ CREAR UN METODO
    vector< Neurona > listaNeuronas;
    Capa(int cntNeuronas);
    //void AgregarNeurona(Neurona n){}; CREO QUE NO SE VA A OCUPAR
};

#endif // CAPA_H
