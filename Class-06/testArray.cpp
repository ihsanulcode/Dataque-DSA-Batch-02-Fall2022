#include <iostream>
#include "Array.cpp"
using namespace std;

int main()
{
    // int arr[5];
    Array<int> arr(5);
    arr.add(0, 10); // 1
    arr.add(1, 20); // 2
    arr.add(2, 30); // 3

    for (int i = 0; i < arr.getLength(); i++)
    {
        cout << arr.get(i) << endl;
    }

    Array<string> course(5);
    course.add(0, "CSE115"); // 1
    course.add(1, "CSE215"); // 2
    course.add(2, "CSE225"); // 3
    course.add(3, "CSE445"); // 4

    for (int i = 0; i < course.getLength(); i++)
    {
        cout << course.get(i) << endl;
    }

    return 0;
}