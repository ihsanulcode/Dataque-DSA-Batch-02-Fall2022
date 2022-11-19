#include <iostream>
#include "unsortedType.cpp"
#include "studentInfo.cpp"
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
    {
        cout << "Item is found" << endl;
        cout << value << endl;
    }

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
    studentInfo s1(15234, "Jon", 2.6),
        s2(13732, "Tyrion", 3.9),
        s3(13569, "Sandor", 1.2),
        s4(15467, "Ramesey", 3.1),
        s5(16285, "Arya", 3.1);

    unsortedType<studentInfo> ut;
    ut.insertItem(s1);
    ut.insertItem(s2);
    ut.insertItem(s3);
    ut.insertItem(s4);
    ut.insertItem(s5);

    Print(ut);

    studentInfo temp = 15467;
    ut.deleteItem(temp);

    cout << endl;
    Print(ut);

    temp = 13569;
    Retrieve(ut, temp);

    return 0;
}
