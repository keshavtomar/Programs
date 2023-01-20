#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void findMedian(int *arr, int n)
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
        int s1 = maxHeap.size();
        int s2 = minHeap.size();

        int x = arr[i];
        if (s1 > 0 && s2 > 0)
        {

            int l = maxHeap.top();
            int r = minHeap.top();

            if (x < l)
            {
                maxHeap.push(x);
                if (s1 > s2)
                {
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                    cout << (minHeap.top() + maxHeap.top()) / 2 << " ";
                }
                else
                {
                    cout << l << " ";
                }
            }
            else if (x > r)
            {
                minHeap.push(x);
                if (s1 == s2)
                {
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                    cout << maxHeap.top() << " ";
                }
                else
                {
                    cout << (minHeap.top() + maxHeap.top()) / 2 << " ";
                }
            }
            else
            {
                if (s1 == s2)
                {
                    minHeap.push(x);
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                    cout << maxHeap.top() << " ";
                }
                else
                {
                    minHeap.push(x);
                    cout << (minHeap.top() + maxHeap.top()) / 2 << " ";
                }
            }
        }
        else if (s1 == 0)
        {
            maxHeap.push(x);
            cout << x << " ";
        }
        else
        {
            if (maxHeap.top() > x)
            {
                maxHeap.push(x);
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            cout << (minHeap.top() + maxHeap.top()) / 2 << " ";
        }
    }
}

int main()
{
    int arr[] = {6, 2, 1, 3, 7, 5, 2, 10, 12, 4};
    findMedian(arr, 10);
    return 0;
}