/*
Task 1: In the driver file (main.cpp), perform the following sub-tasks.

1. Create two objects of this class, one with no constructor argument and one with the argument 5.

2. Take five input values from the user and store them in the array inside the second object using the set method.

3. For the second object, print all the values you just stored.

Note that, you cannot assign anything in the first object since the array inside it has size 0. Neither can you change the size of this array to some other size.
*/

#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    // sub task-1
    dynarr obj1();
    dynarr obj2(5);

    // sub task-2
    int data;
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> data;
        obj2.setValue(i, data);
    }

    // sub task-3
    int sum = 0;
    cout << "\nArray Elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << obj2.getValue(i) << endl;
        sum += obj2.getValue(i);
    }

    cout << "\nSum: " << sum << endl;
    return 0;
}