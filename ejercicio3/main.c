#include<stdio.h>
#include<stdlib.h>

#define MAX_PLAYERS 4

struct jugador {
	char nombre[32];
	int puntaje;
	int id;
};

int main(int argc, char* argv[])
{
	struct jugador jugadores[MAX_PLAYERS], *indice[MAX_PLAYERS], *aux;
	int i,ordenado = 1;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
		indice[i]=&jugadores[i];}

			while(ordenado){
			ordenado=0;
			for(i=0; i<MAX_PLAYERS-1; i++){
				if(indice[i]->puntaje < indice[i+1]->puntaje){
					aux=indice[i];
					indice[i]=indice[i+1];
					indice[i+1]=aux;
					ordenado=1;
				}
		}

	}
	printf("\n#SALIDA#\n");
	printf("ID, NOMBRE, PUNTAJE\n") ;
	for(i=0; i<MAX_PLAYERS; i++){
		printf("%d,%s,%d\n",indice[i]->id,indice[i]->nombre,indice[i]->puntaje);
	}

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
