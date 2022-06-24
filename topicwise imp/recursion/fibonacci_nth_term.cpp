#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main(void)
{
    int n;
    cin >> n;
    cout << "The " << n << "th term in fibonacci is " << fibo(n);
}