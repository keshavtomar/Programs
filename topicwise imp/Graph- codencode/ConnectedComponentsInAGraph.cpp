#include <bits/stdc++.h>

using namespace std;

void dfs(int u, vector<vector<int>> &g, vector<bool> &vis){
	vis[u] = true;
	for(auto v: g[u]){
		if(!vis[v]){
			dfs(v,g,vis);
		}
	}
}

int main() {
	int n, edges;
	cin>>n>>edges;

	vector<bool> vis(n+1,false);
	vector<vector<int>> g(n+1);

	for(int i=0; i<edges; i++){
		int x, y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	int cc = 0;

	for(int i=1; i<=n; i++){
		if(!vis[i]){
			dfs(i,g,vis);
			cc++;
		}
	}

	cout<<cc<<endl;
	return 0;
}

//input 1:
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

//output 1:
// 3