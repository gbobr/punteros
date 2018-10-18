#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char* argv[])
{
    char *puntero;
    char *a;
    char palabra[100];
    gets(palabra);
    puntero = palabra;
    printf("\n#SALIDA#\n");
    printf("%s\n", puntero);
     for (puntero = palabra; *puntero != '\0'; puntero++)
        {
        if(*puntero == ',')
        {
            a = puntero;
             a = puntero+2;
            printf("%s\n", a);
        }
     }
      return 0;
}
