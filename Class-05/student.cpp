#include "student.h"

student::student()
{
    this->name = "";
    this->cgpa = 0.0;
    this->id = 0;
    this->phone = 0;
}

student::student(string name, int id, int phone, double cgpa)
{
    this->name = name;
    this->cgpa = cgpa;
    this->id = id;
    this->phone = phone;
}

void student::info()
{
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    cout << "Cgpa: " << this->cgpa << endl;
    cout << "Phone: " << this->phone << endl;
}