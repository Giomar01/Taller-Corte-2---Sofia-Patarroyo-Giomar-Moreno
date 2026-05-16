#include <iostream>
#include "Estudiante.h"
#include "Profesor.h"
#include "Curso.h"
#include "Matricula.h"

int main (){
    int opcion;
    const int MAX = 50;

    Student* Students[MAX];
    Teacher* Teachers[MAX];
    Course* Courses[MAX];
    Tuition* Tuitions[MAX];

    int estudianteCount = 0;
    int profesorCount = 0;
    int cursoCount = 0;
    int matriculaCount = 0;
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
            case 1: {
                std::string Name, Lastname;
            int Age, Document, Semester, Code;
            double Average;

            std::cout << "Nombre: ";
            std::cin >> Name;
            std::cout << "Apellido: ";
            std::cin >> Lastname;
            std::cout << "Edad: ";
            std::cin >> Age;
            std::cout << "Documento: ";
            std::cin >> Document;
            std::cout << "Codigo: ";
            std::cin >> Code;
            std::cout << "Semestre: ";
            std::cin >> Semester;
            std::cout << "Promedio: ";
            std::cin >> Average;

            Students[estudianteCount] =
                new Student(Name, Lastname, Age, Document, Code, Semester, Average);

            estudianteCount++;
                break;
            }
            case 2:{

            std::string Name, Lastname, Specialty;
            int Age, Document;
            double Salary;

            std::cout << "Nombre: ";
            std::cin >> Name;
            std::cout << "Apellido: ";
            std::cin >> Lastname;
            std::cout << "Edad: ";
            std::cin >> Age;
            std::cout << "Documento: ";
            std::cin >> Document;
            std::cout << "Especialidad: ";
            std::cin >> Specialty;
            std::cout << "Salario: ";
            std::cin >> Salary;

            Teachers[profesorCount] =
                new Teacher(Name, Lastname, Age, Document, Specialty, Salary);

            profesorCount++;
            
                
                break;
            }
            case 3:{
            int Code, Credits;
            std::string Name;

            std::cout << "Codigo curso: ";
            std::cin >> Code;
            std::cout << "Nombre curso: ";
            std::cin >> Name;
            std::cout << "Creditos: ";
            std::cin >> Credits;

            Courses[cursoCount] = new Course(Code, Name, Credits);

            cursoCount++;
            break;
            }
            case 4:{

            if (estudianteCount == 0 || cursoCount == 0) {
                std::cout << "No hay estudiantes o cursos registrados.\n";
                continue;
            }

            int estIndex, curIndex;

            std::cout << "Indice estudiante (0 - " << estudianteCount - 1 << "): ";
            std::cin >> estIndex;

            std::cout << "Indice curso (0 - " << cursoCount - 1 << "): ";
            std::cin >> curIndex;

            Tuitions[matriculaCount] =
                new Tuition(Students[estIndex], Courses[curIndex]);

            matriculaCount++;
            break;
            }
            case 5:{
            for (int i = 0; i < estudianteCount; i++) {
            std::cout << "\n[" << i << "] ";
            Students[i]->mostrarInformacion();
            }
             break;
            }
             case 6: {
            for (int i = 0; i < profesorCount; i++) {
                std::cout << "\n[" << i << "] ";
                Teachers[i]->mostrarInformacion();
            }
            break;
            }

            case 7: {
            for (int i = 0; i < cursoCount; i++) {
                std::cout << "\n[" << i << "] ";
                Courses[i]->mostrarInformacion();
            }
            break;
            }

            case 8: {
            for (int i = 0; i < matriculaCount; i++) {
                std::cout << "\n[" << i << "] ";
                Tuitions[i]->mostrarInformacion();
            }
            break;
            }

            case 9:
            std::cout << "Saliendo del sistema...\n";
            break;

            default:
            std::cout << "Opcion invalida.\n";
            break;
        }

    } while(opcion != 9);

    return 0;
}
