#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    int a[200000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if(k==0&&a[0]<2){
        cout<<"-1";
    }
    else if(k==0&&a[0]>1){
        cout<<"1";
    }
    else if(k==20000){
        cout<<a[k-1];
    }
    else if(a[k-1]==a[k]){
        cout<<"-1";
    }
    else{
        cout<<a[k-1];
    }
}