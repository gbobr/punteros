#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char* argv[])
{
    char *p;
    char *x;
    char cadena[100];
    gets(cadena);
    p = cadena;
    printf("\n#SALIDA#\n");
    printf("%s\n", p);
     for (p = cadena; *p != '\0'; p++)
        {
        if(*p == ',')
        {
            x = p;
             x = p+2;
            printf("%s\n", x);
        }
     }
      return 0;
}
