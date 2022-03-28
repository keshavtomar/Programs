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
        int a[200000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int flag = 0;

        long long int suml = a[n-1], sums = a[0]+a[1];
        for (int i = 1; i <= n / 2; i++)
        {
            if(suml>sums){
                flag=1;
                break;
            }
            else{
                sums=sums+a[i+1];
                suml=suml+a[n-1-i];
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}