#include "intercambio.h"
void intercambio(int* pi1, int* pi2)
{
    int aux;

   aux=*pi1;
   *pi1=*pi2;
   *pi2=aux;


}
void ordenarEnteros(int viEnteros[], int iCantidad)
{
    int i, k =1;
    int aux;
    while (k)
    {
        k = 0;
        for (i=0; i<iCantidad-1; i++)
        {
            if(viEnteros[i] > viEnteros[i+1])
            {
                k=1;
                intercambio(&viEnteros[i], &viEnteros[i+1]);
            }
        }
    }
}



