# Punteros en C: cuando una variable tiene una dirección secreta

Este pequeño proyecto sirve para experimentar con **punteros en C** y entender cómo una variable puede ser “apuntada” desde otra parte del programa.

La idea es simple: en vez de guardar solo un valor, guardamos también la **dirección de memoria** donde vive ese valor.
Eso es exactamente lo que hace un puntero.

## ¿Qué hace este código?

```c
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    printf("Hello, World!\n");
    printf("*p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("*x = %d\n", x);
    return 0;
}
```

## Explicación rápida

* `int x = 10;`
  Crea una variable entera llamada `x` con el valor `10`.

* `int *p = &x;`
  Crea un puntero `p` que guarda la **dirección de memoria** de `x`.

* `printf("Hello, World!\n");`
  Solo para saludar. Porque todo buen experimento necesita un saludo elegante.

* `printf("*p = %d\n", p);`
  Aquí hay un detalle importante: `p` es una dirección, no un entero.
  Por eso, **lo correcto** para mostrarla sería `%p`, no `%d`.

* `printf("*p = %d\n", *p);`
  El operador `*` significa “dame el valor que está en esa dirección”.
  En este caso, imprime el valor de `x`, que es `10`.

* `printf("*x = %d\n", x);`
  Imprime directamente el valor de `x`.

## ¿Qué deberías esperar?

La salida será algo parecido a esto:

```c
Hello, World!
*p = 10
*x = 10
```

Pero si quieres mostrar la dirección de memoria del puntero correctamente, usa esto:

```c
printf("p = %p\n", (void *)p);
```

## Lo importante de este experimento

Este código ayuda a entender que:

* una variable tiene un valor,
* un puntero guarda una dirección,
* y con `*` puedes acceder al valor que está en esa dirección.

O dicho de forma más divertida:

> `x` es el tesoro,
> `p` es el mapa,
> y `*p` es abrir el cofre.

## Nota divertida pero útil

Si ves algo raro en la línea de `printf("*p = %d\n", p);`, no estás imaginando cosas:
**ahí se está imprimiendo una dirección con un formato que no corresponde**.
En C, ese tipo de detalles son los que convierten un programa en una aventura.

## Conclusión

Este repositorio es una buena base para practicar punteros, direcciones de memoria y desreferenciación en C.
Es un ejercicio pequeño, pero muy útil para empezar a pensar como piensa C: directo, simple y un poco implacable.