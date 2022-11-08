#include <iostream>
using namespace std;

int power(int n, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    int prevPower = power(n, pow - 1);
    return n * prevPower;
}

int main()
{

    int n = 10;
    int pow = 5;

    cout << power(n, pow) << endl;

    return 0;
}