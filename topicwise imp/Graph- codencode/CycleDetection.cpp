// In this I am going to find the cycle in a graph using DFS
// I am going to use the concept of back edge
// So if there consists an edge from a node to its ancestor which is not the direct parent of that node then there is a cycle

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

bool dfs(int u, int parent, vector<bool> &vis, vector<vector<int>> &g){
    vis[u] = true;

    for(auto v: g[u]){
        if(!vis[v]){
            if(dfs(v,u,vis,g)){
                return true;
            }
        }
        else{
            if(v!=parent){
                return true;
            }
        }
    }
    return false;
}

void solve()
{

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