#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;
    int max = 0;
    for (int i = x; i <= y; i++)
    {
        for (int j = i; j <= y; j++)
        {
            if ((i ^ j) > max)
            {
                max = (i ^ j);
            }
        }
    }
    cout<<max;
}