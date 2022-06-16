#include <iostream>
#include <algorithm>

using namespace std;

//This is done using Kadane's algorithm

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxTillnow = 0;
        int curr = 0;
        int count = 0;
        int currm = 0;

        int totalsum = 0;
        int minTillnow = 0;

        for (int i = 0; i < n; i++)
        {
            totalsum += a[i];
            curr += a[i];
            currm += a[i];

            if (curr < 0)
            {
                curr = 0;
            }
            if (currm > 0)
            {
                currm = 0;
            }

            minTillnow = min(minTillnow, currm);
            maxTillnow = max(maxTillnow, curr);
        }

        cout << max(maxTillnow, (totalsum - minTillnow)) << endl;
    }
}