#include <iostream>
using namespace std;

int get1sCount(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

int main()
{
    int n = 8;
    cout << get1sCount(n);
    return 0;
}