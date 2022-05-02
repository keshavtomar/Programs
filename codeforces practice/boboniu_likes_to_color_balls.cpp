#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int r, g, b, w;
        cin >> r >> g >> b >> w;
        int no_of_odds = 0, no_of_even = 0;
        (r % 2 == 0) ? no_of_even++ : no_of_odds++;
        (g % 2 == 0) ? no_of_even++ : no_of_odds++;
        (b % 2 == 0) ? no_of_even++ : no_of_odds++;
        (w % 2 == 0) ? no_of_even++ : no_of_odds++;
        // cout << no_of_even << " " << no_of_odds << endl;
        if (no_of_odds <= 1)
        {
            cout << "Yes" << endl;
        }
        else if (no_of_even == 2 && no_of_odds == 2)
        {
            cout << "No" << endl;
        }
        else
        {
            if (r == 0 || g == 0 || b == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}