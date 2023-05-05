#include <iostream>
#include <ctime>
#include <cstdlib>
#include "headerSort.hpp"

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void testSortingAlgorithms() {
    const int ARRAY_SIZE = 10;

    srand(time(0));
    int originalArray[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        originalArray[i] = rand() % 100;
    }

    int tempArray[ARRAY_SIZE];

    std::cout << "Original array: ";
    printArray(originalArray, ARRAY_SIZE);

    // Bubble Sort
    std::copy(originalArray, originalArray + ARRAY_SIZE, tempArray);
    std::cout << "Bubble Sort:" << std::endl;
    std::cout << "Before: ";
    printArray(tempArray, ARRAY_SIZE);
    bubbleSort(tempArray, ARRAY_SIZE);
    std::cout << "After:  ";
    printArray(tempArray, ARRAY_SIZE);
    std::cout << std::endl;

    // Selection Sort
    std::copy(originalArray, originalArray + ARRAY_SIZE, tempArray);
    std::cout << "Selection Sort:" << std::endl;
    std::cout << "Before: ";
    printArray(tempArray, ARRAY_SIZE);
    selectionSort(tempArray, ARRAY_SIZE);
    std::cout << "After:  ";
    printArray(tempArray, ARRAY_SIZE);
    std::cout << std::endl;

    // Insertion Sort
    std::copy(originalArray, originalArray + ARRAY_SIZE, tempArray);
    std::cout << "Insertion Sort:" << std::endl;
    std::cout << "Before: ";
    printArray(tempArray, ARRAY_SIZE);
    insertionSort(tempArray, ARRAY_SIZE);
    std::cout << "After:  ";
    printArray(tempArray, ARRAY_SIZE);
    std::cout << std::endl;

    // Quick Sort
    std::copy(originalArray, originalArray + ARRAY_SIZE, tempArray);
    std::cout << "Quick Sort:" << std::endl;
    std::cout << "Before: ";
    printArray(tempArray, ARRAY_SIZE);
    quickSort(tempArray, 0, ARRAY_SIZE - 1);
    std::cout << "After:  ";
    printArray(tempArray, ARRAY_SIZE);
    std::cout << std::endl;
}
