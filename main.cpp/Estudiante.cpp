#include "../include/Estudiante.h"

// Constructor

Student::Student(std::string Name, std::string Lastname, int Age, int Document, int Code, int Semester, double Average)

: Person (Name,Lastname,Age, Document ){
    this->Code = Code;
    this->Semester = Semester;
    this->Average = Average;
}