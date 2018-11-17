#include "red.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Red::Red(int cntCapas, vector<int> nNeuronas)
{
    if(cntCapas == nNeuronas.size()){
        capas = cntCapas;
        neuronas = nNeuronas;
        for(int i = 0; i < capas; i++){
            listaCapas.push_back(Capa(neuronas[i]));
        }
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
