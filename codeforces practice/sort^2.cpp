#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

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
        int n, k;
        cin >> n >> k;
        int arr[n];

        FOR(i, 0, n)
        {
            cin >> arr[i];
        }

        int count = 0;

        int stit = 0;
        int endit = 1;

        while (endit < n)
        {
            if (2 * arr[endit] > arr[endit - 1])
            {
                if ((endit - stit) >= k)
                {
                    count++;
                }
                endit++;
            }
            else
            {
                stit = endit;
                endit = stit + 1;
            }
        }

        cout << count << endl;
    }
    return 0;
}