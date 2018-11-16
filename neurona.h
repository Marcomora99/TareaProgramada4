#ifndef NEURONA_H
#define NEURONA_H

#include <vector>
#include "conexion.h"
using namespace std;

class Neurona
{
    float umbral;
    float carga;
public:
    vector< Conexion > listaConexiones;
public:
    Neurona(bool esUltima);
    void AgregarConexion(Neurona* nNeurona, float peso);
    //void AplicarCarga(int nCarga){;} NO ENTIENDO BIEN COMO FUNCIONA
};

#endif // NEURONA_H
