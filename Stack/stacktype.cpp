#include "stacktype.h"
#include <iostream>
using namespace std;

template <class T>
stack<T>::stack()
{
    this->curPos = -1;
}

template <class T>
bool stack<T>::IsEmpty()
{
    if (this->curPos == -1)
    {
        return true;
    }
    else
    {
        return false;
    }

    // return this->curPos == -1;
}

template <class T>
bool stack<T>::IsFull()
{
    return this->curPos == SIZE - 1;
}

template <class T>
void stack<T>::Push(T data)
{
    if (IsFull() == true)
    {
        cout << "Stack is full" << endl;
        return;
    }

    this->curPos++;
    items[curPos] = data;
}

template <class T>
void stack<T>::Pop()
{
    if (IsEmpty() == true)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    this->curPos--;
}

template <class T>
T stack<T>::Top()
{
    if (IsEmpty() == true)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }

    return items[curPos];
}