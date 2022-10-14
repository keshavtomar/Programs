#include <iostream>

using namespace std;

bool isMaxHeap(int arr[], int n, int i = 0)
{
    if (i >= n)
    {
        return true;
    }

    int lci = 2 * i + 1;
    int rci = 2 * i + 2;

    if (lci < n && arr[lci] > arr[i])
    {
        return false;
    }
    if (rci < n && arr[rci] > arr[i])
    {
        return false;
    }

    return isMaxHeap(arr, n, lci) && isMaxHeap(arr, n, rci);
}

int main()
{
    return 0;
}
