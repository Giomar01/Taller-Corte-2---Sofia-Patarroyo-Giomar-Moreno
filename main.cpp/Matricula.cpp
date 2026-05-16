#include "../include/Matricula.h"

Tuition::Tuition(Student* student,Course* course){
    this->student = student;
    this->course = course;

    State = "Activa";
    FinalNote = 0.0;
}
Tuition::~Tuition(){

}