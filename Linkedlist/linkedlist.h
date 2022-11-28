template <class T>
class linkedlist
{
    struct Node
    {
        T data;
        Node *next;
    };

private:
    Node *head;

public:
    linkedlist(/* args */);
    //~linkedlist();
    void insertAtTail(T);
    void print();
};
