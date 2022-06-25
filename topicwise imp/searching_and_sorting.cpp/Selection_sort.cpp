#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void printArray(int a[], int n);   //declaration only

/*
Selection sort
this will take arrayname and size as input,
and sort that array, remember this function is only for int type array
changes will reflect in the passed array, bcoz array is always passed by reference

*/

void selectionSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i]; // minimum value in the remaining unsorted array each time
        int min_index = i;   // index at which that minimum value is stored
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }

        // after it completes the search of minimum and index at which it is stored, swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(void)
{
    int a[] = {645, 2, 57, 5, 86, -54, -4};
    int n = sizeof(a) / sizeof(int);

    selectionSort(a, n);

    cout << "After Selection sorting : ";
    printArray(a, n);
}

//no\\


// to print the array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}