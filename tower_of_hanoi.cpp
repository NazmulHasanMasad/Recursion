#include <iostream>

using namespace std;

void towerOfHonoi(int n, int src, int des, int help)
{
    if (n == 0)
    {
        return;
    }
    towerOfHonoi(n - 1, src, help, des);
    cout << "Moving " << src << " to " << des << endl;

    towerOfHonoi(n - 1, help, des, src);
}

int main()
{

    towerOfHonoi(3, 'A', 'C', 'B');

    return 0;
}