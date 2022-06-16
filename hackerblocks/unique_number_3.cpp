#include <iostream>
#include <algorithm>

using namespace std;

// will do it with bitwise operators later

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if(a[i]!=a[i+1]){
                cout<<a[i]<<endl;
                break;
            }
        }
        else if (i == n - 1)
        {
            if(a[i]!=a[i-1]){
                cout<<a[i]<<endl;
                break;
            }
        }
        else
        {
            if (a[i] != a[i - 1] && a[i] != a[i + 1])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
}