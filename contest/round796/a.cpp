#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int count = 0;
        if (x == 1)
        {
            cout << "3" << endl;
        }
        else
        {
            while (x)
            {
                if (x % 2 == 1 && x > 1)
                {
                    int curr1 = pow(2, count);
                    cout << curr1 << endl;
                    break;
                }
                else if (x % 2 == 1)
                {
                    int curr2 = pow(2, count);
                    cout << (curr2 + 1) << endl;
                    break;
                }
                count++;
                x /= 2;
            }
        }
    }
}