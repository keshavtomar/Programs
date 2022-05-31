#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    while(n){
        cout<<n%10;
        n/=10;
    }
}