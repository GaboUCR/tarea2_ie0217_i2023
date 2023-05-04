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

#include <iostream>
#include <vector> 
#include <algorithm>
// #include <stdexcept> este archivo no era necesario incluirlo
// Para generar excepciones se utiliza la libreria estandar
#include <functional>
#include <string>

// Define una clase de plantilla 'Stack' que acepta un tipo de dato generico 'T'
template<typename T>
class Stack {
    private:
        // Variable miembro que almacena los elementos del stack en un vector
        std::vector<T> data_;

    public:
        // Método que añade un elemento al final del stack
        void push(T value) {
            data_.push_back(value);
        }

        // Método que elimina y devuelve el último elemento del stack
        T pop() {
            if (data_.empty()) {
                throw std::out_of_range("Stack is empty"); // Lanza una excepción si el stack está vacío
            }
            T value = data_.back(); // Obtiene el último elemento del stack
            data_.pop_back(); // Elimina el último elemento del stack
            return value; // Devuelve el valor eliminado
        }

        // Método que elimina todos los elementos del stack
        void clear() {
            data_.clear();
        }

        // Método que devuelve 'true' si el stack está vacío y 'false' en caso contrario
        bool empty() const {
            return data_.empty();
        }

        // Método que devuelve el tamaño actual del stack
        std::size_t size() const {
            return data_.size();
        }

        // Método que aplica una función a cada elemento del stack
        void foreach(const std::function<void(T&)>& func) {
            std::for_each(data_.begin(), data_.end(), func);
        }
};

// Función principal
int main() {
    Stack<int> s; // Crea una instancia de Stack con tipo de dato 'int'
    s.push(2021);
    s.push(2054);
    s.push(6524); // Añade elementos al stack

    std::cout << "Stack size: " << s.size() << std::endl; // Muestra el tamaño del stack

    // Aplica una función lambda a cada elemento del stack y muestra su valor
    s.foreach([](int& value) {
        std::cout << "Value: " << value << std::endl;
    });

    try {
        // Bucle que extrae y muestra los elementos del stack hasta que esté vacío
        while (!s.empty()) {
            int value = s.pop();
            std::cout << "Popped value: " << value << std::endl;
        }
        std::cout << "Stack size: " << s.size() << std::endl; // Muestra el tamaño del stack
    } catch (const std::exception& e) { // Captura la excepción en caso de que el stack esté vacío
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Nueva instancia con tipo string
    Stack<std::string> s_str; // Crea una instancia de Stack con tipo de dato 'String'
    s_str.push("Hola ");
    s_str.push("Ana ");
    s_str.push("Como esta?"); // Añade elementos al stack

    // Aplica una función lambda a cada elemento del stack y muestra su valor
    s_str.foreach([](std::string& value_str) {
        std::cout << "Value: " << value_str << std::endl;
    });   

    // Sentencia que dispara una excepcion out of range.

    // s_str.pop();
    // s_str.pop();
    // s_str.pop();
    // s_str.pop();
    return 0; // Finaliza la ejecución del programa
}
