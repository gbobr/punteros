#include "intercambio.h"

//Escriba aquí su código!
void intercambio(int* p1, int* p2){
	int x;
	x = *p1;
	*p1 = *p2;
	*p2 = x; 
}

void ordenarEnteros(int viEnteros[], int iCantidad){
	int ordenado = 1, i;
	while(ordenado){
		ordenado = 0;
		for(i = 0; i < iCantidad-1;i++){
			if(viEnteros[i] > viEnteros[i+1]){
				intercambio(&viEnteros[i], &viEnteros[i+1]);
				ordenado = 1;
			}
		}
	}
}
