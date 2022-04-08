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
        long long int sum = 0;
        int a;
        bool found_less=0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            sum += a;
            int min_req = (i * (i - 1)) / 2;
            // cout<<"sum at i = "<<i<<" is sum = "<<sum<<"and min required is "<<min_req<<endl;
            if(sum<min_req){
                found_less=1;
            }
        }
        if(found_less==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}