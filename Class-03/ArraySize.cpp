#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    // array type?
    // array elements?
    // size = type byte * elements
    // size = 4*5 = 20 bytes
    int size = sizeof(numbers);
    cout << size << " bytes" << endl;
}