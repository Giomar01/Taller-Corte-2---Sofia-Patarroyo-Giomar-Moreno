#include "../include/Persona.h"

Person::Person(std::string Name, std::string Lastname, int Age, int Document) {
    this->Name = Name;
    this->Lastname = Lastname;
    this->Age = Age;
    this->Document = Document;
}

Person::~Person(){
}

//setters

void Person::setName(std::string Name){
    this->Name=Name;
}
void Person::setLastname(std::string Lastname){
    this->Lastname=Lastname;
}
void Person::setAge(int Age){
    this->Age=Age;
}
void Person::setDocument(int Document){
    this->Document=Document;
}

//Getters

std::string Person::getname(){
    return Name=Name;
}
std::string Person::getLastname(){
    return Lastname=Lastname;
}
int Person::getAge(){
    return Age=Age;
}
int Person::getDocument(){
    return Document=Document;
}
