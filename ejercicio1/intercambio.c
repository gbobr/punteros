#include "intercambio.h"


void intercambio(int* pi1, int* pi2)
{
    int aux;
     aux = *pi1;
    *pi1 = *pi2;
    *pi2 = aux;
}


void ordenarEnteros(int viEnteros[], int iCantidad)
{
    int k=0, i;
    while(k==0)
    {
        iCantidad-=1;
        for(i=0 ; i < iCantidad; i++)
        {
            if (viEnteros[i] > viEnteros[i+1])
                intercambio(&viEnteros[i], &viEnteros[i+1]);
        }
        if (iCantidad == 0)
            k=1;

    }
}
