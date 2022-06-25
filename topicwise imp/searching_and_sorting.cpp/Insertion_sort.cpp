#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void printArray(int a[], int n);

/*
Insertion sort
this will take arrayname and size as input,
and sort that array, remember this function is only for int type array
changes will reflect in the passed array, bcoz array is always passed by reference

*/

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (curr < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = curr;
    }
}

int main(void)
{
    int a[] = {645, 2, 57, 5, 86, -54, -4};
    int n = sizeof(a) / sizeof(int);

    insertionSort(a, n);

    cout << "After Insetion sorting : ";
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

// for (int i = 1; i < n; i++)
// {
//     int j = i - 1;
//     int curr = arr[i];

//     // comparing to left
//     while (j >= 0)
//     {
//         if (curr >= arr[j])
//         {
//             break;
//         }
//         j--;
//     }
//     j++;

//     // shifting to right
//     int k = i;
//     while (k > j)
//     {
//         arr[k] = arr[k - 1];
//         k--;
//     }
//     arr[k] = curr;
//     // cout << "At i = " << i << " array is :";
//     // printArray(arr, n);
// }