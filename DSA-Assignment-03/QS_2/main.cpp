#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    Queue<int> batch;
    Queue<int> id;
    Queue<int> dept;

    batch.enqueue(2);
    batch.enqueue(1);
    batch.enqueue(2);

    id.enqueue(1);
    id.enqueue(0);
    id.enqueue(1);
    id.enqueue(0);

    dept.enqueue(4);
    dept.enqueue(2);
    dept.enqueue(0);

    batch.mergeQueue(id);
    dept.reverseQueue();
    batch.mergeQueue(dept);
    batch.print();
}