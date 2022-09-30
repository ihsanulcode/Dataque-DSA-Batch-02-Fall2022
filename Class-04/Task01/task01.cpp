/*
Task 1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Enter array length: ";
    cin >> length;

    int *p = new int[length]; // Allocate an int array

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> p[i]; // assigning values  from user input
    }

    cout << "\nArray Elements:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << p[i] << endl; // array output
    }

    delete[] p;

    return 0;
    // cout << "\nArray Elements:" << endl;
    // for (int i = 0; i < length; i++)
    // {
    //     cout << p[i] << endl; // array output
    // }
}