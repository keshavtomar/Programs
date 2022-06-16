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
        int a, b;
        cin >> a >> b;

        int count = 0;
        for (int i = a; i <= b; i++)
        {
            count += SetBitCounter(i);
        }
        cout << count << endl;
    }
}