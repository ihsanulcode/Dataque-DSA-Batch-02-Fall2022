#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value of P = " << p << endl;
    cout << "Address of p = " << &p << endl;
    cout << "Value of *p = " << *p << endl;
}