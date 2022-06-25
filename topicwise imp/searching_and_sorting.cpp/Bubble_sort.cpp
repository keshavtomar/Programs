#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

/*
Bubble sort, takes array name and size as input
and sort the array
*/

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // if bigger element is before bubble it
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
    int a[] = {645, 2, 57, 5, 86, -54, -4};
    int n = sizeof(a) / sizeof(int);

    bubbleSort(a, n);

    cout << "After Bubble sorting : ";
    printArray(a, n);
}