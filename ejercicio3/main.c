#include<stdio.h>
#include<stdlib.h>

#define MAX_PLAYERS 2

struct jugador {
	char nombre[32];
	int puntaje;
	int id;
};

int main(int argc, char* argv[])
{
    struct jugador* punteros [MAX_PLAYERS];
	struct jugador jugadores[MAX_PLAYERS];
	int i, ordenado=1;
	struct jugador *aux;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);
        punteros[i] = &jugadores [i];
		jugadores[i].id=i;
	}

	while(ordenado){
        ordenado = 0;
        for (i=0; i < MAX_PLAYERS-1; i++)
        {
            if (punteros[i]->puntaje < punteros[i+1]->puntaje)
            {
                aux = punteros[i+1];
                punteros[i+1] = punteros[i];
                punteros[i] = aux;

                ordenado = 1;
            }
        }
	}

	printf("\n#SALIDA#\n");

	for (i=0; i < MAX_PLAYERS; i++)
    {
        printf("%d, %s, %d\n", punteros[i]->id, punteros[i]->nombre, punteros[i]->puntaje);

    }



//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
