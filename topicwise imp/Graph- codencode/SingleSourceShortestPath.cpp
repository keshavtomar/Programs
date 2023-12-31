#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int cd, vector<int> &dist, vector<vector<int>> &g){
    dist[u]=cd;

    for(auto v: g[u]){
        if(dist[v]>cd+1){
            dfs(v,cd+1,dist,g);
        }
    }
    return;
}

int main() {
	int n;
	cin>>n;

	vector<vector<int>> g(n+1);
	for(int i=0; i<n-1; i++){
		int x, y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	// distance of each country from country 1, let it be int_max

	vector<int> dist(n+1, INT_MAX);

	int q;
	cin>>q;
	// taking input of the girls living in city
	vector<int> girls;
	for(int i=0; i<q; i++){
		int im;
		cin>>im;
		girls.push_back(im);
	}

	dfs(1,0,dist, g);

    int smd = INT_MAX;
    int ans = -1;



    sort(girls.begin(),girls.end());

    for(int i=0; i<girls.size(); i++){
        if(dist[girls[i]]<smd){
            ans=girls[i];
            smd=dist[girls[i]];
        }
    }

    cout<<ans<<endl;
}









// There are N countries {1,2,3,4....N} and N-1 roads(i.e depicting a tree)

// Bishu lives in the Country 1 so this can be considered as the root of the tree.

// Now there are Q girls who lives in various countries (not equal to 1) .

// All of them want to propose Bishu.But Bishu has some condition.

// He will accept the proposal of the girl who lives at minimum distance from his country.

// Now the distance between two countries is the number of roads between them.

// If two or more girls are at the same minimum distance then he will accept the proposal of the girl who lives in a country with minimum id.

// No two girls are at same country.

// Input: First line consists of N,i.e number of countries Next N-1 lines follow the type u v which denotes there is a road between u and v. Next line consists of Q Next Q lines consists of x where the girls live.

// Output: Print the id of the country of the girl who will be accepted.

// Help Him!!!!!

// contraints: 2<=N<=1000 1<=u,v<=N 1<=Q<=(N-1)

// input 1 : 
// 6
// 1 2
// 1 3
// 1 4
// 2 5
// 2 6
// 4
// 5
// 6
// 3
// 4

// output 1:
// 3