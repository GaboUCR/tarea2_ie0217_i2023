#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <exception>

// Declaración de la clase MyException que hereda de la clase std::exception
class MyException : public std::exception {
public:
    // Declaración del método what() que devuelve una cadena de caracteres constante
    // Este método sobrescribe el método what() de la clase base std::exception
    const char* what() const throw();
};

#endif
