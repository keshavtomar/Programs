#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int second_last = 0, last = 1, value;
    if (n == 1)
    {
        cout << "0";
    }
    else if (n == 2)
    {
        cout << "1";
    }
    else
    {
        n = n - 1;
        while (n--)
        {
            value = second_last + last;
            second_last = last;
            last = value;
        }
        cout << value;
    }
}