#pragma once
#include "student.h"
#include <vector>

class System{
    std::vector <Student> svec;

public:

    void addStudent(std::string &name, int ID, double grade);
    void editStudent();
    void deleteStudent();

    double avgGrade();
    int totalStudents();
};
