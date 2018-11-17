#ifndef CONEXION_H
#define CONEXION_H

class Neurona;

class Conexion
{
public:
    float peso;
    Neurona* neuronaReceptora;
//public: por el momento para poder visualizar la red
    Conexion(Neurona* nNeuronaR, float nPeso);
};

#endif // CONEXION_H
