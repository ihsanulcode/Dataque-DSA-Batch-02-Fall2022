#include <iostream>
using namespace std;

int main()
{
    // getting number of students from user
    int numOfStudent;
    cout << "Enter the number of student: ";
    cin >> numOfStudent;

    // declaring array to store students data
    double cgpa[numOfStudent];

    // getting students data from user input
    double temp;
    double sum = 0;
    cout << "\nEnter Student Information" << endl;
    for (int i = 0; i < numOfStudent; i++)
    {
        cout << "CGPA Student " << (i + 1) << ": ";
        cin >> temp;
        cgpa[i] = temp;
        sum += cgpa[i];
    }

    // summing up all students cgpa
    // double sum = 0;
    // for (int i = 0; i < numOfStudent; i++)
    // {
    //     sum += cgpa[i];
    // }

    // find average
    double average = sum / (double)numOfStudent;

    // output
    cout << "\nAverage CGPA: " << average << endl;

    return 0;
}