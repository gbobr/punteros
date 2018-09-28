#include "intercambio.h"

void intercambio(int* p, int* i)
{
  int aux;
  aux=*p;
  *p=*i;
  *i=aux;

}

void ordenarEnteros(int viEnteros[], int iCantidad){
  int i,ordenado=0;

  while (!ordenado) {
    ordenado=1;

    for(i=0; i<iCantidad;i++){
        if(viEnteros[i]<viEnteros[i+1]){
          ordenado=0;
          intercambio(&viEnteros[i],&viEnteros[i+1]);
        }
      }
    }

}
