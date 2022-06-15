// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(void)
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         struct pointer
//         {
//             int a;
//             bool used = 0;
//         };

//         pointer h[2000];
//         for (int i = 0; i < 2 * n; i++)
//         {
//             cin >> h[i].a;
//         }

//         int count = 1;

//         for (int i = 0; i < 2 * n - 1; i++)
//         {
//             if (h[i].used == 1)
//             {
//                 continue;
//             }
//             int j;
//             for (j = i + 1; j < 2 * n; j++)
//             {
//                 if (h[i].a % 2 == h[j].a % 2)
//                 {
//                     break;
//                 }
//             }
//             h[i].used = 1;
//             h[j].used = 1;
//             if (count < n)
//             {
//                 cout << i + 1 << " " << j + 1 << endl;
//             }
//             count++;
//         }
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 2e5 + 5;

int n;
int a[N];

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector< int > even, odd;
		for(int i = 1; i <= 2 * n; i++)
		{
			cin >> a[i];
			if(a[i] % 2)
				odd.push_back(i);
			else
				even.push_back(i);
		}
		vector< pair< int, int > > ans;
		for(int i = 0; i + 1 < odd.size(); i += 2)
			ans.push_back({odd[i], odd[i + 1]});
		for(int i = 0; i + 1 < even.size(); i += 2)
			ans.push_back({even[i], even[i + 1]});
		for(int i = 0; i < n - 1; i++)
			cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}