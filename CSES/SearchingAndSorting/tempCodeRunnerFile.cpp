#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, x;
    cin >> n >> x;
    int a[200000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0;
    int j = n - 1;
    int gondolaCount = 0;
    while (i <= j)
    {
        if (a[i] + a[j] <= x)
        {
            gondolaCount++;
            i++;
            j--;
        }
        else if (a[j] <= x)
        {
            gondolaCount++;
            j--;
        }
        else if (a[j] > x)
        {
            j--;
        }
    }

    cout << gondolaCount;
}