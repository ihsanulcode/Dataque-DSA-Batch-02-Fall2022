#include <iostream>
#include "queue.cpp"
using namespace std;

int main()
{
    Queue<int> q;

    //ternary operator
    cout << (q.isEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    cout << (q.isEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    cout << q.Front() << endl; //10
    q.Dequeue();
    cout << q.Front() << endl; //20
    q.Dequeue();
    cout << q.Front() << endl; //30
    q.Dequeue();
    cout << q.Front() << endl; //40
    q.Dequeue();
    if(!q.isEmpty()) cout << q.Front() << endl;
    q.Dequeue();

    return 0;
}
