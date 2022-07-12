#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

ll Moves(vector<int> &vc)
{
    if (vc.size() <= 1)
    {
        return 0;
    }

    ll k = vc.back();
    vc.pop_back();
    ll shortAnswer = Moves(vc);

    vc.push_back(k);

    // cout<<*it<<endl;

    ll currAns = 0;
    if (vc.back() < *(vc.end() - 2))
    {
        currAns = (*(vc.end() - 2)) - vc.back();
        int l=(*(vc.end()-2));
        vc.pop_back();
        vc.push_back(l);
    }

    return shortAnswer + currAns;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> vc;
    int k;
    while (n--)
    {
        cin >> k;
        vc.push_back(k);
    }
    // vector<int>::iterator it = vc.end();
    ll moves = Moves(vc);
    // for(auto it:vc){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout << moves;
}