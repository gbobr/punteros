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
	struct jugador * p[MAX_PLAYERS];
	int i, aux, bandera = 0;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
	}

	for(i=0; i<MAX_PLAYERS;i++){

         p[i] = &jugadores[i];
	}

	printf("\n#SALIDA#\n");


	while(!bandera)
    {

        bandera=1;

        for(i=0; i< MAX_PLAYERS-1; i++)
        {
            if(p[i]->puntaje < p[i+1]->puntaje)
            {
                bandera = 0;
                aux=p[i];
                p[i]=p[i+1];
                p[i+1] = aux;
            }
        }
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA


    }
    printf("\nID,  NOMBRE,  PUNTAJE");

        for(i=0; i<MAX_PLAYERS; i++){

            printf("\n%d,      %s,      %d", p[i]->id, p[i]->nombre, p[i]->puntaje);
        }

        printf("\nCreated by: Mazzuca Matias and Surace De Mattei Lucas");

	return 0;
}
