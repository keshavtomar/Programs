#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int c1, c2, c3, c4, n, m;
        int a[1000], b[1000];
        cin >> c1 >> c2 >> c3 >> c4;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int rickshaw_sum = 0;
        for (int i = 0; i < n; i++)
        {
            rickshaw_sum += min(c1 * a[i], c2);
        }
        rickshaw_sum = min(rickshaw_sum, c3);

        int cab_sum = 0;
        for (int i = 0; i < m; i++)
        {
            cab_sum += min(c1 * b[i], c2);
        }
        cab_sum = min(cab_sum, c3);

        int total_sum = rickshaw_sum + cab_sum;
        int total = min(total_sum, c4);

        cout<<total<<endl;
    }
}