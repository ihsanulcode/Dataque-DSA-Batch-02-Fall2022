#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int SIZE = 5;

template <class T>
class stacktype{
private:
    T arr[SIZE];
    int currentPos;
public:
    stacktype();
    bool IsFull();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
};

//Classes for exception handling
class FullStack{};
class EmptyStack{};

#endif // STACKTYPE_H_INCLUDED
