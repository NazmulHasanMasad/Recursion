#include <iostream>

using namespace std;

bool sorted(int array[], int n)
{

    if (n == 1)
        return true;

    bool rest = sorted(array + 1, n - 1);
    return (array[0] < array[1] && rest);
}

int main()
{
    int array[] = {1, 2, 8, 4, 5};
    cout << sorted(array, 5);

    return 0;
}