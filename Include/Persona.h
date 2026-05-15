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
    int Age, Document;

    public:
    
    Person (std::string Name, std::string Surname, int Age, int Document){
        this->Name=Name;
        this->Surname==Surname;
        this->Age=Age;
        this->Document=Document;
    }

    virtual ~Person();

    std::string getname(){
        return this->Name;
    }
    std::string getSurname(){
        return this->Surname;
    }
    int getAge(){
        return this->Age;
    }
    int getDocument(){
        return this->Document;
    }


    virtual void mostrarInformacion() =0;

 };

#endif