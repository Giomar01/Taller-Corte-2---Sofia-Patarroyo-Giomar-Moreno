#ifndef Estudiante.h
#define estudiante.h

#include "Persona.h"

class Student : public Person{

    private:
    int Code;
    int semester;
    double Average;
};
#endif