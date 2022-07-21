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
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> time; // arrival day, leaving day, index
    int arr, dep;

    map<int, int> mpp;                      //index, room alloted

    FOR(i, 0, n)
    {
        cin >> arr >> dep;
        time.pb({{arr, dep}, i});
    }

    sort(time.begin(), time.end());

    FOR(i,0,n){
        
    }

    return 0;
}