#include <iostream>
#include "exceptions.hpp"
#include <vector>
#include <stdexcept>
#include <new>

void outOfRangeEjemplo() {
    std::vector<int> myVector(5);
    // Intenta acceder a un elemento fuera de los límites del vector
    myVector.at(10);
}

void invalidArgumentEjemplo(int value) {
    if (value <= 0) {
        // Lanza una excepción si se proporciona un argumento inválido
        throw std::invalid_argument("Value must be greater than 0");
    }
}

void domainErrorEjemplo(double value) {
    // Lanza una excepción si se proporciona un valor inválido para la función sqrt
    if (value < 0) {
        throw std::domain_error("La raiz cuadrada no esta definida para numeros negativos");
    }
}

// Función principal del programa
int main() {
    // Se utiliza un bloque try para capturar excepciones que puedan ocurrir en su interior
    try {
        // Lanzamiento de una instancia de la excepción MyException
        throw MyException();
    }
    // Captura de cualquier excepción derivada de std::exception por referencia
    catch (std::exception& e) {
        // Impresión del mensaje de error utilizando el método what() de la excepción capturada
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        outOfRangeEjemplo();
    } catch (const std::out_of_range& e) {
        std::cout << "Se obtuvo una excepcion de tipo out_of_range: " << e.what() << std::endl;
    }

    try {
        invalidArgumentEjemplo(-5);
    } catch (const std::invalid_argument& e) {
        std::cout << "Se obtuvo una excepcion de tipo invalid_argument: " << e.what() << std::endl;
    }

    try {
        domainErrorEjemplo(-1);
    } catch (const std::domain_error& e) {
        std::cout << "Se obtuvo una excepcion de tipo domain_error: " << e.what() << std::endl;
    }

    return 0;
}