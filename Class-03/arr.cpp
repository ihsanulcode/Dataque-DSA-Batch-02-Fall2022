#include <iostream>
using namespace std;

int main()
{
    // Arrays
    // syntax
    // dataType arrayName[size];
    int numbers[5];

    // declaring and data assign together
    int num[5] = {1, 2, 3, 4, 5};
    string courses[3] = {"CSE115", "CSE215", "CSE225"};
    double cgpa[3] = {3.0, 3.5, 3.88};

    // declaring an 5 size array
    int data[5];
    // assign data index by index
    data[0] = 10; // int n = 10;
    data[1] = 20;
    data[2] = 30;
    data[3] = 40;
    data[4] = 50;

    // accessing data from array
    cout << data[0] << endl;
    cout << data[1] << endl;
    cout << data[2] << endl;
    cout << data[3] << endl;
    cout << data[4] << endl;
}