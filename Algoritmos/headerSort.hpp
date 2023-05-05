/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/**
 * @file header_sort.hpp
 * @brief Este archivo contiene las declaraciones de las funciones de ordenamiento.
 * @author Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023
 * @date 2023-04-30
 */

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

/**
 * @brief Realiza el ordenamiento de un array utilizando el algoritmo Bubble Sort.
 * @param arr[] Array de enteros que se desea ordenar.
 * @param n Tamaño del array.
 */
void bubbleSort(int arr[], int n);

/**
 * @brief Realiza el ordenamiento de un array utilizando el algoritmo Selection Sort.
 * @param arr[] Array de enteros que se desea ordenar.
 * @param n Tamaño del array.
 */
void selectionSort(int arr[], int n);

/**
 * @brief Realiza el ordenamiento de un array utilizando el algoritmo Insertion Sort.
 * @param arr[] Array de enteros que se desea ordenar.
 * @param n Tamaño del array.
 */
void insertionSort(int arr[], int n);

/**
 * @brief Realiza el ordenamiento de un array utilizando el algoritmo Quick Sort.
 * @param arr[] Array de enteros que se desea ordenar.
 * @param low Índice inferior del subarray a ordenar.
 * @param high Índice superior del subarray a ordenar.
 */
void quickSort(int arr[], int low, int high);

#endif /* HEADER_SORT_HPP */
