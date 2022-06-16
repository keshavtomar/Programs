#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int a;
    cin >> a;

    int len = to_string(a).length();

    int dummy = a;
    int sum = 0;
    while (dummy)
    {
        sum += pow(dummy % 10, len);
        dummy /= 10;

    }
    // cout << "for i = " << i << " sum is " << sum << endl;
    if (sum == a)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}