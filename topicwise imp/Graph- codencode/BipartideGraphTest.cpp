// a graph is bipartide if nodes present in it can be divided into 2 groups such that nodes in 1 group only has interactions with node in another group

// https://leetcode.com/problems/is-graph-bipartite
//  see this interesting example - https://www.spoj.com/problems/BUGLIFE/

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

bool dfs(int u, vector<int> &color, vector<vector<int>> &g, int c)
{
    color[u] = c;

    for (auto v : g[u])
    {
        if (color[v] == 0)
        {
            bool x = dfs(v, color, g, -1 * c);
            if (x == false)
            {
                return false;
            }
        }
        if (color[v] == color[u])
        {
            return false;
        }
    }

    return true;
}

bool isBipartite(vector<vector<int>> &g)
{
    int n = g.size()-1;

    vector<int> color(n + 1, 0); // uncolored

    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
        {
            if (!dfs(i, color, g, -1))
            {
                return false;
            }
        }
    }
    return true;
}

void solve(int t)
{
    int n, edges;
    cin>>n>>edges;

    vector<vector<int>> g(n+1);

    FOR(i,0,edges){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    cout<<"Scenario #"<<t<<":"<<endl;

    if(isBipartite(g)){
        cout<<"No suspicious bugs found!"<<endl;
    }
    else{
        cout<<"Suspicious bugs found!"<<endl;
    }


    return;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    int i=1;
    while (i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}