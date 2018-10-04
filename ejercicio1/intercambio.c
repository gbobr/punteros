#include "intercambio.h"

//Escriba aquí su código!
void intercambio(int* p1, int* p2){
	int aux;
	aux = *p1;
	*p1 = *p2;
	*p2 = aux; 
}

void ordenarEneteros(int viEnteros, int iCantidad){
	int k = 1, i;
	while(k){
		k = 0;
		for(i = 0; i < iCantidad-1;i++){
			if(viEnteros[i] < viEnteros[i+1]){
				intercambio(&viEnteros[i], &viEnteros[i+1]);
			}
		}
	}
}