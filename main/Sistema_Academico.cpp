#include <iostream>
#include "include/Estudiante.h"
#include "include/Profesor.h"
#include "include/Curso.h"
#include "include/Matricula.h"

int main (){
    int opcion;
    do {
        std::cout << "\n===== SISTEMA ACADEMICO =====\n";
        std::cout << "1. Registrar estudiante\n";
        std::cout << "2. Registrar profesor\n";
        std::cout << "3. Crear curso\n";
        std::cout << "4. Matricular estudiante\n";
        std::cout << "5. Mostrar estudiantes\n";
        std::cout << "6. Mostrar profesores\n";
        std::cout << "7. Mostrar cursos\n";
        std::cout << "8. Mostrar matriculas\n";
        std::cout << "9. Salir\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
        }

    } while(opcion != 9);

    return 0;
}
