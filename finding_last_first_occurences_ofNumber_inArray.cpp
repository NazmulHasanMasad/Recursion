#include <iostream>

using namespace std;

int firstOcuurence(int array[], int n, int i, int key)
{
    if (i == n)
    {

        return -1;
    }

    if (array[i] == key)
    {
        return i;
    }
    return firstOcuurence(array, n, i + 1, key);
}

int lastOccurences(int array[], int n, int i, int key)
{
    if (i == n)
    {

        return -1;
    }
    int rest = lastOccurences(array, n, i + 1, key);

    if (rest != -1)
    {
        return rest;
    }
    if (array[i] == key)
    {

        return i;
    }
    return -1;
}

int main()
{
    int array[] = {4, 2, 1, 2, 5, 2, 7};

    cout << firstOcuurence(array, 7, 0, 2) << endl;
    cout << lastOccurences(array, 7, 0, 2) << endl;

    return 0;
}