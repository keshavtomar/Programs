#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        FOR(i, 0, n)
        {
            cin >> arr[i];
        }

        map<int, int> freq;

        FOR(i, 0, n)
        {
            auto it = freq.find(arr[i]);
            if (it == freq.end())
            {
                freq.insert({arr[i], 1});
            }
            else
            {
                it->second++;
            }
        }

        ll t = 0;
        ll s = 0;

        for (auto frq : freq)
        {
            if (frq.second >= 2)
            {
                t++;
            }
            else if (frq.second == 1)
            {
                s++;
            }
        }

        cout << t + (s + 1) / 2 << endl;
    }
    return 0;
}