#include <iostream>
using namespace std;

int main()
{
    // output - cout
    // input - cin

    string name;
    cout << "Enter name: ";
    //cin >> name; //single word input 
    getline(cin,name); //input with space

    int id;
    cout << "Enter Id: ";
    cin >> id;

    double cgpa;
    cout << "Enter Cgpa: ";
    cin >> cgpa;

    // print
    cout << endl
         << "Name: " << name << endl
         << "ID: " << id << endl
         << "Cgpa: " << cgpa << endl;
}