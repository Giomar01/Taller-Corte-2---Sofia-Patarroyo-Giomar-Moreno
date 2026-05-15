#ifndef Persona.h
#define Persona.h

#include <iostream>
#include <string>

/**
 * @class Person.
 * @brief Clase abstracta base del sistema.
 */

 class Person{
    
    private:
    std::string Name, Surname;
    int Age, CC;

    public:
    
    Person (std::string Name, std::string Surname, int Age, int CC){
        this->Name=Name;
        this->Surname==Surname;
        this->Age=Age;
        this->CC=CC;
    }

    virtual ~Person();

    std::string getname(){
        return this->
    }

 };

#endif