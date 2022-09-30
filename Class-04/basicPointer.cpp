#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;
    p = &x;

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value of p = " << p << endl;
    cout << "Address of p = " << &p << endl;
    cout << "*p = " << *p << endl;
}