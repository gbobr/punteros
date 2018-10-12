#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int k = 0;
    char *p, *p2, cadena[50];

    printf("Ingrese lista de elementos separados por coma: \n");
    gets(cadena);
//ESCRIBA AQUI ARRIBA EL C�DIGO DE ENTRADA SALIDA PARA OBTENER LOS DATOS SOLICITADOS EN EL ENUNCIADO

    printf("\n#SALIDA#\n");

//A PARTIR DE ESTE PUNTO LA SALIDA DEL PROGRAMA DEBE COINCIDIR EXACTAMENTE CON EL LOTE DE PRUEBA

    p  = cadena;
    p2 = cadena;
    while(k==0)
    {

        for(p; *p != 0; p++)
        {
            if(*(p-1) == ',' && *p == ' ')
                p++;
            printf("%c",*p);
        }
        printf("\n");
        while (*p2 != ',' && *p2 != '\0')
            p2++;
        if (*p2 == '\0')
            k=1;
        else
        {
             p2++;
             p = p2;
        }
    }
        return 0;
}
