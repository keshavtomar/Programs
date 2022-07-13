// A bitonic sequence is first strictly increasing and than strictly decreasing
// in this we will first find the pivot point and then search the element in left of pivot and right of pivot

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int findPivot(int vc[], int n)
{
    int start = 0;
    int end = n - 1;
    if (vc[0] > vc[1])
    {
        return 0;
    }
    if (vc[n - 1] > vc[n - 2])
    {
        return n - 1;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vc[mid - 1] < vc[mid] && vc[mid + 1] < vc[mid])
        {
            return mid;
        }
        else if (vc[mid - 1] < vc[mid])
        { // ek hi condition se kaam chl jaayega
            // go right
            start = mid + 1;
        }
        else
        {
            // go left
            end = mid - 1;
        }
    }
    return -1;
}

int BinarySearchinIncreasing(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            // go left
            end = mid - 1;
        }
        else
        {
            // go right
            start = mid + 1;
        }
    }

    return -1;
}

int BinarySearchinDecreasing(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            // go right
            start = mid + 1;
        }
        else
        {
            // go left
            end = mid - 1;
        }
    }
    return -1;
}

int solve(int *A, int n1, int B)
{
    int pivot = findPivot(A, n1);

    // binary search in left of pivot, don't include pivot
    int i1 = BinarySearchinIncreasing(A, pivot, B);
    int i2 = BinarySearchinDecreasing(A + pivot, n1 - pivot, B);
    if (i2 != -1)
    {
        i2 += pivot;
    }

    return max(i1, i2); // if element not found this will automatically return -1
}

int main()
{
    int arr[] = {1, 4, 11, 15, 21, 64, 50, 2};
    int n = 8;

    int B;
    cin >> B;
    cout << solve(arr, n, B);

    return 0;
}