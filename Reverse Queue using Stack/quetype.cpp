#include "quetype.h"
#include <iostream>
using namespace std;

template <class T>
quetype<T>::quetype()
{
    front = NULL;
    rear = NULL;
}

template <class T>
quetype<T>::~quetype()
{
    MakeEmpty();
}

template <class T>
bool quetype<T>::IsFull()
{
    NodeType *newNode;
    try
    {
        newNode = new NodeType;
        delete newNode;
        return false;
    }
    catch (bad_alloc &ex)
    {
        return true;
    }
}

template <class T>
bool quetype<T>::IsEmpty()
{
    return (front == NULL);
}

template <class T>
void quetype<T>::Enqueue(T data)
{
    if (IsFull())
    {
        throw FullQueue();
    }
    else
    {
        NodeType *newNode = new NodeType;
        newNode->info = data;
        newNode->next = NULL;

        if (rear == NULL)
        {
            front = newNode;
        }
        else
        {
            rear->next = newNode;
        }

        rear = newNode;
    }
}

template <class T>
void quetype<T>::Dequeue()
{
    if (IsEmpty())
    {
        throw EmptyQueue();
    }
    else
    {
        NodeType *temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }
}

template <class T>
T quetype<T>::Front()
{
    return front->info;
}

template <class T>
void quetype<T>::MakeEmpty()
{
    NodeType *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}

template <class T>
int quetype<T>::Size()
{
    int count = 0;
    NodeType *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        count++;
    }
    return count;
}