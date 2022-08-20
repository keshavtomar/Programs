#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>

using namespace std;

//try calculating 45th term of fibonacci with this code vs simple recursion code

int dp[1000];

int fibo(int n)
{
    if (n <= 1)
    {
        dp[n] = n;
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return dp[n];
}

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < 1000; i++)
    {
        dp[i] = -1;
    }
    cout << "The " << n << "th term in fibonacci is " << fibo(n);
}