#include "conexion.h"

#include "neurona.h"

Conexion::Conexion(Neurona* nNeuronaR, float nPeso)
{
    neuronaReceptora = nNeuronaR;
    peso = nPeso;
}
