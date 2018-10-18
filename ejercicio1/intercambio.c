#include "intercambio.h"

void intercambio(int* C, int* D){

    int aux;
    aux = *C;
    *C = *D;
    *D = aux;

}

void ordenarEnteros(int viEnteros[], int iCantidad)
{
        int i, k = 1;
        int aux;
        while(k){
            k = 0;
            for(i = 0; i < iCantidad; i++)
            {
                if(viEnteros[i] > viEnteros[i+1]){
                    intercambio(&viEnteros[i], &viEnteros[i+1]);
                    k = 1;
                }
            }
        }
}

