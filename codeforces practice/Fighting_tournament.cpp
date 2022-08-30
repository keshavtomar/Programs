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
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        FOR(i, 0, n)
        {
            cin >> arr[i];
        }

        int p1 = 0, p2 = 1;

        int indexofmax = 0;

        FOR(i, 0, n)
        {
            if (arr[i] > arr[indexofmax])
            {
                indexofmax = i;
            }
        }

        vi results;

        if (indexofmax == 0)
        {
            goto solve;
        }

        // cout << indexofmax << endl;

        while (p2 != indexofmax)
        {
            if (arr[p1] > arr[p2])
            {
                results.pb(p1);
                p2++;
            }
            else
            {
                results.pb(p2);
                p1 = p2;
                p2++;
            }
            // cout << "hello";
        }
        // cout << endl;

        // for (auto cs : results)
        // {
        //     cout << cs << " ";
        // }
        // cout << endl;

        // cout << indexofmax << endl;

    solve:

        FOR(i, 0, q)
        {
            int ind, noofmatches;
            cin >> ind >> noofmatches;

            if (ind - 1 == indexofmax)
            {
                if (noofmatches <= results.size())
                {
                    cout << "0" << endl;
                }
                else
                {
                    cout << noofmatches - results.size() << endl;
                }
            }
            else
            {
                if (noofmatches > results.size())
                {
                    cout << upper_bound(results.begin(), results.end(), ind - 1) - lower_bound(results.begin(), results.end(), ind - 1) << endl;
                }
                else
                {
                    // cout << "this";
                    cout << upper_bound(results.begin(), results.begin() + noofmatches, ind - 1) - lower_bound(results.begin(), results.begin() + noofmatches, ind - 1) << endl;
                }
            }
        }
    }
    return 0;
}