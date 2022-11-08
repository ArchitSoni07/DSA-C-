#include <iostream>
using namespace std;

string move(string str)
{
    if (str.length() == 0)
    {
        return "";
    }

    char ch = str[0];
    string rest = move(str.substr(1));

    if (ch == 'x')
    {
        return (rest + ch);
    }

    return (ch + rest);
}

int main()
{
    string str = "axsxsaczxxc";
    cout << move(str);
    return 0;
}