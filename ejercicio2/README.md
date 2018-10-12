# Ejercicio 2

Realice un programa que reciba por teclado una lista de elementos separados por coma.

Por ejemplo:

```
huevos, leche, harina, jamon, queso, salame
```

Y utilizando aritmética de punteros genere la siguiente salida:

```
huevos, leche, harina, jamon, queso, salame
leche, harina, jamon, queso, salame
harina, jamon, queso, salame
jamon, queso, salame
queso, salame
salame
```

## Aclaraciones
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
