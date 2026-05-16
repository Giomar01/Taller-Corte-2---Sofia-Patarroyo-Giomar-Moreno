#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

/**
 * @class Person.
 * @brief Clase abstracta base del sistema.
 */

 class Person{
    
    private:
    std::string Name, Lastname;
    int Age, Document;

    public:
    /**
     * @brief Constructor de la clase Person.
     * @param Name Nombre de la persona.
     * @param Surname Apellido de la persona.
     * @param Age Edad de la persona.
     * @param Document Documento de la persona.
     */
    Person (std::string Name, std::string Lastname, int Age, int Document);

    virtual ~Person();

    /**
     * @brief Obtiene el nombre de la persona.
     * @return Nombre de la persona.
     */
    std::string getname();
    /**
     * @brief Obtiene el apellido de la persona.
     * @return Apellido de la persona.
     */
    std::string getLastname();
    /**
     * @brief Obtiene la edad de la persona.
     * @return Edad de la persona.
     */
    int getAge();
     /**
     * @brief Obtiene el documento de la persona.
     * @return Documento de la persona.
     */
    int getDocument();

    /**
     * @brief Modifica el nombre de la persona.
     * @param Name Nuevo nombre.
     */
    void setName(std::string Name);
     /**
     * @brief Modifica el apellido de la persona.
     * @param Lastname Nuevo apellido.
     */
    void setLastname(std::string Lastname);
     /**
     * @brief Modifica la edad de la persona.
     * @param Age Nueva edad.
     */
    void setAge(int Age);
    /**
     * @brief Modifica el documento de la persona.
     * @param Document Nuevo documento.
     */
    void setDocument(int Document);
     /**
     * @brief Metodo virtual puro para mostrar informacion.
     */
    virtual void mostrarInformacion() =0;

 };

#endif