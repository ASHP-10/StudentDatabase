#pragma once
#include <string>

class Student{
    std::string name;
    const int ID;
    double grade;

public:
    Student(std::string name, int ID, double grade);

    int getID() const;
    std::string getName() const;
    double getGrade() const;

    void setName(const std::string &name);
    void setGrade(double grade);
};