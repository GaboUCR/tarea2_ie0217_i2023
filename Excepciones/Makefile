# Definir el compilador
CXX = g++

# Definir archivos a compilar
OBJ = exceptions.cpp main.cpp

# Objetivo por defecto
all: program run

# Compilar y enlazar el programa principal
program: $(OBJ)
	$(CXX) -o program.exe $(OBJ)

# Ejecutar el programa
run: program # Esta linea asegura que el target program se ejecuta antes que el target run
	./program.exe

# Regla para limpiar archivos objeto y ejecutables
clean:
	rm -f $(OBJ) $(TEST_OBJ) program.exe
