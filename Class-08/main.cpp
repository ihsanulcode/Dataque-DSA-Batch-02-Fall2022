#include "complex.cpp"
#include <iostream>
using namespace std;

int main()
{
    complex c1(5, 2);
    complex c2(2, 5);

    c1.Print();
    c2.Print();

    complex sum = c1 + c2;
    sum.Print();

    complex mul = c1 * c2;
    mul.Print();

    bool isEqual = c1 != c2;
    if (isEqual)
        cout << "No Equals" << endl;
    else
        cout << "Equals" << endl;
}