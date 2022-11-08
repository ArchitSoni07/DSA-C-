#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}