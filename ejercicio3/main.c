#include<stdio.h>
#include<stdlib.h>

#define MAX_PLAYERS 4

struct jugador {
	char nombre[32];
	int puntaje;
	int id;
};
struct jugador *indice[MAX_PLAYERS];
int main(int argc, char* argv[])
{
	struct jugador jugadores[MAX_PLAYERS];	
	int i, aux;

	for(i=0; i < MAX_PLAYERS; i++)
		{
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
		}
	
	for(i=0;i<MAX_PLAYERS;i++)
		{
		 indice[i]=&jugadores[i];
		}	
	
	for(i=0;i<MAX_PLAYERS;i++)
	{
		if(indice[i]->puntaje < indice[i+1]->puntaje)
			{
			aux= indice[i];
			indice[i+1] = indice[i];
			indice[i+1] = aux;
			}}

	printf("\n#SALIDA#\n");
	printf("Id \t Nombre \t Puntaje");
		for(i=0;i<MAX_PLAYERS;i++)
	{
		printf("%d \t %c \t %d",indice[i]->id,indice[i]->nombre,indice[i]->puntaje);
	}
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
