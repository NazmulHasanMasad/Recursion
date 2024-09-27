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
    int code = ch;

    substring(ros, ans);
    substring(ros, ans + ch);
    substring(ros, ans + to_string(code));
}

int main()
{
    substring("ABCDEF", "");
    cout << endl;

    return 0;
}