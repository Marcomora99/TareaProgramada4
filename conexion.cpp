#include "conexion.h"
#include <cstdlib>
#include <time.h>

#include "neurona.h"

Conexion::Conexion(Neurona nNeurona, float nPeso)
{
    int enteroAleatorio;
    srand (time(NULL));
    enteroAleatorio = rand()%100;
    peso = enteroAleatorio;
}
