#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
            continue;
        }
        else if (isPrime(n))
        {
            cout << "1 " << n - 1 << endl;
        }
        else
        {
            int d1, d2;
            for(int i=3; i<=sqrt(n) ; i++){
                int p=i;
                if(n%p==0&&isPrime(p)){
                    cout<<n/p<<" "<<n-(n/p)<<endl;
                    break;
                }
            }
        }
    }
}