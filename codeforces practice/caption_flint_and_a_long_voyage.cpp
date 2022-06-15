#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = ((n-1)/4)+1;
        for(int i=0; i<n-x; i++){
            cout<<"9";
        }
        for(int i=0; i<x; i++){
            cout<<"8";
        }
        cout<<endl;
    }
}