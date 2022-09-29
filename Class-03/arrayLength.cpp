#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    // array length calculation
    int sizeofInt = sizeof(int);
    cout << "Size of int: " << sizeofInt << endl;

    int sizeOfArray = sizeof(numbers);
    cout << "Size of Array: " << sizeOfArray << endl;

    int length = sizeOfArray / sizeofInt;
    cout << "Array Length: " << length << endl;

    // short form
    int len = sizeof(numbers) / sizeof(int);
}