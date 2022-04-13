#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    int a[500];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[500];
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int required = k - a[i - 1];
        if (required > a[i])
        {
            sum += required - a[i];
            a[i] = required;
        }
    }
    cout << sum <<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}