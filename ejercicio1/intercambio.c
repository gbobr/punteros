#include "intercambio.h"

void intercambio(int* pi1, int* pi2){

    int aux;
    aux = *pi1;
    *pi1 = *pi2;
    *pi2 = aux;
}

void ordenarEnteros(int viEnteros[], int iCantidad){
    int aux, band=0, i;

    while(!band){
        band=1;
        for(i=0;i<iCantidad;i++){
            if(viEnteros[i]>viEnteros[i+1]){
                aux=viEnteros[i];
                viEnteros[i]=viEnteros[i+1];
                viEnteros[i+1]=aux;
                band=0;
            }

        }

    }
}
