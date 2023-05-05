## Documentación

Este código define una excepción personalizada llamada MyException que hereda de la clase base std::exception. Esta excepción se puede utilizar en programas en C++ para manejar errores específicos del usuario o para personalizar los mensajes de error.

El código está dividido en dos archivos:

### Exceptions.hpp
Este archivo de encabezado define la clase MyException, que hereda de la clase std::exception. Se declara el método what() que sobrescribe el método what() de la clase base std::exception. El método what() devuelve una cadena de caracteres constante que contiene el mensaje de la excepción personalizada.

### Exceptions.cpp
Este archivo contiene la implementación del método what() de la clase MyException. El método what() devuelve una cadena de caracteres constante que contiene el mensaje de la excepción personalizada. En este caso, el mensaje es "My custom exception".

### Uso de la clase MyException

Para utilizar la excepción personalizada en un programa en C++, incluya el archivo de encabezado exceptions.hpp y lance la excepción utilizando la instrucción throw. Cuando se lanza la excepción MyException, el programa imprimirá el mensaje de error personalizado: "My custom exception".
  
 ## Como ejecutar el programa

```console 
g++ -o program.exe exceptions.cpp main.cpp
```

El comando anterior crea un ejecutable llamado program.exe.

```console 
./program.exe
```
