#ifndef NEURONA_H
#define NEURONA_H

#include <vector>
#include "conexion.h"
using namespace std;

class Neurona
{
public:
    float umbral;
    float carga;
    vector< Conexion > listaConexiones;
//public: por el momento para poder visualizar la red
    Neurona();
    void AgregarConexion(Neurona* nNeurona, float peso);
    //void AplicarCarga(int nCarga){;} NO ENTIENDO BIEN COMO FUNCIONA
};

#endif // NEURONA_H
