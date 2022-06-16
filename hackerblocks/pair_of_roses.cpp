#include <iostream>
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
        int a[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;

        sort(a, a + n);
        int rose1;
        int rose2;

        // int min_diff = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((a[i] + a[j]) == m)
                {
                    rose1 = a[i];
                    rose2 = a[j];
                }
            }
        }
        cout << "Deepak should buy roses whose prices are " << rose1 << " and " << rose2 << "."<<endl;
    }
}