// binary search on unsorted array, or binary search on answer concept
// return the index of peak element
// there may be more than 1 peak elements, we have to return index of any one of them

#include <iostream>
#include <bits/stdc++.h>

int peakElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    if (n == 1 || arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[n - 1] > arr[n - 2])
    {
        return n-1;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            // go left
            end=mid-1;
        }
        else
        {
            // go right
            start=mid+1;
        }
    }
    return -1;
}

int main()
{

    int n;
    scanf("%d",&n);
    int arr[100000];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int A = peakElement(arr, n);

    printf("%d\n", A);
    return 0;
}
