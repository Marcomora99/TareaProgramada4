#include "conexion.h"

#include "neurona.h"

Conexion::Conexion(Neurona* nNeuronaR, float nPeso)
{
    //Asigna valores
    neuronaReceptora = nNeuronaR;
    peso = nPeso;
}
