#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int availablechops = 0;
        int a;
        while(n--){
           cin>>a;
           availablechops += (a-1);
        }
        if(availablechops%2==1){
            cout<<"errorgorn"<<endl;
        }
        else{
            cout<<"maomao90"<<endl;
        }
    }
}