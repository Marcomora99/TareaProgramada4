#ifndef RED_H
#define RED_H

#include <vector>
#include "capa.h"
using namespace std;

class Red
{
    int capas, neuronas;
    vector< Capa > listaCapas;
    vector< vector< int > > matrizConexiones;
public:
    Red(int nCapas, int nNeuronas);
    ~Red();
    void AgregarCapa(int cNeuronas);
    //Categoria Clasificar ???
    //void Entrenar(); ???
    void ImprimirMatriz();//Solo visualizar
    void ImprimirListaCapas();//Solo visualizar
};

#endif // RED_H
