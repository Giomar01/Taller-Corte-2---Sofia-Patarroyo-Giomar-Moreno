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
    Teacher(std::string Name, std::string Lastname,int Age, int Document, std::string Specialty, double Salary);

    //Getters 

    /**
     * @brief Obtiene la Specialty del profesor
     * @return Specialty del profesor
     */
    std::string getSpecialty();

     /**
     * @brief Obtiene el Salary del profesor
     * @return Salary del profesor
     */
   
     double getSalary();

    //Setters  

      /**
     * @brief Modifica la Specialty del profesor
     * @param Specialty Nueva Specialty
     */
     void setSpecialty(std::string Specialty);

      /**
     * @brief Modifica el salary del profesor
     * @param salary Nuevo salary
     */
     void setSalary(double salary);

     // Metodo propio
     void asignarCurso();

     // Polimorfismo
      void mostrarInformacion() override;

};
#endif