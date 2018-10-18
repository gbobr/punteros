# Ejercicio 3

El programa principal de este ejercicio almacena información de los participantes de un juego en un vector de estructuras de tipo ```c struct jugador```

Teniendo en cuenta que:
* Cada posición del vector representa a un jugador distinto.
* El ID del jugador coincide con la posición en el vector de jugadores.
* Por simplicidad el programa trabaja exclusivamente con partidas de 4 jugadores

Ordene los jugadores por puntaje de mayor a menor y muestre el listado siguiendo el formato que se indica a continuación, de modo que para un lote de datos de entrada

```
Berserker
97
Nevermore
100
r4t0
71
Juan
150
```

La salida sea:

```
ID, Nombre, Puntaje
3, Juan, 150
1, Nevermore, 100
0, Berserker, 97
2, r4t0, 71
```

## Aclaraciones

Para la resolución de este ejercicio NO SE PERMITE:
* Ordenar el vector original
* Copiar estructuras (Es decir no se puede hacer ```c jug = jugadores[i]; ```)
* Alterar los datos contenidos por las estructuras

El archivo main.c contiene un esqueleto del programa principal, asegurese de que luego de la linea 

```c
printf("\n#SALIDA#\n");
```

La salida del programa coincida **exactamente** con la esperada con el lote de prueba.

## Entrega
Realice un fork del presente repositorio desde su cuenta de github, complete el código y envíe un pull request a este repositorio para ser corregido.
Todas las correcciones y comentarios serán realizados en el pull request.

### Requisitos de aprobación
* El código debe compilar sin errores ni warnings al compilarse con GCC 5.4.0 bajo Ubuntu 16.04.10
* Debe pasar satisfactoriamente el lote de prueba que se encuentra en test/input.txt generando la salida que puede verse en test/expected.txt
