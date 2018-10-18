#include<stdio.h>
#include<stdlib.h>

  int main(int argc, char* argv[])
{
 //ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
 	printf("\n#SALIDA#\n");
     char elemento [100];
    char* punt;
    int punt_aux = 0;

    gets(elemento);
 //ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
     for(punt = elemento;*punt != 0; punt++)
    {
        if(*punt == ','){
            punt_aux = punt;
            punt_aux = punt_aux+2;
            printf("%s\n", punt_aux);
        }
    }
  	return 0;
}
