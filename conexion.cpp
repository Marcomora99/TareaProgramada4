#include "conexion.h"
#include <cstdlib>
#include <time.h>

#include "neurona.h"

Conexion::Conexion(Neurona nNeurona, float nPeso)
{
    srand (time(NULL));
    float floatAleatorio, aleatorio;
    aleatorio = ( float )rand() / RAND_MAX;
    floatAleatorio = 0 + aleatorio * (1 - 0);
    peso = floatAleatorio;
}
