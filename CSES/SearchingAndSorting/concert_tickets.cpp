#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    int ticket[20000];
    for (int i = 0; i < n; i++)
    {
        cin >> ticket[i];
    }
    sort(ticket, ticket + n);
    int priceoffered;
    for (int i = 0; i < m; i++)
    {
        cin >> priceoffered;
        if (ticket[0] > priceoffered)
        {
            cout << -1 << endl;
        }
        else if (ticket[n - 1] <= priceoffered)
        {
            cout << ticket[n - 1] << endl;
            ticket[n - 1] = INT32_MAX;
        }
        else
        {
            auto t = lower_bound(ticket, ticket + n, priceoffered);
            cout << ticket[t - ticket - 1] << endl;
            ticket[t - ticket - 1] = INT32_MAX;
        }
    }
}
