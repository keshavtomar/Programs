#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;

        if (((r + 1) % a) == 0)
        {
            cout << r / a + r % a << endl;
        }
        else
        {
            x = r % a + 1;
            y = r - x;
            if (y >= l)
            {
                cout << y / a + y % a << endl;
            }
            else
            {
                cout << r / a + r % a << endl;
            }
        }
    }
}