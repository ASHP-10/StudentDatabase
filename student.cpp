#include <iostream>
#include <vector>
#include "system.cpp"

class Student{
    std::string name;
    const int ID;
    double grade;

public:
    Student(std::string name, int ID, double grade): name(name), ID(ID), grade(grade) {}

    int getID() {
        return this -> ID;
    }

    std::string getName() {
        return this -> name;
    }

    double getGrade() {
        return this -> grade;
    }

    friend void system::editStudent();
};