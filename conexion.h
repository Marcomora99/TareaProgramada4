#ifndef CONEXION_H
#define CONEXION_H

class Neurona;

class Conexion
{
    float peso;
    Neurona* neuronaReceptora;
public:
    Conexion(Neurona* nNeuronaR, float nPeso);
};

#endif // CONEXION_H
