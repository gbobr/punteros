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
	struct jugador* auxiliar;
	int M = 0;
	int i;
	int k;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
	}



	for(i=0;i< MAX_PLAYERS;i++)
    {
        id[i] = &jugadores[i];
    }



        while(!M)
    {
            M = 1;
                for(i=0;i < (MAX_PLAYERS - 1);i++)
                {
                    if(id[i+1]->puntaje > id[i]->puntaje)
                    {
                        M = 0;
                        auxiliar = id[i];
                        id[i] = id[i+1];
                        id[i+1] = auxiliar;
                    }
                }
    }

	printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

        for(i=0;i < MAX_PLAYERS; i++)
        {
            printf("\n%d,", id[i]->id);
            printf("%s,", id[i]->nombre);
            printf("%d", id[i]->puntaje);
        }

	return 0;
}
