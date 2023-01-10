const int SIZE = 5;

template <class T>
class stack
{
private:
    T items[SIZE];
    int curPos;

public:
    stack();
    bool IsFull();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
};

