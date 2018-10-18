#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{

//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
    char lista[100];
    char* elemento;
    char* aux;
    printf("Ingrese lista:\n");
    gets(lista);
    elemento = lista;


	printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA
        printf("%s\n", elemento);
        for(elemento = lista; *elemento != '\0'; elemento++){
            if(*elemento == ','){
                aux = elemento;
                aux = aux + 2;
                printf("%s\n", aux);
            }
        }

	return 0;
}
