#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    stacktype<int> s;

    if(s.IsEmpty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    s.Push(1);
    s.Push(2);
    s.Push(3);

    if(s.IsEmpty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    cout << s.Top() << endl;
    s.Pop();
    cout << s.Top() << endl;
    s.Pop();
    cout << s.Top() << endl;
    s.Pop();

    if(s.IsEmpty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    cout << endl;

    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);

    if(s.IsEmpty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    s.Push(50);

    if(s.IsEmpty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    if(s.IsFull()) cout << "stack is full" << endl;
    else cout << "stack is not full" << endl;

    s.Push(60);

    return 0;
}
