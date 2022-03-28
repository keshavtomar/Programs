#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        long long int n,s;
        cin>>n>>s;
        long long int total_elements=n+1;
        long long int max_value = n-1;
        long long int max_sum = total_elements*max_value;
        if(max_value>=s){
            cout<<"0"<<endl;
            continue;
        }
        else{
           cout<<(int)(s/pow(n,2))<<endl;
        }
    }
}