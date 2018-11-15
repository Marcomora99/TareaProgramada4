#ifndef NEURONA_H
#define NEURONA_H

#include <vector>
#include "conexion.h"
using namespace std;

class Neurona
{
    float umbral;
    float carga;
    vector< Conexion > listaConexiones;
public:
    int x;
    Neurona(int nx);
    float GetCarga(){return carga;}//Visualizar
    float GetUmbral(){return umbral;}//Visualizar
    void AgregarConexion(){};
    void AplicarCarga(int nCarga){};
};

#endif // NEURONA_H
