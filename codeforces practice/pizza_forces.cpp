#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<1){
            cout<<"0"<<endl;
        }
        else if(n<6){
            cout<<"15"<<endl;
        }
        else if(n%2==0){
            cout<<n*5/2<<endl;
        }
        else{
            cout<<(n+1)*5/2<<endl;
        }
    }
}