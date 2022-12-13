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
        cout << "Alisson of Brazil has saved more goals than Martinez of Argentina." << endl;
    }
    else
        cout << "Martinez of Argentina has saved more goals than Alisson of Brazil." << endl;
    cout << endl;

    // 1(b)
    SortedType<Team> list;
    Team tt1("Martinez", "Argentina", 17);
    Team tt2("Alisson", "Brazil", 10);
    Team tt3("Karman", "Croatia", 12);
    Team tt4("Asselia", "England", 15);
    Team tt5("Rodrike", "Germany", 20);
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
