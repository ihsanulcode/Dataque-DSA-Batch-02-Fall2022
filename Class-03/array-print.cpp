#include <iostream>
using namespace std;

int main()
{
    string courses[3] = {"CSE115", "CSE215", "CSE225"};

    for (int i = 0; i < sizeof(courses) / sizeof(string); i++)
    {
        cout << i << ": " << courses[i] << endl;
    }
}