#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char* argv[])
{

    char* pepon;
    char* aux;
    char palabra[100];
    gets(palabra);
    pepon = palabra;
    printf("\n#SALIDA#\n");
    printf("%s\n", pepon);
     for (pepon = palabra; *pepon != '\0'; pepon++)
        {
        if(*pepon == ',')
        {
            aux = pepon;
             aux = aux+2;
            printf("%s\n", aux);
        }
     }

     return 0;
}
