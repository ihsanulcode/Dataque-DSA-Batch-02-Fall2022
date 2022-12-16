#include "quetype.h"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue()
{
    this->rear = -1;
}

template <class T>
void Queue<T>::resetQueue()
{
    this->rear = -1;
}

template <class T>
bool Queue<T>::isEmpty()
{
    return this->rear == -1;
}

template <class T>
void Queue<T>::enqueue(T data)
{
    if (rear == max_items - 1)
    {
        cout << "Full Queue" << endl;
        return;
    }

    rear++;
    arr[rear] = data;
}

template <class T>
void Queue<T>::dequeue()
{
    if (isEmpty())
    {
        return;
    }

    int front = arr[0];
    for (int i = 0; i < rear; i++)
    {
        arr[i] = arr[i + 1];
    }

    rear--;
}

template <class T>
T Queue<T>::front()
{
    if (isEmpty())
    {
        // cout << "Empty Queue" << endl;
        return -1;
    }
    return arr[0];
}

template <class T>
int Queue<T>::lengthIs()
{
    return rear + 1;
}
template <class T>
void Queue<T>::print()
{
    for (int i = 0; i < rear; i++)
    {
        cout << arr[i] << "";
    }
}

template <class T>
void Queue<T>::mergeQueue(Queue<T> q)
{
    int len = q.lengthIs();
    for (int i = 0; i < len; i++)
    {
        int data = q.front();
        this->enqueue(data);
        q.dequeue();
    }
}

template <class T>
void Queue<T>::reverseQueue()
{
    int len = lengthIs();
    T newArr[len];
    for (int i = 0; i < len; i++)
    {
        newArr[i] = arr[i];
    }

    this->rear = -1;

    for (int i = len - 1; i >= 0; i--)
    {
        this->enqueue(newArr[i]);
    }
}
