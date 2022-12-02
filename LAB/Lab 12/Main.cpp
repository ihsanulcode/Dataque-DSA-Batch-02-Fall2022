#include<iostream>        
#include<math.h>
using namespace std;
/*
1. Write a recursive function that returns the nth Fibonacci number from the Fibonacci
series.
*/
int fib(int n){
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}

/*2. Write a recursive function to find the factorial of a number. */
int factorial(int n){
    if(n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}

/*3. Write a recursive function that returns the sum of the digits of an integer.*/
int sumOfDigits(int x){
    if(x == 0)
        return 0;
    return (x%10 + sumOfDigits(x/10));
}

/*4. Write a recursive function that find the minimum element in an array of integers.*/
int findMin(int a[],int size){
    if(size == 1)
        return a[0];
    else{
        if(a[size-1] < findMin(a,size-1))
            return a[size-1];
        else
            return findMin(a,size-1);
    }
}

/*5. Write a recursive function that converts a decimal number to binary number.*/
int DecToBin(int dec){
    if(dec == 0)
        return 0;
    else
        return (dec % 2 + 10 * (DecToBin(dec/2)));
}

/*for getting an array*/
void getArray()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements:" << endl;
    for(int i =0;i<size;i++)
        cin >> arr[i];

    int min = findMin(arr,size);
    cout << "Minimum element: " << min << endl;
}

/*6. Write a recursive function that find the sum of the following series.*/
double sumOfSeries(int n){

    if(n == 1)
        return 1+(1.0/2.0);
    if(n == 0)
        return 1.0;

    return (1.0/pow(2.0,n)+sumOfSeries(n-1));
}

int main()
{
    int choice;
    cout << "[1]: Find Fibonacci" << endl;
    cout << "[2]: Find Factorial" << endl;
    cout << "[3]: Sum of digits" << endl;
    cout << "[4]: Find Minimum elements in array" << endl;
    cout << "[5]: Convert decimal to binary" << endl;
    cout << "[6]: Sum of series [1+1/2+1/2+...+1/2^n]" << endl;
    cout << "[0]: Exit" << endl;
    cout << "------------------" << endl;

    do {
        cout<<"Please Enter your choice > ";
        cin>>choice;
        switch(choice){
             case 1:
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << n << "th fibonacci number: " << fib(n);
                cout << endl;
                break;
             case 2:
                cout << "Enter n: ";
                cin >> n;
                cout << "Factorial : " << factorial(n);
                cout << endl;
                break;
             case 3:
                  int x;
                cout << "Enter digit: ";
                cin >> x;
                cout << "Sum of digit: " << sumOfDigits(x);
                cout << endl;
                break;
             case 4:
                getArray();
                break;
             case 5:
                int dec;
                cout << "Enter decimal: ";
                cin >> dec;
                cout << "Binary: " << DecToBin(dec);
                cout << endl;
                break;
             case 6:
                cout << "Enter n: ";
                cin >> n;
                cout << "sum of series: " << sumOfSeries(n);
                cout << endl;
                break;
             case 0:
                cout << "\n\t--- EXITS ---" << endl;
                break;
             default:
                cout << "Invalid choice" << endl;
        }
    }while(choice!=0);

    return 0;
}
