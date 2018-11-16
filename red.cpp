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
            if(i == capas - 1){
                listaCapas.push_back(Capa(neuronas[i], 1));
            }else{
                listaCapas.push_back(Capa(neuronas[i], 0));
            }
        }
        float floatAleatorio, aleatorio;
        srand( time( NULL ) );
        for(int i = 0; i < capas; i++){
            for(int j = 0; j < neuronas[i]; j++){
                for(int k = 0; k < neuronas[i + 1]; k++){
                    aleatorio = ( float )rand() / RAND_MAX;
                    floatAleatorio = 0 + aleatorio * (1 - 0);
                }
            }
        }
    }
}

