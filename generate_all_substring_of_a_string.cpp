#include <iostream>

using namespace std;

void substring(string s, string ans)
{
    if (s.length() == 0)
    {

        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans + ch);
}

int main()
{
    substring("ABCDEF", "");
    cout << endl;
    return 0;
}