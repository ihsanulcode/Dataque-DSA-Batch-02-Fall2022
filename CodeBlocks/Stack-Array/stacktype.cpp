#include "stacktype.h"
#include <iostream>
using namespace std;

template<class T>
stacktype<T>::stacktype()
{
    this->currentPos = -1;
}

template<class T>
bool stacktype<T>::IsEmpty()
{
    return (this->currentPos == -1);
}

template<class T>
bool stacktype<T>::IsFull()
{
    return (this->currentPos == SIZE-1);
}

template<class T>
void stacktype<T>::Push(T data)
{
    if(IsFull()==true){
        throw FullStack();
        //cout << "Stack is full" << endl;
    }else{
        this->currentPos++;
        arr[currentPos] = data;
    }
}

template<class T>
void stacktype<T>::Pop()
{
    if(IsEmpty()==true){
        throw EmptyStack();
    }else{
        this->currentPos--;
    }
}

template<class T>
T stacktype<T>::Top()
{
    if(IsEmpty()==true){
        throw EmptyStack();
    }else{
        return arr[currentPos];
    }
}
