#include <iostream>
using namespace std;

// // call by value
// void increment(int a)
// {
//     a = a + 1;
// }
// int main()
// {
//     int i = 1;

//     cout << "Before increment: " << i << endl;
//     increment(i);
//     cout << "After increment: " << i << endl;

//     return 0;
// }

// call by reference/address
void increment(int *a)
{
    *a += 1;
}
int main()
{
    int i = 1;

    cout << "Before increment: " << i << endl;
    increment(&i);
    cout << "After increment: " << i << endl;

    return 0;
}