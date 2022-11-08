#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
        return minmax;
    }

    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        return minmax;
    }
}

int main()
{

    int arr[] = {1, 200, 333, 44, 5, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    struct Pair minmax = getMinMax(arr, arr_size);

    cout << minmax.min << " " << minmax.max;
    return 0;
}