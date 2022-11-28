#include "linkedlist.cpp"
#include <iostream>
using namespace std;

int main()
{
    linkedlist<int> list;
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.print();
}