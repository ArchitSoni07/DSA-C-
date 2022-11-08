#include <iostream>
using namespace std;

int fibb(int pos)
{
    if (pos == 0 || pos == 1)
    {
        return pos;
    }
    return fibb(pos - 1) + fibb(pos - 2);
}

int main()
{
    int pos = 5;
    cout << fibb(pos) << endl;
    return 0;
}