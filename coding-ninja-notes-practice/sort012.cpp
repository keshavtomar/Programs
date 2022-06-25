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

void sort012(int *arr, int n)
{
    // without using temp array or sort algorithms or counting no of occurences of each element
    // nz refers to newzero, nT refers to newtwo
    int i = 0, nz = 0, nT = n - 1;
    while (i <= nT)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[nz]);
            if (i == nz)
            {
                i++;
            }
            nz++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[nT]);
            nT--;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
    }
}

int main(void)
{
    int a[] = {0, 0, 2, 2, 0, 1, 0, 2};
    int n = sizeof(a) / sizeof(int);

    sort012(a, n);

    printArray(a, n);
}