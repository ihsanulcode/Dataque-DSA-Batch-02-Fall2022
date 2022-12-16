#include <iostream>
#include "team.cpp"
#include "SortedType.cpp"
using namespace std;

template <class ItemType>
void Print(SortedType<ItemType> u)
{

    int length = u.LengthIs();
    ItemType value;
    for (int i = 0; i < length; i++)
    {
        u.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;
}
int main()
{
    // 1(a)
    Team t1("Alisson", "Brazil", 3);
    Team t2("Martinez", "Argentina", 2);
    if (t1 > t2)
    {
        cout << "Brazil has scored more goals than Argentina." << endl;
    }
    else
        cout << "Argentina has scored more goals than Brazil." << endl;
    cout << endl;

    // 1(b)
    SortedType<Team> list;
    Team tt1("Martinez", "ARG", 17);
    Team tt2("Alisson", "BRZ", 10);
    Team tt3("Karman", "CRO", 12);
    Team tt4("Asselia", "ENG", 15);
    Team tt5("Rodrike", "GER", 20);
    list.InsertItem(tt1);
    list.InsertItem(tt2);
    list.InsertItem(tt3);
    list.InsertItem(tt4);
    list.InsertItem(tt5);
    Print(list);
    cout << endl;

    // 1 (c)
    list.DeleteItem(tt4);
    Print(list);

    return 0;
}
