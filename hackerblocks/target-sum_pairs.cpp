#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << a[i] << " and " << a[j] << endl;
            }
        }
    }
}