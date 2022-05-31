#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else if (c > a && c > b)
    {
        cout << c;
    }
    else if (a == b && a > c)
    {
        cout << a;
    }
    else if (a == c && a > b)
    {
        cout << c;
    }
    else if (b == c && b > c)
    {
        cout << b;
    }
}