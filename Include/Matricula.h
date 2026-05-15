#ifndef MATRICULA_H
#define MATRICULA_H

#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Curso.h"

class Tuition{

    private:
    Student* student;
    Course* course;
    std::string State;
    double FinalNote;

    public:
    /**
     * @brief Constructor de la clase Matricula
     */
    Tuition(Student* student, Course* curso);

    /**
     * @brief Destructor de la clase Matricula
     */
    ~Tuition();

    /**
     * @brief Obtiene el estudiante
     */
    Student* getStudent();

    /**
     * @brief Obtiene el curso
     */
    Course* getCourse();
    /**
     * @brief Obtiene el estado de la matricula
     */
    std::string getState();

    /**
     * @brief Obtiene la nota final
     */
    double getFinalnote();

    /**
     * @brief Modifica el estado de la matricula
     */
    void setState(std::string estado);

    /**
     * @brief Modifica la nota final
     */
    void setFinalnote(double notaFinal);

    /**
     * @brief Muestra la informacion de la matricula
     */
    void mostrarInformacion();
};
#endif