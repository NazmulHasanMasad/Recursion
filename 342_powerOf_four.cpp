#include <iostream>

using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 0)
        return false;

    return n == 1 || n % 4 == 0 && isPowerOfFour(n / 4);
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfFour(n);

    return 0;
}