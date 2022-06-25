#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

/*Binary search function (pre-requisite-> array must be sorted)
 takes array name, it's size and value(x) to search as input,
  and return index of the element if found and -1 if not found*/

int binarySearch(int *arr, int n, int x)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            // element found
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
    }

    // if loop completes, it means element not found

    return -1;
}

int main(void)
{
    int a[] = {3, 6, 24, 123, 456, 1008, 100056};
    int n = sizeof(a) / sizeof(int);

    int x = 527;
    int y = 1008;

    if (binarySearch(a, n, x) != -1)
    {
        cout << x << " is present in the array at index " << binarySearch(a, n, x) << endl;
    }
    else
    {
        cout << x << " is not present in the array" << endl;
    }

    if (binarySearch(a, n, y) != -1)
    {
        cout << y << " is present in the array at index " << binarySearch(a, n, y) << endl;
    }
    else
    {
        cout << y << " is not present in the array" << endl;
    }
}