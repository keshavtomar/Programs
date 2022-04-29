#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int sum = 0, maximum_beauty = 0;
        long long int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;

            maximum_beauty += (a % x == 0) ? (a / x) : (a / x) + 1;
        }

        long long int minimum_beauty = (sum % x == 0) ? (sum / x) : (sum / x) + 1;

        cout << minimum_beauty << " " << maximum_beauty << endl;
    }
}