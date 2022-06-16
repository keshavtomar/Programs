#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
              char val= 'A'+j-1;
              cout<<val;
              j++;
        }
        cout<<endl;
        i++;
    }
}