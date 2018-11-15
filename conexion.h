#ifndef CONEXION_H
#define CONEXION_H

class Neurona;

class Conexion
{
    float peso;
    Neurona* receptora;
public:
    Conexion(Neurona* nNeuronaR, float nPeso);
};

#endif // CONEXION_H
