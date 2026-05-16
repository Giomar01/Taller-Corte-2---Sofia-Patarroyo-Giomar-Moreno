#include "../include/Tuition.h"

Tuition::Tuition(Student* student,Course* course){
    this->student = student;
    this->course = course;

    State = "Activa";
    FinalNote = 0.0;
}
Tuition::~Tuition(){

}
Student* Tuition::getStudent(){
     return student;
}

Course* Tuition::getCourse(){
    return course;
}

std::string Tuition::getState(){
    return State;
}

double Tuition::getFinalnote(){
    return FinalNote;
}

void Tuition::setState(std::string State){
    this->State = State;
}

void Tuition::setFinalnote(double FinalNote){
    this->FinalNote = FinalNote;
}
void Tuition::mostrarInformacion(){

    std::cout << "\n INFORMACION DE MATRICULA" << std::endl;

    std::cout << "Estado: " << State << std::endl;
    std::cout << "Nota final: " << FinalNote << std::endl;

    std::cout << "\n ESTUDIANTE" << std::endl;

    student->mostrarInformacion();

    std::cout << "\n CURSO" << std::endl;

    course->mostrarInformacion();
}