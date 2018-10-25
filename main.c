#include<stdio.h>
#include<stdlib.h>
///Sakurina(Agustina Brito) & Pipistrel0 (Gianluca Ciccarelli)
int main(int argc, char* argv[])
{
    char vec[100];
    char *pun;
    gets(vec);
    pun = vec;
//ESCRIBA AQUI ARRIBA EL CÓDIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO

	printf("\n#SALIDA#\n");
    printf("%s\n",vec);
    while(*pun!=0)
    {
        for(pun=vec; *pun != 0; pun++ ){
            if(*pun==','){
                pun++;
                printf("%s\n",pun);
            }
        }

    }


//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

	return 0;
}
