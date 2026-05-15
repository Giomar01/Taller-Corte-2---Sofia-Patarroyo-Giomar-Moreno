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
    
    /**
     * @brief Obtiene el numero de codigo
     * @return codigo de la persona
     */
    int getCode();
    /**
     * @brief Obtiene el semestre en que esta el estudiante.
     * @return semestre en el que esta.
     */
    int getSemester();
    /**
     * @brief obtiene el promedio del estudiante
     * @return promedio de la persona
     */
    double getAverage();

    /**
     * @brief modifica el codigo de la persona.
     * @param Code nuevo codigo
     */
    void setCode(int Code);

    /**
     * @brief modifica el numero de semestre.
     * @param Semester nuevo semestre.
     */
    void setSemester(int Semester);

    /**
     * @brief modifica el promedio de la persona.
     * @param Average nuevo promedio.
     */
    void setAverage(double Average);

    //metodo propio
    void inscribirCurso();

    //polimorfismo

    void mostrarInformacion() override; 
};
#endif