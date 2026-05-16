#include "../include/Estudiante.h"

// Constructor

Student::Student(std::string Name, std::string Lastname, int Age, int Document, int Code, int Semester, double Average)

: Person (Name,Lastname,Age, Document ){
    this->Code = Code;
    this->Semester = Semester;
    this->Average = Average;
}
//Getters 

int Student ::getCode(){
    return Code;
}

int Student ::getSemester(){
    return Semester;
}

double Student ::getAverage(){
    return Average;
}

// Setters
void Student::setCode(int Code){
    this->Code = Code;
}

void Student::setSemester(int Semester){
    this->Semester = Semester;
}

void Student::setAverage(double Average){
    this->Average = Average;
}

// Metodo propio
void Student::inscribirCurso(){

    std::cout << "Curso inscrito correctamente" << std::endl;
}

// Metodo sobrescrito
void Student::mostrarInformacion(){

    std::cout << " ESTUDIANTE " << std::endl;

    std::cout << "Nombre: " << getname() << std::endl;
    std::cout << "Apellido: " << getLastname() << std::endl;
    std::cout << "Edad: " << getAge() << std::endl;
    std::cout << "Documento: " << getDocument() << std::endl;

    std::cout << "Codigo: " << Code << std::endl;
    std::cout << "Semestre: " << Semester << std::endl;
    std::cout << "Promedio: " <<  Average << std::endl;
}