#include <iostream>
using namespace std;

int main()
{
    // declaring a 5 length array
    int n[5];

    // assign data to the array using loop
    for (int i = 0; i < sizeof(n) / sizeof(int); i++)
    {
        n[i] = i;
    }

    // accessing array data using loop
    for (int i = 0; i < sizeof(n) / sizeof(int); i++)
    {
        cout << "index[" << i << "]: " << n[i] << endl;
    }
}