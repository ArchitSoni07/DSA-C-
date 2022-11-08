#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int kadanes(int arr[], int n)
{
    int maxEndHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 0; i < n; i++)
    {
        maxEndHere = max(arr[i], maxEndHere + arr[i], comp);
        maxSoFar = max(maxSoFar, maxEndHere, comp);
    }
    return maxSoFar;
}

int main()
{

    int arr[6] = {1, 0, -1, 3, -4, 51};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << kadanes(arr, n);

    return 0;
}