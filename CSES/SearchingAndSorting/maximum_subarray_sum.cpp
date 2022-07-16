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

int main()
{
    int n;
    cin >> n;
    ll curr;
    cin >> curr;
    ll maxIndividual = curr;
    ll sum = curr;
    ll max = curr;
    bool noPositive = true;
    FOR(i, 1, n)
    {
        cin >> curr;
        if (curr >= 0)
        {
            noPositive = false;
        }
        if (curr > maxIndividual)
        {
            maxIndividual = curr;
        }
        if (sum < 0)
        {
            sum = 0;
        }
        sum += curr;
        if (sum > max)
        {
            max = sum;
        }
    }

    if (noPositive)
        cout << maxIndividual << endl;
    else
        cout << max << endl;

    return 0;
}