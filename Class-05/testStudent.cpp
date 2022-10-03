#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    string name;
    cout << "Enter Name: ";
    getline(cin, name);

    int id;
    cout << "Enter Id: ";
    cin >> id;

    int phone;
    cout << "Enter phone: ";
    cin >> phone;

    double cgpa;
    cout << "Enter cgpa: ";
    cin >> cgpa;

    student s(name, id, phone, cgpa);
    s.info();

    return 0;
}