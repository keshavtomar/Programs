#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int binarySearch(int a[], int start, int end, int x)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else if (a[mid] > x)
    {
        end = mid - 1;
    }
    else
    {
        start = mid + 1;
    }

    return binarySearch(a, start, end, x);
}


int binarySearch(int input[], int size, int element)
{
    // Write your code here
    return binarySearch(input, 0, size - 1, element);
}

int main(void)
{
    int a[] = {2,3,4,5,6,8};
    if (binarySearch(a, 6, 5)!=-1)
    {
        cout << "Element found in array at location "<<binarySearch(a,6,5)<<endl;
    }
    else 
    {
        cout << "Element not found in array";
    }
}