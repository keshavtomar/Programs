#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int a){
      return (a==1||a==0)? 1 :a*factorial(a-1);
}

int ones(long long int x){
    int count=0;
       while(x!=0){
           if(x%2==1){
               count++;
           }
           x=x/2;
       }
       return count;
}

int main(void){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        int ans[100];
        cin>>n;
        
    }

}