/*
Task 2: Using the new operator, allocate a two dimensional character array. Again the number of rows and columns are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from the user and then print the strings. Finally de-allocate the array using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and column: " << endl;
    cin >> row >> col;

    string **ptr = new string *[row]; // Allocate a string array(row)

    for (int i = 0; i < row; i++)
    {
        // Allocate a string array (col)
        // Initialize moemory for each row
        ptr[i] = new string[col];
    }

    cout << "\nEnter array elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j]; // user input
        }
    }

    cout << "\nArray elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;
    return 0;
}