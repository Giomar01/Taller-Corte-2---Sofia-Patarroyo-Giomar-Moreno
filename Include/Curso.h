#ifndef CURSO_H
#define CURSO_H

#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Profesor.h"
/**
 * @class Curso
 * @brief Clase que representa un curso academico
 */

class Course {
    private: 

    int coursecode;
    std::string coursename;
    int credits;

    // Constructor

    public:

    Course (int coursecode, std::string coursename, int credits);
};
#endif