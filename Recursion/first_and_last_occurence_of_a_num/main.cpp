#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key)
{
    if (i == 0)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return lastOcc(arr, n, i - 1, key);
}

int lastOcc1(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = lastOcc1(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{

    int arr[7] = {4, 2, 1, 2, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << firstOcc(arr, n, 0, 2);

    cout << endl;

    cout << lastOcc(arr, n, n - 1, 2);

    cout << endl;

    cout << lastOcc1(arr, n, 0, 2);

    return 0;
}