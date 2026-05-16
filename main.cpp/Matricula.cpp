#include "../include/Matricula.h"

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
