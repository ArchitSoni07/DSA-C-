#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr1{12, 3, 7, 1, 9, 6};
    int n = 24;

    sort(arr1.begin(), arr1.end());
    bool check = false;

    for (int i = 0; i < 6; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = arr1[i] + arr1[low] + arr1[high];
            if (current == n)
            {
                check = true;
            }
            if (current < n)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }

    cout << check;

    return 0;
}