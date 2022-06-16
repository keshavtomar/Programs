#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    long long int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int i = 0;
    int ans = -1;
    while (i < n)
    {
        if (a[i] == m)
        {
            ans = i;
            break;
        }
        i++;
    }
    cout<<ans;
}