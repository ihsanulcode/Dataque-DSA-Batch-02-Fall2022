#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter a string: ";
    cin >> str1;

    Queue<char> q1;
    for (int i = 0; i <= str1.length(); i++)
    {
        q1.enqueue(str1[i]);
    }

    for (int i = 0; i <= q1.lengthIs(); i++)
    {
        str2 += q1.front();
        q1.dequeue();
    }

    if (str1 == str2)
        cout << "Palindrom" << endl;
    else
        cout << "Not Palindrom" << endl;
}