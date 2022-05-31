#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a, b;
    cin>>a>>b;
    for (int i = 1; i > 0; i++)
    {
        if (b * i % a == 0)
        {
            cout << b * i << endl;
            break;
        }
    }
}