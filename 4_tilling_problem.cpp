#include <iostream>
using namespace std;

int tailingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return tailingWays(n - 1) + tailingWays(n - 2);
}

int main()
{
    cout << tailingWays(4) << endl;

    return 0;
}