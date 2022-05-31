#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    int d;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        cout << "Real and Distinct" << endl;
        int x, y;
        x = (-b + sqrt(d)) / 2 * a;
        y = (-b - sqrt(d)) / 2 * a;
        cout << min(x,y) << " " << max(x,y) << endl;
    }
    else if (d == 0)
    {
        cout << "Real and Equal" << endl;
        int x, y;
        x = (-b) / 2 * a;
        y = (-b) / 2 * a;
        cout << x << " " << y << endl;
    }
    else if (d < 0)
    {
        cout << "Imaginary" << endl;
    }
}