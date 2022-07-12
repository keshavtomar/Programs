#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << a[0] << endl;
    }
}