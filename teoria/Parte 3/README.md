# Punteros III

## Punteros a estructuras

### Operador ->

Existe una notación especial para hacer referencia a los miembros de una estructura.
A saber:

```c
struct alumno_t {
	int promedio;
	int edad;
	char nombre[32];
}

struct alumno_t alumno;
struct alumno_t *p;
alumno.promedio = 7;
p=&alumno;
p->promedio = 9;
```

Es decir que cuando apunto un puntero a una estructura, puedo usar la notación ```->``` para acceder a sus miembros y no requiero utilizar el operador de indirección / desreferenciación ```*```

### Utilidad de los punteros a estructuras

Tal como mencionamos anteriormente los punteros son una herramienta muy importante a la hora de trabajar con estructuras grandes y funciones.
El pasaje de una estructura como parametro de una funcion, implica copiar todos los valores que lleva adentro, y esto es una operación muy costosa que en la mayoría de los casos quisieramos evitar.
Utilizar punteros para pasar las estructuras por referencia hace que lo que se pase a la función sea únicamente la dirección de la estructura en lugar de copiar todo su contenido.

## Vector de punteros

Puedo declarar un vector de punteros de la forma

```c
int* vecp[50];
```

Aquí estaría declarando 50 punteros a entero. Cada una de las posiciones del vector contendría la dirección de memoria de un entero.

De la misma manera puedo hacerlo con punteros a estructuras:

```c
struct alumno_t* vecp[50];
```

Esto es especialmente útil a la hora de ordenar un vector de estructuras ya que me ahorraría tener que copiar el contenido completo de las estructuras cuando tenga que realizar intercambios.
Por ejemplo:

```c
struct alumno_t alumnos[50];
struct alumno_t* indice_alumnos[50];
struct alumno_t* p;
struct alumno_t* fin;
struct alumno_t* aux;

//Supongamos que se ingresan los 50 alumnos, y luego...
for(i=0; i<50; i++) {
        indice_alumnos[i] = &alumnos[i];
}

while(!ordenado) {
        ordenado=1;
        for(i=0;i<50;i++){
                if(indice_alumnos[i]->promedio > indice_alumnos[i+1]->promedio) {
                        ordenado=0;
                        aux=indice_alumnos[i];
                        indice_alumnos[i]=indice_alumnos[i+1];
                        indice_alumnos[i+1]=aux;
                }
        }
}

```

**Importante:** Por ahora, siempre utilice notación de vectores para trabajar con vectores de punteros ya que para utilizar notación de punteros habría que usar punteros a punteros.
