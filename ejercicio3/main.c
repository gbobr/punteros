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
	struct jugador jugadores[MAX_PLAYERS], *p[MAX_PLAYERS], *auxiliar;
	int i,k = 1;

	for(i=0; i < MAX_PLAYERS; i++) {
		printf("Ingrese el nombre del jugador con id %d: ",i);
		scanf("%s", jugadores[i].nombre);
		printf("Ingrese el puntaje del jugador con id %d: ",i);
		scanf("%d", &jugadores[i].puntaje);

		jugadores[i].id=i;
		p[i]=&jugadores[i];}

			while(k){
			k=0;
			for(i=0; i<MAX_PLAYERS-1; i++){
				if(p[i]->puntaje < p[i+1]->puntaje){
					auxiliar=p[i];
					p[i]=p[i+1];
					p[i+1]=auxiliar;
					k=1;
				}
		}

	}
	printf("\n#SALIDA#\n");
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
for(i=0; i<MAX_PLAYERS; i++){
	printf("%d,%s,%d\n",p[i]->id,p[i]->nombre,p[i]->puntaje);
}
	return 0;
}
