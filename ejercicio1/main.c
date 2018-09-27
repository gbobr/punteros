#include<stdio.h>
#include<stdlib.h>
#include "intercambio.h"

int main(int argc, char* argv[])
{
	int cant_enteros, i;
	int *enteros;
	
	printf("Cuantos numeros va a ingresar?: ");
	scanf("%d", &cant_enteros);

	//Reservo memoria dinámica para un vector dinámico de enteros
	enteros = malloc(sizeof(int)*cant_enteros);
	
	if(enteros == NULL) {
		fprintf(stderr, "Error: Memoria insuficiente");
		return -1;
	}

	for(i=0 ; i < cant_enteros ; i++) {
		printf("\nIngrese el número (%d de %d): ", i+1, cant_enteros);	
		scanf("%d", enteros+i);
	}

	ordenar_enteros(enteros, cant_enteros);

	printf("\n#SALIDA#\n");
	for(i=0 ; i < cant_enteros ; i++) {
		printf("%d\n", enteros[i]);
	}

	//Libero la memoria que reservé
	free(enteros);
	return 0;
}
