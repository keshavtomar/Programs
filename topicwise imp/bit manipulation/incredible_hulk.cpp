#include <iostream>
#include <algorithm>

using namespace std;

//basically we have to count no of set bits

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
        cout<<SetBitCounter(n)<<endl;
    }
}