#include "intercambio.h"

void intercambio(int *a, int *b){

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenarEnteros(int a[],int cantidad){
    int aux, band=1;

    while(band != 0){
        for(int i=0;i<cantidad;i++){
            if(a[i]>a[i+1]){
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                band=0;
            }

        }

    }
}
