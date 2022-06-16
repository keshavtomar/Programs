#include <iostream>
#include <algorithm>

using namespace std;

int SetBitCounter(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans = SetBitCounter(n);
        cout<<ans<<endl;
    }
}