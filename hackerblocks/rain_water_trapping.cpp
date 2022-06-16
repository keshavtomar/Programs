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
        long long int stored_water = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 1;
        while (i < n - 1)
        {
            int j = i - 1;
            int leftmax = 0;
            while (j >= 0)
            {
                if (leftmax < a[j])
                {
                    leftmax = a[j];
                }
                j--;
            }
            int k = i + 1;
            int rightmax = 0;
            while (k < n)
            {
                if (rightmax < a[k])
                {
                    rightmax = a[k];
                }
                k++;
            }
            int currstore = min(leftmax, rightmax) - a[i];
            if (currstore > 0)
            {
                stored_water += currstore;
            }
            i++;
        }
        cout << stored_water << endl;
    }
}