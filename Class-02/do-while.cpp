#include <iostream>
using namespace std;

int main()
{
    // do-while loop
    // syntax
    /*
    statement 1
    do{
        //work
        statement 3
    }while(statement 2);
    */

    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
    cout << "End of do-while loop" << endl;
}