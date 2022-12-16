const int max_items = 100;

template <class T>
class Queue
{
private:
    int rear;
    T arr[max_items];

public:
    Queue();
    void resetQueue();
    bool isEmpty();
    int lengthIs();
    void enqueue(T);
    void dequeue();
    T front();
    void print();
    void mergeQueue(Queue<T>);
    void reverseQueue();
};
