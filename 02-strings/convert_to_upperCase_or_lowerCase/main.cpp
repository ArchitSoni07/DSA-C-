#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "scxjhdsbchgjvdsc";

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = char(int(str[i]) - 32);
        cout << str[i];
    }

    string s = "scsdcscsdcdvf";
    transform(s.begin(), s.end(), s., ::toupper);
    cout << s;

    return 0;
}