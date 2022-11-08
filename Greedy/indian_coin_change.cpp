#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 10;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x = 350;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }

    cout << ans << endl;

    return 0;
}