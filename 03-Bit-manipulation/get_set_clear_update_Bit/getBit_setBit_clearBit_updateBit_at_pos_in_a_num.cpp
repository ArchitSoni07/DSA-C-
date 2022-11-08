#include <iostream>
using namespace std;

int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}

int setBit(int num, int pos)
{
    return (num | (1 << pos));
}

int clearBit(int num, int pos)
{
    return (num & ~(1 << pos));
}

int updateBit(int num, int pos, int val)
{
    int mask = ~(1 << pos);
    int finalNum = num & mask;
    return (finalNum | (val << pos));
}

int main()
{

    int num = 5;
    int pos = 2;

    cout << getBit(num, pos);
    cout << endl;

    cout << setBit(num, 1);
    cout << endl;

    cout << clearBit(num, pos);
    cout << endl;

    cout << updateBit(num, 1, 1);

    return 0;
}