#include <iostream>

using namespace std;

int friendsPair(int n)
{
    // base case
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendsPair(n - 1) + friendsPair(n - 2) * (n - 1);
}

int main()
{

    cout << friendsPair(4) << endl;
    return 0;
}

// time complexity 0(n)
//  space complexity 0(n)