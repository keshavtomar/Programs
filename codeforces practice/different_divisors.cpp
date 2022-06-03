#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int a = 1 + d;
        while(!isprime(a)){
            a++;
        }
        int b=a+d;
        while(!isprime(b)){
            b++;
        }
        cout << a * b << endl;
    }
}