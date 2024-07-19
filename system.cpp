#include "system.h"
#include <iostream>
#include <algorithm>

void System::addStudent(std::string &name, int ID, double grade) {
    Student s(name, ID, grade);
    svec.push_back(s);
    std::cout << "Student added successfully" << std::endl;
}

void System::editStudent()
{
    int ch;
    int tempid;
    bool found = false;

    do {
        std::cout << "What needs to be edited?\n1.Name\n2.Grade\n";
        std::cin >> ch;

        if (ch != 1 && ch != 2) {
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        std::cout << "Enter the ID which needs to be edited: ";
        std::cin >> tempid;

        auto it = std::find_if(svec.begin(), svec.end(), [tempid](Student& s) { return s.getID() == tempid; });

        if (it != svec.end()) {
            switch(ch) {
                case 1: {
                    std::string tempname;
                    std::cout << "Enter the name that needs to be changed from " << it->getName() << ": ";
                    std::cin >> tempname;
                    it->setName(tempname);
                    break;
                }
                case 2: {
                    double tempgrade;
                    std::cout << "Enter the grade of " << it->getName() << " to be changed from " << it->getGrade() << ": ";
                    std::cin >> tempgrade;
                    it->setGrade(tempgrade);
                    break;
                }
            }
            std::cout << "Student information updated successfully" << std::endl;
            found = true;
        } else {
            std::cout << "Student ID not found. Try again." << std::endl;
        }
    } while (!found);
}

void System::deleteStudent() {
    int tempid;
    std::cout << "Enter the ID of the student to delete: ";
    std::cin >> tempid;

    auto it = std::find_if(svec.begin(), svec.end(), [tempid](Student& s) { return s.getID() == tempid; });

    if (it != svec.end()) {
        svec.erase(it);
        std::cout << "Student deleted successfully" << std::endl;
    } else {
        std::cout << "Student ID not found" << std::endl;
    }
}

double System::avgGrade(){
    if (svec.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (const auto& it : svec) {
        sum += it.getGrade();
    }

    return sum / svec.size();
}

int System::totalStudents() {
    return svec.size();
}