#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100000];
        int no_of_ones=0;
        bool check_others=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]!=1){
                check_others=1;
            }
        }
        if(check_others==1){
            int count=0;
            while(a[count]==1){
                count++;
            }
            if(count%2==0){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        else{
            if(n%2==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }
}