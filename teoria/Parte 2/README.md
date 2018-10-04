#Punteros II - Aritmética de punteros
##Consideraciones sintácticas
A continuación vamos a hablar de algunas cuestiones sintácticas del lenguaje C y para ello es deseable que utilicemos la terminología apropiada.
Por ese motivo, antes de empezar quiero aclarar el concepto de 'identificador'.

Aquello que conocemos como 'nombre' de una variable, vector, puntero o función, en términos sintácticos se conoce como 'identificador'.

La diferencia entre ambos términos es tan sutil que iremos directamente a un ejemplo para ilustrarla.

Si quisieramos describir en términos sintácticos, como se expresa la declaración de una variable en C podriamos decir que se compone por un tipo de dato, seguido por un identificador, la linea de código podría terminar ahí u opcionalmente continuar con un operador de asignación y una constante entera.

Es decir que la siguiente linea:

```c
int a = 5;
```

En terminós semánticos el tipo de dato int expresa que la declaración corresponde a una variable entera, el identificador 'a' representa al 'nombre' de la variable y la constante entera que estoy utilizando es el valor 5

Cuando hablamos de identificador, estamos hablando netamente de la función que este cumple sintácticamente y no de su significado.

Entonces, para el siguiente código:

```c
void mi_funcion();
int a = 5;
int b[50];
int *p;
```

Tanto mi_funcion, como a, b y p son, en términos sintácticos, identificadores. Sin embargo se trata, semánticamente de cosas muy distintas: mi_funcion es una función, a es una variable, b es un vector y c es un puntero.

Semánticamente, la presencia de un identificador en el código tendrá distinto significado según a que hace referencia ese identificador

La presencia de un identificador en el código tendrá diferentes efectos de acuerdo al significado semántico del mismo.

A saber:

token | funcion sintactica | funcion semantica | efecto en el código
--- | --- | --- | ---
a | identificador | nombre de variable | *valor* contenido por la variable
b | identificador | nombre de vector | *posición* de memoria de comienzo del vector
p | identificador | nombre de puntero | *posición* de memoria a la que apunta este puntero (es decir, el *valor* del puntero)
mi_funcion | identificador | nombre de funcion | *posición* de memoria del comienzo del código de la función en el stack

Vemos que tanto en el caso del puntero como del vector (y también de la función, pero no entraremos en detalle ya que escapa a nuestro alcance) el efecto de colocar el identificador en cualquier parte del código es muy similar, ambos son posiciones de memoria.

Esto quiere decir que a los fines prácticos del lenguaje, tanto el vector como el puntero se comportan de manera muy similar y en muchos casos hasta se podría decir que son equivalentes.

```c
p = &a; //Si quiero apuntar p a la dirección de a debo usar el operador &.
p = b; //Como b es una dirección, debo asignarlo directamente

//Las siguientes expresiones son equivalentes
p[1] = 5;
b[1] = 5;

```c

Más aun, si tenemos dos funciones:

```c
void mi_funcion_con_vectores(int [], int);
void mi_funcion_con_punteros(int *, int);
```

Las siguientes llamadas son completamente válidas

```c
mi_funcion_con_vectores(b, 50);
mi_funcion_con_punteros(b, 50);
mi_funcion_con_vectores(p, 50);
mi_funcion_con_punteros(p, 50);
```

##Aritmética de punteros

En C, puedo realizar operaciones matemáticas con las posiciones de memoria a las que apuntan los punteros.

```c
p=b;

//Las siguentes operaciones tienen todas exactamente el mismo efecto
b[1] = 5;
*(b+1) = 5;
p[1] = 5;
*(p+1) = 5;
//Lo siguiente también es válido y tiene el mismo efecto
p=b+1;
*p=5;
//También...
p=b;
p++;
*p=5
```

Por este motivo el compilador precisa saber el *tipo de dato* al que apuntan los punteros, ya que, no todos los tipos de dato ocupan el mismo espacio en memoria.

Anteriormente hablamos de la similaridad sintactica de los punteros con los vectores. Para ser más exactos, un vector es sintácticamente equivalente a un puntero constante y ahí es donde radica una de las diferencias fundamentales entre un vector y un puntero.

Es decir que una de las diferencias entre un vector y un puntero, radica en que no puedo cambiar la posición a la que apunta el identificador del vector, pero si puedo modificar la del puntero. Es decir que puedo hacer ```c p=&a``` pero no ```c b=&a```

Esta carácterística es muy práctica a la hora de recorrer vectores.
en lugar de

```c
int i;
char nombre[32];
scanf("%s", nombre);

for(i=0; i<32 && nombre[i] != '\0'; i++) {
	printf("\nLetra: %c",nombre[i];
}
```

Podría expresar lo mismo como
```c
int p;
char nombre[32];
scanf("%s", nombre);

for(p=nombre; *p != '\0'; p++) {
	printf("\nLetra: %c",*p);
}
```
