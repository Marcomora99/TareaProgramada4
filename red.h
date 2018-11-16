#ifndef RED_H
#define RED_H

#include <vector>
#include "capa.h"
using namespace std;

class Red
{
public:
    int capas;
    vector <int> neuronas;
    vector< Capa > listaCapas;
//public:
    Red(int cntCapas, vector<int> nNeuronas);
    //void AgregarCapa(int cntNeuronas); CREO QUE NO SE VA A OCUPAR
};

#endif // RED_H
