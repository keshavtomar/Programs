#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    // Write your code here
    int i = 0;
    int j = 0;
    int total_size = size1 + size2;
    while ((i + j) < total_size)
    {
        if (i == size1 || j == size2)
        {
            // now no need to compare
            break;
        }
        ans[i + j] = min(arr1[i], arr2[j]);
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    if (i == size1)
    {
        // first array ends before
        while ((i + j) < total_size)
        {
            ans[i + j] = arr2[j];
            j++;
        }
    }
    else
    {
        while ((i + j) < total_size)
        {
            ans[i + j] = arr1[i];
            i++;
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}

int main(void)
{
    int a[] = {-6, -1, 1, 2, 3, 8, 45, 234, 256};
    int b[] = {-9, 1, 5, 11, 67};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);

    int c[10000];

    merge(a, n, b, m, c);

    cout << "After merging the resultant array is : ";
    printArray(c, n + m);
}