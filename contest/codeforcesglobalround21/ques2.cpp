#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool starts = 0;
        int count = 0;
        int a;
        while (n--)
        {
            cin >> a;
            if (starts && a == 0)
            {
                starts = false;
            }
            else if ((!starts) && a != 0)
            {
                starts = true;
                count++;
            }
        }
        if (count > 2)
        {
            cout << "2" << endl;
        }
        else
            cout << count << endl;
    }
}