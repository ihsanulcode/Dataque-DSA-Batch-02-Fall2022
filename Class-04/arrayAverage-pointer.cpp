#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Enter array length: ";
    cin >> length;

    int arr[length];
    int *p = arr;

    cout << "\nEnter array elements: " << endl;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> *(arr + i);
        sum += *(arr + i);
    }

    double avg = sum / (double)length;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}