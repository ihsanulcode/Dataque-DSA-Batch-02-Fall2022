#include "linkedlist.h"
#include <iostream>
using namespace std;

template <class T>
linkedlist<T>::linkedlist()
{
    head = NULL;
}

template <class T>
void linkedlist<T>::insertAtTail(T data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <class T>
void linkedlist<T>::print()
{
    if (head == NULL)
    {
        cout << "Empty linkedlist" << endl;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}
