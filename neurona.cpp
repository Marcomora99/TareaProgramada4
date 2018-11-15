#include "neurona.h"
#include <cstdlib>
#include <time.h>

Neurona::Neurona(int nx, bool esUltima)
{
    x = nx;
    float floatAleatorio, aleatorio;
    srand( time( NULL ) );
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
