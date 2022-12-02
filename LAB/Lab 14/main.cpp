#include <iostream>
#include "pqtype.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
}

int main(){
    PQType<int> pq(15);
    checkEmpty(pq.IsEmpty());
    for(int i=0; i<10; i++){
        int temp;
        cin >> temp;
        pq.Enqueue(temp);
    }
    checkEmpty(pq.IsEmpty());

    int value;
    pq.Dequeue(value);
    cout << value << endl;


    pq.Dequeue(value);
    cout << value << endl;

    int numberOfBags, minutes, total=0;
    cin >> numberOfBags >> minutes;

    PQType<int> magicalBags(numberOfBags);

    for(int i=0; i<numberOfBags; i++){
        cin >> value;
        magicalBags.Enqueue(value);
    }

    for(int i=0; i<minutes; i++){
        magicalBags.Dequeue(value);
        total += value;
        magicalBags.Enqueue(value/2);
    }

    cout << total << endl;
    return 0;
}
