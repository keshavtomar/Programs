#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vc;
    int k;
    FOR(i, 0, n)
    {
        cin >> k;
        vc.pb({k, i});
    }

    vector<pair<int, int>> temp = vc;

    sort(temp.begin(), temp.end());

    int turns = 1;
    FOR(j, 1, n)
    {
        if (temp[j].second < temp[j - 1].second)
        {
            turns++;
        }
    }

    FOR(i, 0, m)
    {
        int p1, p2;
        cin >> p1 >> p2;
        p1--;
        p2--;
        int i1 = vc[p1].first;
        int i2 = vc[p2].first;
        swap(vc[p1].first, vc[p2].first);

        int first = min(i2 - 1, i1 - 1);
        int last = max(i2 - 1, i1 - 1) + 1;

        int before=0;
        FOR(l,first,last+1){

        }

        swap(temp[i2 - 1].second, temp[i1 - 1].second);


        // cout << "After sorting vc : " << endl;
        // for (auto it : vc)
        // {
        //     cout << it.first << " ";
        // }
        // cout << endl;
        // cout << "After sorting temp : " << endl;
        // for (auto it : temp)
        // {
        //     cout << it.first << " ";
        // }
        // cout << endl;
        // for (auto it : temp)
        // {
        //     cout << it.second << " ";
        // }
        // cout << endl;

        cout << turns << endl;
    }

    return 0;
}