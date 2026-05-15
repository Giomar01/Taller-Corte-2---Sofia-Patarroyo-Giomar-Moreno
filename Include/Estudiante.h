#ifndef Estudiante.h
#define Estudiante.h

#include "Persona.h"
/**
 * @class clase estudiante derivada de persona.
 * @brief
 */
class Student : public Person{

    private:
    int Code;
    int Semester;
    double Average;

    public:

    // Constructor
    Student (std::string Name, std::string Surname, int Age, int Document, int Code, int Semester, double Average);

};
#endif