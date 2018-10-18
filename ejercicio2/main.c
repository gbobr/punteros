#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{   printf("Ingrese palabras:\n ");
    char input[100];
    gets(input);
    char *check;
    check = input;
//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
    while(*check!=0)
    {
        for(check=input;*check!=0;check++)
        {
            if(*check==",")
            check++;
            printf("%s",check);
        }

    }
	printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
