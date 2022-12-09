#include <iostream>
#include <algorithm>
using namespace std;

void bestOrder(int arr[], int start, int end)
{

    if (start > end)
    {
        return;
    }

    int mid = (start + end) / 2;
    cout << arr[mid] << " ";
    bestOrder(arr, start, mid - 1);
    bestOrder(arr, mid + 1, end);
    return;
}

int main()
{
    int n;
    cout << "Enter the number of elemenet in BST" << endl;
    cin >> n;
    int arr[n];

    cout << "insert element in order in BST" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << "Desired output:" << endl;
    bestOrder(arr, 0, n - 1);
}
