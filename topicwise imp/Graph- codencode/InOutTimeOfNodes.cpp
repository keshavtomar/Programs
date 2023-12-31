// So in this question we have to find the in and out time of the nodes in the graph
// In and Out time is useful in answering real time queries like finding the number in a connected component
// and telling if a node is present in that component or not
// or if it is a tree then telling if a given node is a subtree of the given root or not


#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

// jaise hi dfs call hoga toh jis time pe node call hui us node ke in time m wo time store ho jaayega, then timer bdhega har baar enter hone ke baad, or exit hone ke baad
// isse hum save kr skte h ki kis time pe konsa node enter hua tha or exit hua tha

void dfs(int u, int parent, vector<bool> &vis, vector<vector<int>> &g, vector<int> &in, vector<int> &out, int &timer){
    vis[u] = true;
    in[u] = timer++;
    for(auto v: g[u]){
        if(!vis[v]){
            dfs(v,u,vis,g,in,out,timer);
        }
    }
    out[u] = timer++;
    return;
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