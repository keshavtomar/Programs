// https://www.codechef.com/problems/FIRESC
// this problem can be solved using in and out time theory of graphs

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

// we are going to save just the in time in the nodes, ya fir visited m bhi store kr skte h

int dfs(int u, vector<bool> &vis, vector<vector<int>> &g, int &count)
{
    vis[u] = true;
    count++;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v, vis, g, count);
        }
    }
    return count;
}

void solve()
{
    int n, edges;
    cin >> n >> edges;
    int x,y;

    vector<vector<int>> g(n + 1);
    for(int i=0; i<edges; i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<bool> vis(n + 1, false);

    int prod = 1;

    int cnt = 0;

    for(int i=1; i<=n; i++){
        if(!vis[i]){
            cnt++;
            int x = 0;
            prod*=dfs(i,vis,g,x);
        }
    }
    cout<<cnt<<" "<<prod<<endl;

    return;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}