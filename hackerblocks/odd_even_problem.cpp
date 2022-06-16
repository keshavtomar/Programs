
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int odd_sum = 0, even_sum = 0;
        while (n)
        {
            if ((n & 1) == 0)
            {
                even_sum += n % 10;
            }
            else
            {
                odd_sum += n % 10;
            }
            n /= 10;
        }

        // cout << even_sum << " " << odd_sum << endl;

        if (even_sum % 4 == 0 || odd_sum % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
