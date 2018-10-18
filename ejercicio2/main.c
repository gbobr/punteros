#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
     char* p;
     char palabras [100];
     gets(palabras);
     p = palabras;
     int i;



//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO

	printf("\n#SALIDA#\n");

    printf("%s\n", p);

     for(p = palabras; *p != 0; p++)
        {
         if(*p == ','){
            printf("%s\n", p+2);
         }
     }


//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
