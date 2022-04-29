#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i = 0;
    int j = 18;
    while (i != n)
    {
        j++;
        int sum = 0;
        int x=j;
        while (x)
        {
            sum += x % 10;
            x = x / 10;
        }
        if (sum == 10)
        {
            i++;
        }
    }
    cout<<j<<endl;
}