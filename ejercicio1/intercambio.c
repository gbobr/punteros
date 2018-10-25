#include "intercambio.h"

//Escriba aquí su código!
void intercambio(int* pi1, int* pi2)
{
    int aux;
    aux = *pi1;
    *pi1 = *pi2;
    *pi2 = aux;
}
void ordenarEnteros(int viEnteros[], int iCantidad)
{
   int i, n = iCantidad, j, aux;
    for (i=0; i<n-1; i++)
{
   for (j=i+1; j<n; j++)
  {
    if(viEnteros[i]>viEnteros[j])
    {
     intercambio(&viEnteros[i],&viEnteros[j]);
    }
  }
}
}
