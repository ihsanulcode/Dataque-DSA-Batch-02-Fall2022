const int SIZE = 5;

template <class T>
class queue
{
private:
    int rear;
    T arr[SIZE];

public:
    queue();
    bool isEmpty();
    bool isFull();
    void enqueue(T);
    T dequeue();
};
