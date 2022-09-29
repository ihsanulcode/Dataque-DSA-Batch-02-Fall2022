#include <iostream>
using namespace std;

int main()
{
    // getting array length from user
    int length;
    cout << "Enter array length: ";
    cin >> length;

    // declaring a 5 length array
    int n[length];

    // assign data to the array using loop
    int element;
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> element;
        n[i] = element;
    }

    // accessing array data using loop
    cout << endl
         << "Array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "index[" << i << "]: " << n[i] << endl;
    }
}