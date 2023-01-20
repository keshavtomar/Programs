#include <iostream>
#include <queue>

using namespace std;

// this is a question from codeforces

int buyTicket(int *arr, int n, int k)
{
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({arr[i], n - i});
    }

    int indexToFind = n - k;

    pair<int, int> myPair = {arr[k], indexToFind};

    int ans = 1;

    while (pq.top() != myPair)
    {
        ans++;
        pq.pop();
    }

    return ans;
}

int main()
{
    int arr[] = {3, 9, 4};
    cout << buyTicket(arr, 3, 2);
    return 0;
}