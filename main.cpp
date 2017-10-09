/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: S-KAY
 *
 * Created on October 7, 2017, 11:42 AM
 */

#include <cstdlib>
#include <iostream>
#include<fstream>

using namespace std;

/*
 * 
 */
class Students {
    string regNum;
    string firstName;
    string surname;
    int age;

public:

    void SetRegnum(string thisregNum) {
        regNum = thisregNum;
    }
    void SetFirstname(string thisfirstName) {
        firstName = thisfirstName;
    }
    void SetSurname(string thissurname) {
        surname = thissurname;
    }
    void SetAge(int thisAge) {
        age = thisAge;
    }
};

int main(int argc, char** argv) {
    Students student;
    string regnumber;
    string name;
    string surname;
    int age;
    cout << "Enter Registration Number:";
    cin >> regnumber;
    student.SetRegnum(regnumber);
    cout << "Enter First Name:";
    cin >> name;
    student.SetFirstname(name);
    cout << "Enter Surname:";
    cin >> surname;
    student.SetSurname(surname);
    cout << "Enter Age:";
    cin >> age;
    student.SetAge(age);
    ofstream studentsFile("Files\\students", ios::binary);
    studentsFile.write((char*) &student, sizeof (Students));
    if (studentsFile)
        cout << "Record saved successfully" << endl;
    studentsFile.close();


    return 0;
}

