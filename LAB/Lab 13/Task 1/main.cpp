#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout << "Tree is Empty" << endl;
    else
        cout << "Tree is not Empty" << endl;
}

void Found(bool b){
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}


int main(){

    TreeType<int> obj;
    checkEmpty(obj.IsEmpty());

    obj.InsertItem(4);
    obj.InsertItem(9);
    obj.InsertItem(2);
    obj.InsertItem(7);
    obj.InsertItem(3);
    obj.InsertItem(11);
    obj.InsertItem(17);
    obj.InsertItem(0);
    obj.InsertItem(5);
    obj.InsertItem(1);

    checkEmpty(obj.IsEmpty());
    cout << obj.LengthIs() << endl;


    bool b;
    int n = 9;
    obj.RetrieveItem(n,b);
    Found(b);


    n = 13;
    obj.RetrieveItem(n,b);
    Found(b);

    obj.ResetTree(IN_ORDER);
    bool finish = 0;
    while(!finish){
        int value;
        obj.GetNextItem(value,IN_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;

    obj.ResetTree(PRE_ORDER);
    finish = 0;
    while(!finish){
        int value;
        obj.GetNextItem(value,PRE_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;

    obj.ResetTree(POST_ORDER);
    finish = 0;
    while(!finish){
        int value;
        obj.GetNextItem(value,POST_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;

    obj.MakeEmpty();

    return 0;
}
