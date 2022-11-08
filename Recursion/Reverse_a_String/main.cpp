#include <iostream>
using namespace std;

void revStr(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string ros = str.substr(1);
    revStr(ros);
    cout << str[0];
}

int main()
{

    string str = "ARCHIT";

    revStr(str);

    return 0;
}