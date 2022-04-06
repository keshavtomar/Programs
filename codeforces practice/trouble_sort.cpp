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
        int a[500], b[500];
        bool different = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != b[0])
            {
                different = 1;
            }
        }
        if (different == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            bool sorted=1;
            for(int i=1; i<n; i++){
                if(a[i]<a[i-1]){
                    sorted=0;
                    break;
                }
            }
            if(sorted==1){
               cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}