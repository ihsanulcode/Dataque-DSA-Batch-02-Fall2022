#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << "Address of arr[" << i << "]: " << arr + i << endl;
        cout << "Value of arr[" << i << "]: " << *(arr + i) << endl;
        cout << endl;
    }
}