#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool isSorted = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && isSorted);
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 55, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sorted(arr, n);

    return 0;
}