#include "queue.h"
#include <iostream>
using namespace std;

template<class T>
Queue<T>::Queue()
{
    this->rear = -1;
}

template<class T>
bool Queue<T>::isEmpty()
{
    return this->rear==-1;
}

template<class T>
bool Queue<T>::isFull()
{
    return this->rear==SIZE-1;
}

template<class T>
void Queue<T>::Enqueue(T data)
{
    if(isFull()){
        cout << "Queue is full" << endl;
        return;
    }
    else{
        rear++;
        arr[rear] = data;
    }
}

template<class T>
void Queue<T>::Dequeue()
{
    if(isEmpty()){
        cout << "Queue is empty" << endl;
        return;
    }
    else{
       for(int i=0;i<rear;i++){
        arr[i] = arr[i+1];
       }
       rear--;
    }
}

template<class T>
T Queue<T>::Front()
{
    if(isEmpty()){
        cout << "Queue is empty" << endl;
        //return NULL;
    }
    else return arr[0];
}
