#include <iostream>
using namespace std;

int main()
{
    
    int id;
    cout << "Enter Id: ";
    cin >> id;
    fflush(stdin);

    string name;
    cout << "Enter name: ";
    //cin >> name; //single word input 
    getline(cin,name); //input with space

    double cgpa;
    cout << "Enter Cgpa: ";
    cin >> cgpa;

    // print
    cout << endl
         << "Name: " << name << endl
         << "ID: " << id << endl
         << "Cgpa: " << cgpa << endl;
}