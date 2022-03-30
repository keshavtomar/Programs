#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[100000];
    int no_of_twenty_five = 0;
    int no_of_fifty = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            no_of_twenty_five++;
        }
        else if (a[i] == 50)
        {
            no_of_fifty++;
            if (no_of_twenty_five < 1)
            {
                flag = 1;
                goto end;
            }
            no_of_twenty_five--;
        }

        else if (a[i] == 100)
        {
            if (no_of_fifty >= 1 && no_of_twenty_five >= 1)
            {
                no_of_fifty--;
                no_of_twenty_five--;
            }
            else if (no_of_twenty_five >= 3)
            {
                no_of_twenty_five = no_of_twenty_five - 3;
            }
            else
            {
                flag = 1;
                goto end;
            }
        }
    }
end:
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}