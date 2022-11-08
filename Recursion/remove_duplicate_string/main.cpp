#include <iostream>
using namespace std;

string remD(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    char ch = str[0];
    string rest = remD(str.substr(1));

    if (ch == rest[0])
    {
        return rest;
    }

    return (ch + rest);
}

int main()
{

    string str = "aaabbcdddeefff";

    cout << remD(str);

    return 0;
}