#include "stacktype.cpp"
#include <iostream>
using namespace std;

void checkEmpty(bool b)
{
    if (b == true)
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}

void checkFull(bool b)
{
    if (b == true)
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;
}

int main()
{
    stack<int> s;

    checkEmpty(s.IsEmpty());
    s.Push(1);
    s.Push(2);
    s.Push(3);
    checkEmpty(s.IsEmpty());

    cout << s.Top() << endl; // 3
    s.Pop();
    cout << s.Top() << endl; // 2
    s.Pop();
    cout << s.Top() << endl; // 1
    s.Pop();
    s.Pop();

    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    s.Push(60);

    cout << s.Top() << endl;

    checkFull(s.IsFull());
    s.Pop();
    checkFull(s.IsFull());
}