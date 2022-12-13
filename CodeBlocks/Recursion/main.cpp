#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n >= 1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int sumOfDigits(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10 + sumOfDigits(n/10));
}

int sum(int n)
{
    if(n>=1)
        return n+sum(n-1);
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << sum(n) << endl;
}
