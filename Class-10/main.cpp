#include <iostream>
#include "unsortedType.cpp"
using namespace std;

template <class T>
void Print(unsortedType<T> u)
{
    int length = u.lengthIs();
    T value;
    for (int i = 0; i < length; i++)
    {
        u.getNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template <class T>
void Retrieve(unsortedType<T> u, T value)
{
    bool b;
    u.retriveItem(value, b);
    if (b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

void checkFull(bool b)
{
    if (b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main()
{
    unsortedType<int> ut;
    ut.insertItem(5);
    ut.insertItem(7);
    ut.insertItem(6);
    ut.insertItem(9);
    Print(ut);

    cout << ut.lengthIs() << endl;
    ut.insertItem(1);
    Print(ut);

    Retrieve(ut, 4);
    Retrieve(ut, 5);
    Retrieve(ut, 9);
    Retrieve(ut, 10);

    checkFull(ut.isFull());
    ut.deleteItem(5);
    checkFull(ut.isFull());
    ut.deleteItem(1);
    Print(ut);
    ut.deleteItem(6);
    Print(ut);

    return 0;
}
