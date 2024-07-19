#include <iostream>
#include "student.cpp"
#include <vector>

class system{
    std::vector <Student> svec;

public:

    void addStudent(std::string name, int ID, char grade) {
        Student s(name, ID, grade);

        svec.push_back(s);

        std::cout << "Student added successfully" << std::endl;
    }

    void editStudent() {
        int ch;

        typeagain:
        std::cout << "What needs to be edited?\n1.Name\n2.Grade";
        std::cin >> ch;

        if(ch != 1 || ch != 2) {
            int tempid;

            std::cout << "Enter the ID which needs to be edited: ";
            std::cin >> tempid

            auto it = std::find_if(svec.begin(), svec.end(), [tempId](const Student& s) { return s.getID() == tempId; });

            if(it != svec.end()) {
                switch(ch) {
                    case 1:
                        std::string tempname;

                        std::cout << "Enter the name that needs to be changed from " << s1.getName();
                        std::cin >> tempname;

                        it1 -> name = tempname;
                        break;
                    case 2:
                        int tempgrade;

                        std::cout << "Enter the grade of " << s1.getName() << " to be changed from " << s1.getGrade();
                        std::cin >> tempgrade;

                        it1 -> grade = tempgrade;
                        break;
                }

                std::cout << "Student information updated successfuly" << std::endl;
            }
        } else 
            goto typeagain;
    }

};