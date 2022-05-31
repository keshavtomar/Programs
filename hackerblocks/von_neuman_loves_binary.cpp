#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int l=n;
    int ans[1001];
    while (n--)
    {
        long long int a;
        cin >> a;
        int x = 0;
        int i = 0;
        while (a)
        {
            x += (a%10) * pow(2, i);
            i++;
            a /= 10;
        }
        ans[n]=x;
    }
    while(l--){
        cout<<ans[l]<<endl;
    }
}