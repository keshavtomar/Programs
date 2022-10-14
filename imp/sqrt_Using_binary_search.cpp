#include <iostream>

#define ll long long int

using namespace std;

ll squarert(ll input)
{
    ll a = 0;
    ll b = INT32_MAX;

    while (a <= b)
    {
        ll mid = (a + b) / 2;
        ll next = mid + 1;
        if ((next * (ll)next > input && mid * mid < input) || mid * mid == input)
        {
            return mid;
        }
        else if ((ll)mid * (ll)mid > input)
        {
            b = mid - 1;
        }
        else
        {
            a = mid + 1;
        }
    }
}

int main()
{
    ll x;
    cin >> x;
    cout << squarert(x);
    return 0;
}