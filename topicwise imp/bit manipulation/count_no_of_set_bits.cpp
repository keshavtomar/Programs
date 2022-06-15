#include <iostream>
#include <algorithm>

using namespace std;

//this function will take a int as input like 17 and then return no of set bits (no of 1s in it's binary representation)in it like 2
//time complexity O(no of set bits);

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
    int n;
    cin >> n;
    int count = SetBitCounter(n);
    cout << count;
}