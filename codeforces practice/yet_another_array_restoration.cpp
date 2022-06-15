#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int m = n - 1;
        int diff = y - x;
        while (diff % m != 0)
        {
            m--;
        }
        int curr = y;
        while (curr > 0 && n>0)
        {
            cout << curr << " ";
            curr -= diff / m;
            n--;
        }
        while (n--)
        {
            y += diff / m;
            cout << y << " ";
        }
        cout << endl;
    }
}