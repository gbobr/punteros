#include "intercambio.h"
void intercambio(int* var1,int* var2)
{int varaux;
    varaux=*var1;
    *var1=*var2;
    *var2=varaux;
}
void ordenarEnteros(int vector[],int cantidad)
{
    int i, ordenado=0;
    while(ordenado==0){
        ordenado=1;
        for(i=0;i<cantidad-1;i++)
            if(vector[i]>vector[i+1]) {
                ordenado = 0;
                intercambio(&vector[i],&vector[i+1]);
            }
    }


}
