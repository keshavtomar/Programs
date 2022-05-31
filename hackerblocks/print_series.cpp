#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    int i = -1;
    while (a)
    {
        while (++i)
        {
            if ((3 * i + 2) % b != 0)
            {
                cout << 3 * i + 2 << endl;
                a--;
                break;
            }
        }
    }
}