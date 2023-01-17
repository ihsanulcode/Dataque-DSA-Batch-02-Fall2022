#include "queue.h"
#include <iostream>
using namespace std;

template <class T>
queue<T>::queue()
{
    this->rear = -1;
}

template <class T>
bool queue<T>::isEmpty()
{
    return this->rear == -1;
}

template <class T>
bool queue<T>::isFull()
{
    return this->rear == SIZE - 1;
}

template <class T>
void queue<T>::enqueue(T data)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
        return;
    }

    this->rear++;
    arr[rear] = data;
}

template <class T>
T queue<T>::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    T frontData = arr[0];
    for (int i = 0; i < rear; i++)
    {
        arr[i] = arr[i + 1]; // arr[0] = arr[0+1]
    }

    this->rear--;
    return frontData;
}