#include <iostream>
#include <queue>

using namespace std;

vector<int> kLargest(int input[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }

    for (int i = k; i < n; i++)
    {
        pq.push(input[i]);
        pq.pop();
    }

    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}

int main()
{
    int arr[] = {2, 5, 85, 3, 12, 40};
    vector<int> ans = kLargest(arr, 6, 3);
    for (auto cs : ans)
    {
        cout << cs << " ";
    }
    return 0;
}