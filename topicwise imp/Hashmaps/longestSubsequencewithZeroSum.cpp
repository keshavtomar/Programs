#include <iostream>

#include <vector>
#include <map>

using namespace std;

int lengthOfLongestSubsetWithZeroSum(int *arr, int n)
{
    vector<int> pr(n + 1);
    pr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pr[i] = pr[i - 1] + arr[i - 1];
    }

    map<int, int> forward;
    map<int, int> bacward;

    for (int i = 0; i <= n; i++)
    {
        forward[pr[i]] = i;
    }
    for (int i = n; i >= 0; i--)
    {
        bacward[pr[i]] = i;
    }

    int maxlen = 0;

    for (auto cs : forward)
    {
        int x = cs.first;
        maxlen = max(maxlen, forward[x] - bacward[x]);
    }

    return maxlen;
}

int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}