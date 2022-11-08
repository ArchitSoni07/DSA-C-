#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax, ml, mr;
    int mid;
    if (low == high)
    {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    ml = getMinMax(arr, low, mid);
    mr = getMinMax(arr, mid + 1, high);

    if (ml.min < mr.min)
    {
        minmax.min = ml.min;
    }
    else
    {
        minmax.min = mr.min;
    }

    if (ml.max > mr.max)
    {
        minmax.max = ml.max;
    }
    else
    {
        minmax.max = mr.max;
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);

    cout << minmax.min << "  " << minmax.max << endl;
    return 0;
}