#include <iostream>
#include <queue>

using namespace std;

vector<int> kSmallest(int arr[], int n, int k)
{
    vector<int> ans;

    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        pq.push(arr[i]);
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

    int input[] = {5, 2, 8, 9};
    int k = 2;
    vector<int> output = kSmallest(input, 4, k);
    for (auto cs : output)
    {
        cout << cs << " ";
    }
    cout << endl;
    return 0;
}