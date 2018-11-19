#include "neurona.h"
#include <cstdlib>
#include <time.h>

Neurona::Neurona()
{
    //Asigna floats aleatorias a la carga y el umbral
    float floatAleatorio, aleatorio;
    for( int i = 0; i < 2; i++ ){
        aleatorio = ( float )rand() / RAND_MAX;
        floatAleatorio = 0 + aleatorio * (1 - 0);
        if(i == 0){
            umbral = floatAleatorio;
        }else{
            carga = floatAleatorio;
        }
    }
}

void Neurona::AgregarConexion(Neurona* nNeurona, float peso)
{
    //Mete en la 'Lista de Conexiones' una neurona (receptora) y un peso indicado.
    listaConexiones.push_back(Conexion(nNeurona, peso));
}

void Neurona::AplicarCarga(){
    if(carga >= umbral) {
        for(int i = 0; i < listaConexiones.size();i++){
            listaConexiones[i].neuronaReceptora->setCarga((carga*listaConexiones[i].neuronaReceptora->GetCarga())/listaConexiones[i].GetPeso());
        }
        ;
    }
}

float Neurona::getPesoDeConexion(int indice){
    if(listaConexiones.size() > 0) {
        return listaConexiones[indice].GetPeso();
    }
}

void Neurona::setCarga(float c){
    carga=c;
}
