#include "../include/Profesor.h"

//constructor
Teacher::Teacher(std::string Name, std::string Lastname,int Age, int Document, std::string Specialty, double Salary)
:Person(Name, Lastname, Age,  Document){
    this->Specialty=Specialty;
    this->Salary=Salary;
}

//setters
