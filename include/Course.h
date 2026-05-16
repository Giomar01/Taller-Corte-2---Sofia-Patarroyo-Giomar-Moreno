#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Teacher.h"
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

     //Getters 

     /**
     * @brief Obtiene el codigo del curso
     * @return codigo del curso
     */

    int getCoursecode();


     /**
     * @brief Obtiene el nombre del curso
     * @return nombre del curso
     */

    std::string getCoursename();


    /**
     * @brief Obtiene los creditos del curso
     * @return creditos del curso
     */

    int getCredits();

    //Setters

      /**
     * @brief Modifica el codigo del curso
     * @param coursecode Nuevo codigo del curso
     */

     void setCoursecode( int coursecode);


    /**
     * @brief Modifica el nombre del curso
     * @param nombreCurso Nuevo nombre del curso
     */

    void setCoursename( std::string coursename);

       /**
     * @brief Modifica los creditos del curso
     * @param creditos Nueva cantidad de creditos
     */

    void setCredits( int credits);

       void mostrarInformacion();
};

#endif