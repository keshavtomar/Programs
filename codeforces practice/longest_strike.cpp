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
        int n, k;
        cin >> n >> k;

        int curr;

        map<int, int> mpp;
        set<int> stt;

        FOR(i, 0, n)
        {
            cin >> curr;
            mpp[curr]++;
            stt.insert(curr);
        }

        set<int> ans;

        bool found = 0;

        for (auto cs : stt)
        {
            if (mpp[cs] >= k)
            {
                ans.insert(cs);
            }
        }

        if (ans.empty())
        {
            cout << "-1" << endl;
            continue;
        }

        int l = *ans.begin(), r = *ans.begin();

        auto start = ans.begin();
        auto prev = start;
        auto end = start;
        end++;

        // for (auto cs : ans)
        // {
        //     cout << cs << " ";
        // }

        while (end != ans.end())
        {
            if (*end == (*prev) + 1)
            {
                prev++;
            }
            else
            {
                start = end;
                prev = end;
            }
            if ((*end - *start) > (r - l))
            {
                // cout << l << " " << r << endl;
                l = *start;
                r = *end;
            }
            end++;
        }

        cout << l << " " << r << endl;
    }
    return 0;
}