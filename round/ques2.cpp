#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100000];
        int distinct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] == a[i + 1])
            {
                continue;
            }
            distinct++;
        }

        distinct = distinct+1;

        // cout<<"distinct = "<<distinct<<endl;

        int max = a[n - 1];
        int mex;
        for (int i = 0; i <= max + 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == a[j])
                {
                    break;
                }
                else if (j == n - 1 || a[j] > i)
                {
                    mex = i;
                    goto here;
                }
            }
        }

    here:
        // cout << "max = " << max << " mex = " << mex << endl;

        int x = (mex + max + 1) / 2;

        // cout<<"x = "<<x<<endl;

        int term = 0;

        for (int i = 0; i < n; i++)
        {
            if(x==max||x==mex){
                term=2;
            }
            if (x == a[i])
            {
                // cout<<"matched"<<endl;
                term = 1;
                break;
            }
            else if (a[i] > x)
            {
                break;
            }
        }
        if (term == 0 && k>0)
        {
            cout << distinct + 1 << endl<<endl;
        }
        else if(term==2){
            cout<<distinct+2<<endl<<endl;
        }
        else
        {
            cout << distinct  << endl<<endl;
        }
    }
}