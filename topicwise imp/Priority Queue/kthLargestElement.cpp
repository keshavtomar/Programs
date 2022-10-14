#include <iostream>
#include <queue>

using namespace std;

int kthLargest(int *arr, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        pq.push(arr[i]);
        pq.pop();
    }

    return pq.top();
}

int main()
{
    int arr[] = {2, 5, 85, 3, 12, 40};
    cout << kthLargest(arr, 6, 2);
    return 0;
}
