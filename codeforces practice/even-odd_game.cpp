/*
first, alice -> score + even(if)
bob -> score + odd(if)
alice will choose max of (greates even , greatest odd(so that this will not be added in bob's list));
*/

#include <iostream>
#include <algorithm>

typedef long long int lli;

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        lli alice = 0;
        lli bob = 0;
        lli alice_ahead = 0;
        int a[200000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (count % 2 == 1)
            {
                if (a[i] % 2 == 0)
                {
                    alice_ahead += a[i];
                }
            }
            else
            {
                if (a[i] % 2 == 1)
                {
                    alice_ahead -= a[i];
                }
            }
            count++;
        }
        if (alice_ahead > 0)
        {
            cout << "Alice" << endl;
        }
        else if (alice_ahead < 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
}
