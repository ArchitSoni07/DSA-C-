#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n = mid - l + 1;
    int m = r - mid;

    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[l + i];
    }

    for (int i = 0; i < m; i++)
    {
        arr2[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int mid = (l + r) / 2;

        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{

    int arr[7] = {43, 4, 3, 666, 7, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}