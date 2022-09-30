#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Address of p = " << &p << endl;
    cout << "Address of P+1 = " << p+1 << endl;
    cout << "Value of P+1 = " << *(p+1) << endl;

    //address of p = 10h
    //address of P + 1 = 11h
    //arbitary value
}