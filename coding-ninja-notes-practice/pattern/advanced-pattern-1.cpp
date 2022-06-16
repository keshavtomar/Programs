#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int val;
        if (i == 1)
        {
            int j = 1;
            while (j <= n)
            {
                val = j;
                cout << setw(2)<<val;
                j++;
                cout<<" ";
            }
        }
        else if (i == n)
        {
            val = n + n + n - 2;
            int j = 1;
            while (j <= n)
            {
                val = n + n + n - j - 1;
                cout<< setw(2)<<val;
                j++;
                cout<<" ";
            }
        }
        else{
            int j=1;
            while(j<=n){
                if(j==1){
                   val=(4*n)-2-i;
                   cout<<setw(2)<<val;
                }
                else if(j==n){
                   val=n+i-1;
                   cout<<setw(2)<<val;
                }
                else{
                   cout<<"  ";
                }
                cout<<" ";
                j++;
            }
        }
        cout<<endl;
        i++;
    }
}