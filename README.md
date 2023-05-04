# Análisis detallado de complejidad de algoritmos de ordenamiento

Este documento describe la complejidad en tiempo de cada algoritmo de ordenamiento implementado en el proyecto utilizando la notación Big O, proporcionando detalles sobre cómo se obtiene la complejidad.

## Bubble Sort

Bubble Sort es un algoritmo de ordenamiento por comparación que opera iterando sobre el array y comparando elementos adyacentes. Si los elementos están en el orden incorrecto, se intercambian. El algoritmo repite este proceso hasta que no se realicen más intercambios.

En el peor y caso promedio, Bubble Sort realiza dos bucles anidados. El bucle externo se ejecuta (n-1) veces y el bucle interno se ejecuta (n-1) veces en la primera iteración, (n-2) en la segunda, y así sucesivamente. La suma de estas iteraciones es:

(n-1) + (n-2) + ... + 1 = n(n-1)/2

Por lo tanto, la complejidad en tiempo es O(n^2).

En el mejor caso, cuando el array ya está ordenado, Bubble Sort puede ser optimizado para detenerse después de la primera iteración sin intercambios. En este caso, la complejidad en tiempo es O(n).

## Selection Sort

Selection Sort divide el array en dos partes: la parte ordenada y la parte no ordenada. En cada iteración, encuentra el elemento mínimo en la parte no ordenada y lo coloca al final de la parte ordenada. Este proceso se repite hasta que toda la parte no ordenada queda vacía.

Al igual que Bubble Sort, Selection Sort realiza dos bucles anidados. El bucle externo se ejecuta (n-1) veces y el bucle interno se ejecuta (n-1) veces en la primera iteración, (n-2) en la segunda, y así sucesivamente. La suma de estas iteraciones es:

(n-1) + (n-2) + ... + 1 = n(n-1)/2

Por lo tanto, la complejidad en tiempo de Selection Sort es O(n^2) en todos los casos (peor, promedio y mejor), incluso cuando el array ya está ordenado.

## Insertion Sort

Insertion Sort construye la solución final insertando un elemento a la vez en la posición correcta. Comienza con un solo elemento (considerado ordenado) y compara cada elemento sucesivo con los elementos anteriores, desplazándolos hacia la derecha hasta encontrar la posición correcta para el elemento actual.

En el peor caso y caso promedio, Insertion Sort también realiza dos bucles anidados. El bucle externo se ejecuta (n-1) veces y el bucle interno, en promedio, se ejecuta aproximadamente n/2 veces. La suma de estas iteraciones es:

(n-1) * (n/2)

Por lo tanto, la complejidad en tiempo es O(n^2).

En el mejor caso, cuando el array ya está ordenado, Insertion Sort solo necesita realizar una pasada a través del array, resultando en una complejidad en tiempo de O(n).

## Quick Sort

Quick Sort es un algoritmo de ordenamiento basado en la técnica de divide y conquista. Elige un elemento como pivote y particiona el array alrededor de este pivote, de manera que los elementos menores que el pivote se encuentren antes que los elementos mayores. Luego, aplica el mismo proceso de forma recursiva a las dos subpartes resultantes (elementos menores que el pivote y elementos mayores que el pivote).

La complejidad en tiempo de Quick Sort depende de cómo se elige el pivote y cómo se particiona el array:

En el mejor caso, si se elige un buen pivote, el array se divide en dos partes de igual tamaño en cada iteración. Esto resulta en una complejidad recursiva de O(log n), lo que lleva a una complejidad en tiempo total de O(n log n).

- En el caso promedio, incluso si las particiones no están perfectamente equilibradas, Quick Sort sigue siendo eficiente y la complejidad en tiempo es O(n log n).

- En el peor caso, si se elige el peor pivote (por ejemplo, el elemento más pequeño o el más grande) en cada iteración, el array no se divide de manera equilibrada, lo que resulta en una profundidad de recursión de O(n). Esto lleva a una complejidad en tiempo total de O(n^2).

Para reducir la probabilidad del peor caso, se pueden utilizar técnicas como la elección del pivote aleatoriamente, lo que en la práctica hace que Quick Sort sea un algoritmo de ordenamiento eficiente y de uso común.

## Include innecesarios en Stacktemplate.cpp

 No se necesita incluir la biblioteca <exceptions> porque la clase Stack utiliza la excepción std::out_of_range de la biblioteca estándar para manejar el caso en el que se intente eliminar un elemento de un stack vacío.

La excepción std::out_of_range es parte de la biblioteca estándar de C++ y se utiliza para representar errores cuando se accede a elementos fuera del rango válido. Esta excepción se utiliza comúnmente cuando se accede a elementos de un contenedor fuera de su rango válido. En este caso, se usa para manejar la situación en la que se intenta eliminar un elemento de un stack vacío.

Dado que la clase Stack utiliza la excepción std::out_of_range de la biblioteca estándar para manejar excepciones, no es necesario incluir la biblioteca <exceptions> explícitamente.
