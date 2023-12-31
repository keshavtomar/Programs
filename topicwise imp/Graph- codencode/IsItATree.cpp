// A graph can be proved a tree if it has only 1 connected component, and should have no cycle, 
//(have no cycle can be proved if it has n-1 edges for n nodes)

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

void dfs(int u, vector<bool> &vis, vector<vector<int>> &g){
    vis[u]=true;

    for(auto v: g[u]){
        if(!vis[v]){
            dfs(v,vis,g);
        }
    }
}

void solve()
{

    int n, edges;
    cin>>n>>edges;

    if(edges!=n-1){
        cout<<"NO"<<endl;
        return;
    }

    vector<vector<int>> g(n+1);
    FOR(i,0,edges){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<bool> vis(n+1,false);

    dfs(1,vis,g);

    for(int i=1; i<=n; i++){
        if(vis[i]==false){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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


// Input:
// 3 2
// 1 2
// 2 3

// Output:
// YES

