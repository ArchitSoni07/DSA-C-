#include <iostream>
using namespace std;

int main()
{
    int k = 4;
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "The largest " << k << "th element is : " << arr[n - k];
    cout << "The smallest " << k << "th element is : " << arr[k - 1];
    return 0;
}