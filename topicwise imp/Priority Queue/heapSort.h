#include <algorithm>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

void heapSort(int arr[], int n)
{
    // Write your code
    // minheap
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        while (childIndex != 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (arr[childIndex] > arr[parentIndex])
            {
                break;
            }
            else
            {
                int temp = arr[childIndex];
                arr[childIndex] = arr[parentIndex];
                arr[parentIndex] = temp;
                childIndex = parentIndex;
            }
        }
    }

    // min heap creation complete, now deletion starts

    int size = n;
    while (size > 1)
    {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;

        size--;
        int parentIndex = 0;
        int lastIndex = size - 1;
        while (parentIndex <= lastIndex)
        {
            // left child index
            int LCI = 2 * parentIndex + 1;
            // right child index
            int RCI = 2 * parentIndex + 2;
            int minIndex;
            if (LCI > lastIndex && RCI > lastIndex)
            {
                break;
            }
            else if (LCI <= lastIndex && RCI <= lastIndex)
            {
                int mn = min(arr[parentIndex], min(arr[LCI], arr[RCI]));
                if (mn == arr[parentIndex])
                {
                    break;
                }
                else if (mn == arr[LCI])
                {
                    swap(arr[parentIndex], arr[LCI]);
                    minIndex = LCI;
                }
                else
                {
                    swap(arr[parentIndex], arr[RCI]);
                    minIndex = RCI;
                }
            }
            else
            {
                int mn = min(arr[parentIndex], arr[LCI]);
                if (mn == arr[parentIndex])
                {
                    break;
                }
                else
                {
                    swap(arr[parentIndex], arr[LCI]);
                    minIndex = LCI;
                }
            }

            parentIndex = minIndex;
        }
    }
}