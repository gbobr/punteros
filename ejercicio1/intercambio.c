#include "intercambio.h"

//Escriba aquí su código!

void intercambio(int* p, int* p2){
    int aux;
    aux = *p;
    *p = *p2;
    *p2 = aux;
}

void ordenarEnteros(int vec[], int v){
    int i=0, aux=0, ordenado=0;

    while(!ordenado) {
        ordenado=1;
        for (i=0; i< v-1; i++)
        {

            if (vec[i] > vec[i+1])
            {
                intercambio(&vec[i],&vec[i+1]);
                ordenado=0;
            }

        }
    }

}
