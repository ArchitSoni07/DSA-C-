#include <iostream>
using namespace std;

void get_value(int arr[], int n)
{
    bool flag = 0;
    for (int i = 0; i < sizeof(arr) + 1; i++)
    {
        if (arr[i] == n)
        {
            cout << "Found the value at index " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Couldn't Find the value " << n << " in the array";
    }
}

int main()
{
    int arr[10] = {23, 56, 43, 78, 95, 22, 390, 555, 764, 1};
    int n = 1;
    get_value(arr, n);
    return 0;
}