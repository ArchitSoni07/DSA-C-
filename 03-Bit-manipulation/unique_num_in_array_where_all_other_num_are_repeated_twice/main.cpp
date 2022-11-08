#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[5] = {1, 2, 4, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << unique(arr, n) << endl;

    return 0;
}