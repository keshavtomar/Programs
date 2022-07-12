#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

vector<pair<char, char>> vc;

void transfer(int no_of_disks, char from, char to, char mediator)
{
    if (no_of_disks == 1)
    {
        vc.push_back({from, to});
        return;
    }

    transfer(no_of_disks - 1, from, mediator, to);

    transfer(1, from, to, mediator);

    transfer(no_of_disks - 1, mediator, to, from);
}

int main()
{
    int t;
    cin >> t;
    char a = '1', b = '2', c = '3';
    transfer(t, a, c, b);

    cout << vc.size() << endl;

    for (auto it : vc)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}