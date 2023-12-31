// In Binary Tree of coding ninjas, I have calculated diameter using Height of a tree and recursion in O(n) time

//So to calculate diameter of a tree given in graph form

//Naive approach
// from each node calculate the distance of farthest node using DFS -> O(n^2)

//Better approach
//we can find diameter in only 2 dfs run

//take any arbitrary node as root node and run dfs from it and find the farthest node, let this node be x

//Run a dfs from node x and find the maximum distance from this node to any other node, this distance is diameter

//Practice here - https://www.spoj.com/problems/PT07Z/

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;


// finding the farthest node using dist array
void dfs(int u, vector<int> &dis, vector<vector<int>> &g, int d){
    dis[u]=d;


    for(auto v: g[u]){
        if(dis[v]==0){
            dfs(v,dis,g,d+1);
        }
    }
    return;
}

void solve()
{
    int n,x,y;
    cin>>n;
    // edges in a tree are n-1
    int edges = n-1;

    vector<vector<int>> g(n+1);
    FOR(i,0,n-1){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }

    vector<int> dis(n+1,0);

    //taking 1 as the root node
    dfs(1,dis,g,1);
    int mxd = 0;
    int mxn = 0;      //node having maximum distance

    for(int i=1; i<=n; i++){
        if(dis[i]>mxd){
            mxd=dis[i];
            mxn=i;
        }
    }

    vector<int> dis2(n+1,0);

    dfs(mxn,dis2,g,1);

    mxd=0;
    for(int i=1; i<=n; i++){
        // cout<<"dist of "<<i<<" from 3 is "<<dis2[i]<<endl;
        mxd=max(mxd,dis2[i]);
    }
    cout<<mxd-1<<endl;

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