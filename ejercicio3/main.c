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
	struct jugador jugadores[MAX_PLAYERS];
	struct jugador* id[MAX_PLAYERS];
	struct jugador* aux;
	int i, k;
	int ordenado=0;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
	}
	for(i=0;i < MAX_PLAYERS;i++)
        {
            id[i] = &jugadores[i];
        }
    while(!ordenado)
        {
            ordenado = 1;
                for(i=0;i<MAX_PLAYERS-1;i++)
                    {
                        if(id[i+1]->puntaje > id[i]->puntaje)
                        {
                        ordenado=0;
                        aux=id[i];
                        id[i]=id[i+1];
                        id[i+1]=aux;
                        }

                    }
        }

	printf("\n#SALIDA#\n");
printf("ID, Nombre, Puntaje");
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
for(i=0;i<MAX_PLAYERS;i++)
    {
        printf("\n%d, ",id[i]->id);
        //for(k=0;id[i]->nombre[k] != '\0'; k++)
        //{
            printf("%s, ",id[i]->nombre);
        //}
        printf("%d", id[i]->puntaje);
    }
	return 0;
}
