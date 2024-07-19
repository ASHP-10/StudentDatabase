#pragma once
#include <bits/stdc++.h>
#include "student.cpp"
#include "system.cpp"

int main()
{
    int choice;

    do {
        std::cout << "MENU\1.Add Student record\n2.Edit Student record\n3.Delete Student record\n4.EXIT\n";
        std::cin >> choice;

        system sys;

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
        }   
    } while(choice != 4);

    return 0;
}