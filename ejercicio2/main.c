#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char* p;
    char* aux;
    char palabra[100];
    gets(palabra); /// leo palabra
    ///printf("%s", palabra);
    printf("\n#SALIDA#\n");
    p = palabra;
    ///p = p+1;
    ///printf("%s\n", p);
    printf("%s\n", p);


    for (p = palabra; *p != '\0'; p++){ ///p = p + 1
        if(*p == ','){
            aux = p;
             aux = aux+2;
            printf("%s\n", aux);
        }

    }
//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO
//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
