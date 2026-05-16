#include "../include/Curso.h"

Course::Course(int coursecode,std::string coursename, int credits){

    this->coursecode = coursecode;
    this->coursename = coursename;
    this->credits = credits;
}
int Course::getCoursecode(){

    return coursecode;
}

std::string Course::getCoursename(){

    return coursename;
}

int Course::getCredits(){

    return credits;
}

void Course::setCoursecode(int coursecode){

    this->coursecode = coursecode;
}

void Course::setCoursename(std::string coursename){

    this->coursename = coursename;
}

void Course::setCredits(int credits){

    this->credits = credits;
}
void Course::mostrarInformacion(){

    std::cout << "\nINFORMACION DEL CURSO " << std::endl;

    std::cout << "Codigo del curso: " << coursecode << std::endl;
    std::cout << "Nombre del curso: " << coursename << std::endl;
    std::cout << "Creditos: " << credits << std::endl;
}