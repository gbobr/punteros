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
	int i, Ordenar;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
	}
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
	printf("\n#SALIDA#\n");

	for(i = 0; i < MAX_PLAYERS; i++)
        {
		indice[i] =& jugadores[i];
        }
		while(!Ordenar)
        {
			Ordenar = 1;
			for(i = 0; i < MAX_PLAYERS-1; i++)
			{
				if(indice[i]->puntaje < indice[i+1]->puntaje)
				{
					Ordenar = 0;
					aux = indice[i];
					indice[i+1] = indice[i];
					indice[i] = aux;
                }
            }

	}
	for(i = 0; i < MAX_PLAYERS; i++)
        {
		printf("\n%c\n%d\n%d",indice[i]->nombre, indice[i]->id, indice[i]->puntaje);
        }
	return 0;
}
