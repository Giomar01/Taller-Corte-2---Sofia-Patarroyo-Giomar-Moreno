#ifndef Profesor.h
#define Profesor.h

#include "Persona.h"

/**
 * @class Profesor
 * @brief Clase derivada de Persona
 */


class Teacher : public Person{

    private:
    std::string Specialty;
    double Salary;

    public:

    // Constructor
    Teacher(std::string Name,
             std::string Lastname,
             int Age,
             int Document,
             std::string Specialty,
             double Salary);


};
#endif