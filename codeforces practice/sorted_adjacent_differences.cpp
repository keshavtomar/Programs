#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100001];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // sorting normally begins
        sort(a, a+n);



    //    setting the starting of sort
       int start;
       if(n%2==0){
           start=n/2-1;
       }
       else{
           start=n/2;
       }

       cout<<a[start]<<" ";
       int x=start;
       for(int i=1; i<n; i++){
           x = x + pow(-1,i+1)*i;
           cout<<a[x]<<" ";
       }

       cout<<endl;

    }
}