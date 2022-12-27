#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"
using namespace std;

// Utility function to print the queue
void Print(quetype<int> &Queue)
{
    while (!Queue.IsEmpty())
    {
        cout << Queue.Front() << " ";
        Queue.Dequeue();
    }
}

// Function to reverse the queue
void reverseQueue(quetype<int> &Queue)
{
    StackType<int> Stack;
    while (!Queue.IsEmpty())
    {
        Stack.Push(Queue.Front());
        Queue.Dequeue();
    }
    while (!Stack.IsEmpty())
    {
        Queue.Enqueue(Stack.Top());
        Stack.Pop();
    }
}

// Driver code
int main()
{
    quetype<int> Queue;
    Queue.Enqueue(10);
    Queue.Enqueue(20);
    Queue.Enqueue(30);
    Queue.Enqueue(40);
    Queue.Enqueue(50);
    Queue.Enqueue(60);
    Queue.Enqueue(70);
    Queue.Enqueue(80);
    Queue.Enqueue(90);
    Queue.Enqueue(100);

    reverseQueue(Queue);
    Print(Queue);
}