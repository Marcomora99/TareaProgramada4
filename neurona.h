#ifndef NEURONA_H
#define NEURONA_H

#include <vector>
#include <cmath>
#include "conexion.h"
using namespace std;

class Neurona
{
public:
    float carga, umbral;
    vector< Conexion > listaConexiones;
//public: por el momento para poder visualizar la red
    Neurona();
    float GetCarga(){return carga;}
    float GetUmbral(){return umbral;}
    vector< Conexion > GetListaConexiones(){return listaConexiones;}
    void AgregarConexion(Neurona* nNeurona, float peso);
    void AplicarCarga();
    float getPesoDeConexion(int indice);
    void setCarga(float c);
};

#endif // NEURONA_H
