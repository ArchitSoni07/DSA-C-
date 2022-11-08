#include <iostream>
#include <vector>
using namespace std;

void getUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << endl;
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            cout << arr1[i] << endl;
            i++;
        }
        else
        {
            cout << arr2[j] << endl;
            j++;
            i++;
        }
    }

    while (i < n)
    {
        cout << arr1[i] << endl;
        i++;
    }

    while (j < m)
    {
        cout << arr2[j] << endl;
        j++;
    }
}

void getInter(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr2[j] >> arr1[i])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr2[j] << endl;
            i++;
            j++;
        }
    }
}

int main()
{

    int arr1[7] = {1, 3, 8, 9, 10, 11, 12};
    int arr2[4] = {1, 3, 4, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    getUnion(arr1, arr2, n, m);
    cout << endl;
    cout << "Below is Intersection : " << endl;
    getInter(arr1, arr2, n, m);

    return 0;
}