#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

const int SIZE = 5;

template <class T>
class Queue{
private:
    int rear;
    T arr[SIZE];
public:
    Queue();
    bool isEmpty();
    bool isFull();
    void Enqueue(T);
    void Dequeue();
    T Front();
};


#endif // QUEUE_H_INCLUDED
