#include "red.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Red::Red(int cntCapas, vector<int> nNeuronas)
{
    //Verifica que los datos de entrada tengan sentido
    if(cntCapas == nNeuronas.size()){
        //Asigna valores y llena la 'Lista de Capas' con la cantidad asignada y le dice a cada capa cuantas neuronas tiene
        capas = cntCapas;
        neuronas = nNeuronas;
        for(int i = 0; i < capas; i++){
            listaCapas.push_back(Capa(neuronas[i]));
        }
        //Se hacen las conexiones de las neuronas y se crea un float aleatorio que seria el peso de cada conexion
        float floatAleatorio, aleatorio;
        srand( time( NULL ) );
        for(int i = 0; i < capas; i++){
            for(int j = 0; j < neuronas[i]; j++){
                if(i != capas - 1){
                    for(int k = 0; k < neuronas[i + 1]; k++){
                        aleatorio = ( float )rand() / RAND_MAX;
                        floatAleatorio = 0 + aleatorio * (1 - 0);
                        listaCapas[i].listaNeuronas[j].AgregarConexion(&listaCapas[i + 1].listaNeuronas[k], floatAleatorio);
                    }
                }
            }
        }
    }
}

vector<float> Red::pensar(float dato, Red* original) {
    vector<float> rsl;
    Red* redCopia = original;
    redCopia->listaCapas[0].SetPrimera(dato);
    for(int i = 0; i < redCopia->capas - 1; i++){
        for(int j = 0; j < redCopia->neuronas[i]; j++){
            redCopia->listaCapas[i].listaNeuronas[j].AplicarCarga();
        }
    }
    for(int i = 0; i < redCopia->neuronas[redCopia->capas - 1]; i++){
        rsl.push_back(redCopia->listaCapas[redCopia->capas - 1].listaNeuronas[i].GetCarga());
    }
    return rsl;
}

void Red::retroPropagacion(float error){
    for(int i = 0; i < capas - 1; i++){
        for(int j = 0; j < neuronas[i]; j++){
            int cargaNueva = listaCapas[i].listaNeuronas[j].GetCarga();
            cargaNueva -= error;
            listaCapas[i].listaNeuronas[j].setCarga(cargaNueva);
        }
    }
}

float Red::calcularError(vector<float> datosObtenidos , vector<float> datosEsperados){
    float rsl;
    if(datosEsperados.size() == datosObtenidos.size()){
        for(int i = 0; i < datosEsperados.size() ; i++){
            rsl += datosEsperados[i] - datosObtenidos[i];
        }
    }
    rsl = rsl/datosEsperados.size();
    return rsl;
}
