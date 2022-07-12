#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<ll> vc;
    vc.push_back(n);
    ll x;
    while (vc.back() != 1)
    {
        if (vc.back() & 1 == 1)
        {
            x = (vc.back() * 3) + 1;
        }
        else
        {
            x = vc.back() / 2;
        }
        vc.push_back(x);
    }

    for(auto it:vc){
        cout<<it<<" ";
    }
}