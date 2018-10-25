#include "intercambio.h"

void intercambio(int* n2, int* n1){

    int aux;
    aux = *n2;
    *n2 = *n1;
    *n1 = aux;
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
