#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    //declaring three list
    UnsortedType<int> a; //list 1
    UnsortedType<int> b; //list 2
    UnsortedType<int> c; //list 3 for merging list 1 & list 2

    int n1;  //getting size for list a
    cout << "Enter size for the first list: ";
    cin >> n1;

    int t1;   //getting elements in list a
    cout << "Enter " << n1 << " elements: " << endl;
    for(int i=0;i<n1;i++){
        cin >> t1;
        a.InsertItem(t1);
        c.InsertItem(t1);
    }



    int n2;  //getting size for list b
    cout << "\nEnter size for the second list: ";
    cin >> n2;

    int t2;   //getting elements in list b
    cout << "Enter " << n2 << " elements: " << endl;
    for(int i=0;i<n2;i++){
        cin >> t2;
        a.InsertItem(t2);
        c.InsertItem(t2);
    }



    int size = n1+n2;
    int arr[size];
    cout << "Merged: ";
    for(int i=0;i<size;i++){
        int ans;
        c.GetNextItem(ans);
        arr[i] = ans;
    }

    int temp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 1 + i; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


}
