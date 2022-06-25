#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int findSecondLargest(int *arr, int n)
{
    // Write your code here
    int max = INT32_MIN;
    int second_max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main(void)
{
    int a[] = {645, 2, 57, 5, 86, -54, -4};
    int n = sizeof(a) / sizeof(int);

    int m2 = findSecondLargest(a, n);
    cout << m2;
}