#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int hack(int arr[], int n, int l){
    unordered_map<int,int> um;
    int a[n], max=0;
    int sum=0;
    FOR(i,0,n){
        sum+=arr[i];
        a[i]=((sum%l)+l)%l;
    }
    FOR(i,0,n){
        if(a[i]==0){
            max=i+1;
        }
        else if(um.find(a[i])==um.end()){
            um[a[i]]=i;
        }
        else{
            if(max<(i-um[a[i]])){
                max = i-um[a[i]];
            }
        }
    }
    return max;
}

void solve()
{
    
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}