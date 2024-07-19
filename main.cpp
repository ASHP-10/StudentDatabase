#include <iostream>
#include <string>
#include "system.h"

int main()
{
    int choice;

    System sys;                 //creates one system for student management

    do {
        std::cout << "MENU\n1.Add Student record\n2.Edit Student record\n3.Delete Student record\n4.EXIT\n5.Calculate average grade\n6.Calculate average\n7.Calculate total number of students";
        std::cin >> choice;

        std::string n;
        int id;
        char g;

        switch(choice) {
        case 1:
            std::cout << "Enter the student's name: ";
            std::cin >> n;

            std::cout << "Enter the student's ID: ";
            std::cin >> id;

            std::cout << "Enter the student's grade: ";
            std::cin >> g;
            
            sys.addStudent(n, id, g);
            break;
        case 2:
            sys.editStudent();
            break;
        case 3:
            sys.deleteStudent();
            break;
        case 5:
            std::cout << sys.avgGrade() << std::endl;
            break;
        case 6:
            std::cout << sys.totalStudents() << std::endl;
            break;
        }

        std::cin.clear();
    } while(choice != 4);

    return 0;
}