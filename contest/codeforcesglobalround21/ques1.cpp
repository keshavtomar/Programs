#include <iostream>
#include <climits>
#include <algorithm>

typedef long long int lli;

using namespace std;


int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        lli n, z;
        cin>>n>>z;
        lli max=INT32_MIN;
        lli a;
        while(n--){
            cin>>a;
            if((a|z)>max){
                max=(a|z);
            }
        }
        cout<<max<<endl;
    }
}