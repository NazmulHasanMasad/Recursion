#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return n == 1 || n % 2 == 0 && isPowerOfTwo(n / 2);
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);

    return 0;
}