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
        int a[100], b[100];
        int sa = 0, sb = 0;
        int moves = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            sa += a[i];
            sb += b[i];
            if (a[i] > b[i])
            {
                moves += (a[i] - b[i]);
            }
        }
        // cout<<sa<<" "<<sb<<endl;

        if (sa != sb)
        {
            cout << "-1" << endl;
            continue;
        }


        else
        {
            cout << moves << endl;
            for (int k = 0; k < moves; k++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] > b[i])
                    {
                        a[i] = a[i]-1;
                        cout << i+1 << " ";
                        break;
                    }
                }
                for (int j = 0; j < n; j++)
                {
                    if (b[j] > a[j])
                    {
                        a[j] = a[j]+1;
                        cout << j+1 << endl;
                        break;
                    }
                }
            }
        }
    }
}