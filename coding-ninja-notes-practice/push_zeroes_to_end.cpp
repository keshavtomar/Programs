#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}

void pushZeroesEnd(int *arr, int n)
{
    // Write your code here
    int temp[n];
    int k = 0;

    // pushing non-zero elements in temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    // pushing zeroes in the remaining size of temp array
    for (int i = k; i < n; i++)
    {
        temp[i] = 0;
    }

    // copying temp array to main arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void)
{
    int a[] = {0, 0, 7, 3, 0, -1, 0};
    int n = sizeof(a) / sizeof(int);
    pushZeroesEnd(a, n);
    printArray(a, n);
}