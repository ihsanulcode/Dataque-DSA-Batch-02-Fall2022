#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int id;
    int phone;
    double cgpa;

public:
    student(); // no-arg constructor
    student(string, int, int, double);
    void info();
};
