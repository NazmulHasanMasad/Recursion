#include <iostream>

using namespace std;

int reverse(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }

    string ros = s.substr(1);
    cout << ros << endl;
    reverse(ros);
    cout << s[0];
}

int main()
{

    reverse("masad");
    return 0;
}