#include <iostream>
using namespace std;

bool check_powerOF2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{

    int n = 16;
    int m = 7;
    cout << check_powerOF2(n);
    cout << endl;
    cout << check_powerOF2(m);
    return 0;
}