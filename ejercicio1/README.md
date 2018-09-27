# Ejercicio 1

## Parte 1
Implemente una función que intercambie el contenido de dos punteros a entero y cumpla con el prototipo
```c
void intercambio(int*, int*);
```
## Parte 2
Implemente una función que ordene de menor a mayor un vector de enteros y cumpla con el prototipo:

```c
void ordenarEnteros(int viEnteros[], int iCantidad);
```

Utilice la función intercambio para realizar los intercambios de valores

## Aclaraciones
El archivo main.c contiene un programa principal que permite probar la función de ordenamiento, no lo modifique, escriba su código en el archivo intercambio.c

## Entrega
Realice un fork del presente repositorio desde su cuenta de github, complete el código y envíe un pull request a este repositorio para ser corregido.
Todas las correcciones y comentarios serán realizados en el pull request.

### Requisitos de aprobación
* El código debe compilar sin errores ni warnings al compilarse con GCC 5.4.0 bajo Ubuntu 16.04.10
* Debe pasar satisfactoriamente el lote de prueba que se encuentra en test/input.txt generando la salida que puede verse en test/expected.txt
