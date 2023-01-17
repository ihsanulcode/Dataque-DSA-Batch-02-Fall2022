#include "queue.cpp"
#include <iostream>
using namespace std;

void checkFull(bool b)
{
    if (b)
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;
}
void checkEmpty(bool b)
{
    if (b)
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;
}

int main()
{
    queue<int> q; //creating an object of queue class
    checkEmpty(q.isEmpty());
    checkFull(q.isFull());

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    checkEmpty(q.isEmpty());
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    checkEmpty(q.isEmpty());
}