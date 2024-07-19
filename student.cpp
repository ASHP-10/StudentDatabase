#include "student.h"

Student::Student(std::string name, int ID, double grade) : name(name), ID(ID), grade(grade) {}

int Student::getID() const{
    return this -> ID;
}

std::string Student::getName() const{
    return this -> name;
}

double Student::getGrade() const{
    return this -> grade;
}

void Student::setName(const std::string &name) {
    this -> name = name;
}

void Student::setGrade(double grade) {
    this -> grade = grade;
}