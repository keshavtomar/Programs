#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int arrayRotateCheck(int *arr, int size)
{
    // Write your code here

    int i = size - 1;
    while (i > 0)
    {
        if (arr[i] < arr[i - 1])
        {
            return i;
        }
        i--;
    }
    return 0;
}

int main(void)
{
    int a[] = {58, 99, 4, 8, 11};
    int n = sizeof(a) / sizeof(int);

    cout << arrayRotateCheck(a, n);
}