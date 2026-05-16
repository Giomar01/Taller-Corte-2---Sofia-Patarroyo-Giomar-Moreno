#include "../include/Profesor.h"

//constructor
Teacher::Teacher(std::string Name, std::string Lastname,int Age, int Document, std::string Specialty, double Salary)
:Person(Name, Lastname, Age,  Document){
    this->Specialty=Specialty;
    this->Salary=Salary;
}

//setters
void Teacher::setSpecialty(std::string Specialty){
    this->Specialty=Specialty;
}
void Teacher::setSalary(double salary){
    this->Salary=salary;
}

// Getters
std::string Teacher::getSpecialty(){
    return Specialty;
}

double Teacher::getSalary(){
    return Salary;
}
// Metodo propio
void Teacher::asignarCurso(){

    std::cout << "Curso asignado correctamente" << std::endl;
}

// Metodo sobrescrito
void Teacher::mostrarInformacion(){

    std::cout << "===== PROFESOR =====" << std::endl;

    std::cout << "Nombre: " << getname() << std::endl;
    std::cout << "Apellido: " << getLastname() << std::endl;
    std::cout << "Edad: " << getAge() << std::endl;
    std::cout << "Documento: " << getDocument() << std::endl;

    std::cout << "Especialidad: " << Specialty << std::endl;
    std::cout << "Salario: " << Salary << std::endl;
}
