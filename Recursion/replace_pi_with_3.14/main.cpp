#include <iostream>
using namespace std;

void swap(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        swap(str.substr(2));
    }
    else
    {
        cout << str[0];
        swap(str.substr(1));
    }
}

int main()
{

    string str = "pippxxppxpi";

    swap(str);

    return 0;
}