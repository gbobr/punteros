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
	int i, k;
	int ordenado = 0;
	struct jugador* puntero_jugadores[MAX_PLAYERS];
    struct jugador* aux;


	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i+1;

	}
	for(i=0; i<MAX_PLAYERS; i++) {
        puntero_jugadores[i] = &jugadores[i];
}

while(!ordenado) {
        ordenado=1;
        for(i=0;i<MAX_PLAYERS-1;i++){
                if(puntero_jugadores[i]->puntaje < puntero_jugadores[i+1]->puntaje) {
                        ordenado=0;
                        aux=puntero_jugadores[i];
                        puntero_jugadores[i]=puntero_jugadores[i+1];
                        puntero_jugadores[i+1]=aux;
                }
        }
}

	printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
    printf("ID, ");
    printf("Nombre, ");
    printf("Puntaje");
    printf("\n");
    for(i=0; i<MAX_PLAYERS;i++)
    {
        printf("%d, ",puntero_jugadores[i]->id);
        for(k=0;puntero_jugadores[i]->nombre[k] != '\0';k++)
        {
            printf("%c", puntero_jugadores[i]->nombre[k]);
        }
        printf(", ");
        printf("%d",puntero_jugadores[i]->puntaje);
        printf("\n");
    }


	return 0;
}
