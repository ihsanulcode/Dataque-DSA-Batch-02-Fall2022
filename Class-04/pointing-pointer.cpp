#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;
    int ***ppp = &pp;

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "\nValue of p = " << p << endl;
    cout << "Address of p = " << &p << endl;
    cout << "\nValue of pp = " << pp << endl;
    cout << "Address of pp = " << &pp << endl;
    cout << "\nValue of ppp = " << ppp << endl;
    cout << "Address of ppp = " << &ppp << endl;
    cout << "\n*p = " << *p << endl;
    cout << "**pp = " << **pp << endl;
    cout << "***ppp = " << ***ppp << endl;

    ***ppp = 20;
    cout << "\n***ppp = " << ***ppp << endl;
}