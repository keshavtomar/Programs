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
    int n;
    cin >> n;
    vector<pair<int, int>> vc;
    int k;
    FOR(i, 0, n)
    {
        cin >> k;
        vc.pb({k, i});
    }

    sort(vc.begin(), vc.end());

    int turns = 1;

    // cout<<"After sorting : "<<endl;
    // for(auto it: vc){
    //     cout<<it.first<<" ";
    // }
    // cout<<endl;
    // for(auto it: vc){
    //     cout<<it.second<<" ";
    // }
    // cout<<endl;

    FOR(i, 1, n)
    {
        if (vc[i].second < vc[i - 1].second)
        {
            turns++;
        }
    }

    cout << turns << endl;

    return 0;
}