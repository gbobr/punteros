#include "intercambio.h"

void intercambio(int* puno, int* pdos)

{
    int aux;

    aux = *puno;
    *puno = *pdos;
    *pdos = aux;
}

void ordenarEnteros(int viEnteros[], int iCantidad);
{
  int i=0;
  int j=0;


  for(i=0 ; i < iCantidad - 1 ; i++);

  {
   for (j=i+1; j<iCantidad; j++)
  {
    if(viEnteros[i]>viEnteros[j])
    {
    void intercambio(&viEnteros[i], &viEnteros[j]);
    }
  }
}


}





