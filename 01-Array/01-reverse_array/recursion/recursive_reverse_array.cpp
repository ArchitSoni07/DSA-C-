#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    int lengthOfArray;
    cout << "Enter the length of array : \n";
    cin >> lengthOfArray;
    int array[lengthOfArray];
    cout << "Enter the values of array : \n";

    for (int i = 0; i < lengthOfArray; i++)
    {
        cin >> array[i];
    }
    int end = lengthOfArray;
    reverseArray(array, 0, end);

    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}