#include <iostream>
using namespace std;

int binary_S(int arr[], int n, int key)
{

    int left = 0;
    int right = n;
    int mid = (left + right) / 2;

    while (left <= right)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {1, 4, 7, 9, 23};
    int key = 23;
    int n = sizeof(arr);

    cout << binary_S(arr, n, key);

    return 0;
}