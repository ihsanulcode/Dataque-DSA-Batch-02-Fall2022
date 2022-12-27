template <class T>
class quetype
{
    struct NodeType
    {
        T info;
        NodeType *next;
    };

private:
    NodeType *front, *rear;

public:
    quetype();
    ~quetype();
    void MakeEmpty();
    void Enqueue(T);
    void Dequeue();
    bool IsEmpty();
    bool IsFull();
    int Size();
    T Front();
};

class EmptyQueue
{
};
class FullQueue
{
};
