#include <iostream>
#include <string>

using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno"};

void phoneDigits(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    string code = keypadArr[ch - '0'];

    for (int i = 0; i < code.length(); i++)
    {
        phoneDigits(ros, ans + code[i]);
    }
}

int main()
{
    phoneDigits("23", "");
    cout << endl;
    return 0;
}