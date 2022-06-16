#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum1 = 0, sum2 = 0;
        int i = 1;
        while (i > 0)
        {
            if (i & 1 == 1)
            {
                sum1 += i;
            }
            else
            {
                sum2 += i;
            }
            if (sum1 > a)
            {
                cout << "Harshit" << endl;
                break;
            }
            else if (sum2 > b)
            {
                cout << "Aayush" << endl;
                break;
            }
            i++;
        }
    }
}