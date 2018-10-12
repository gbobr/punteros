#include "intercambio.h"

void intercambio(int v1, int v2){
    int aux;
    aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}
void ordenarEnteros(int Enteros[], int Cant);
    int ordenar = 0, i;
    while (ordenar == 0){
        for(i=0; i< Cant-1; i++)
            ordenar = 1;
            if(Enteros[i] > Enteros[i+1])
                ordenar = 0;
            intercambio(&Enteros[i], &Enteros[i+1]);
    }

