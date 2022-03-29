#include <iostream>
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
        int a[300000];
        int greatest = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > greatest)
            {
                greatest = a[i];
            }
        }

        int piranha = 0; // such a piranha does not exist
        int index;

        if(a[0]==greatest&&a[1]<greatest){
            piranha=1;
            index=1;
            goto end;
        }

        else if(a[n-1]==greatest&&a[n-2]<greatest){
            piranha=1;
            index=n;
            goto end;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == greatest)
            {
                if (a[i - 1] < greatest || a[i + 1] < greatest)
                {
                    piranha = 1;
                    index = i+1;
                    goto end;
                }
            }
        }

    end:
        if (piranha == 1)
        {
            cout << index << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}