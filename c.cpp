#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;


int helper(int L, bool chefturn, vector<vector<int>> &dp){
	if(L<=4){
		if(chefturn){
			if(L==1||L==2){
				return 1;
			}
			else{
				return L;
			}
		}
		else{
			if(L==1){
				return 0;
			}
			else if(L==2||L==3){
				return 1;
			}
			else{
				return 4;
			}
		}
	}

	if(dp[L][chefturn]!=-1){
		return dp[L][chefturn];
	}

	int ans = 0;
	for(int i=1; i<=4; i++){
		int x;
		if(i==1){
			x = helper(L-i,!chefturn,dp);
		}
		else{
			x=helper(L-i,chefturn,dp);
		}
		ans = (ans+x)%mod;
	}

	return dp[L][chefturn]=ans;
}

void solve(vector<vector<int>>  &dp)
{
	int L;
	cin>>L;
	cout<<helper(L,true,dp)<<endl;
	return;
}

int32_t main()
{
	int t = 1;
	cin >> t;
	vector<vector<int>> dp(100001,vector<int>(2,-1));
	while (t--)
	{
		solve(dp);
	}
	return 0;
}