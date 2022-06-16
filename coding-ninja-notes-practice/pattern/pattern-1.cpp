#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i-1){
            int val=n-i+j;
            cout<<val;
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout<<n;
            j++;
        }
        i++;
        cout<<endl;

    }
}