#include <iostream>

using namespace std;

string movexEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = movexEnd(s.substr(1));
    if (s[0] == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{

    cout << movexEnd("xxxxmasad");
    return 0;
}