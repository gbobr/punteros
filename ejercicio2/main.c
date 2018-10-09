#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char palabra [100];
    char* p;
    int pAux = 0, comas = 0;
    int i = 0, band = 1;

    gets(palabra);
//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO

    for(p = palabra;*p != 0; p++){
        if(*p == ','){
            comas++;
        }
    }
	printf("\n#SALIDA#\n");
    p = palabra;

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

    printf("%s\n", p);
    while(comas != 0){
        comas--;
        band = 1;
        i = pAux;
        while(*(p+i) != 0){
            if(*(p+i) == ',' && band){
                i+=2; /// saltea la coma y el espacio
                pAux = i;
                band = 0;
            }
            if(band == 0){
                printf("%c", *(p+i));
            }
            i++;
        }
        printf("\n");
    }

	return 0;
}
