#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int len = to_string(i).length();

        int dummy = i;
        int sum = 0;
        while (dummy)
        {
            sum += pow(dummy % 10, len);
            dummy /= 10;
        }
        // cout << "for i = " << i << " sum is " << sum << endl;
        if (sum == i)
        {
            cout << i << endl;
        }
    }
}