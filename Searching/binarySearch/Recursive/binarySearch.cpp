#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key)
{

    if (right >= left)
    {
        int middle = (left + right) / 2;
        if (arr[middle] == key)
        {
            return middle;
        }
        else if (arr[middle] > key)
        {
            binarySearch(arr, left, middle - 1, key);
        }
        else
        {
            binarySearch(arr, middle + 1, right, key);
        }
    }

    return -1;
}

int main()
{

    int left = 0;
    int right = 5;
    int arr[5] = {1, 3, 6, 8, 9};
    int key = 9;

    cout << binarySearch(arr, left, right - 1, key) << endl;

    return 0;
}