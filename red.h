#ifndef RED_H
#define RED_H

#include <vector>
#include "capa.h"
using namespace std;

class Red
{
public:
    int capas; //Creo que solo sirve para visualizar / Se podria optimizar el codigo para que no lo ocupe
    vector< int > neuronas; //Creo que solo sirve para visualizar / Se podria optimizar el codigo para que no lo ocupe
    vector< Capa > listaCapas;
//public: por el momento para poder visualizar la red
    Red(int cntCapas, vector<int> nNeuronas);
    vector< Capa > GetListaCapas(){return listaCapas;}
    //void AgregarCapa(int cntNeuronas); CREO QUE NO SE VA A OCUPAR
    void pensar(float dato);
    void retropropagacion(float error);
};

#endif // RED_H
