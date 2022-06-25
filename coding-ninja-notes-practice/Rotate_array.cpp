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

/*
This  function will rotate the array of size an by an integer d
*/

void rotate(int *arr, int d, int n)
{

    int temp[n];

    int i = 0;
    int j = d;

    // copying the arr into temp leaving d integers in arr
    while (j < n)
    {
        temp[i] = arr[j];
        i++;
        j++;
    }

    // copying the initial arr into temp
    j = 0;
    while (i < n)
    {
        temp[i] = arr[j];
        i++;
        j++;
    }

    // copying temp again in arr;
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void)
{
    int a[] = {645, 2, 57, 5, 86, -54, -4};
    int n = sizeof(a) / sizeof(int);

    rotate(a, 3, n);
    printArray(a, n);
}