#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int max_len= 2*n+1;
    for(int i=0; i<max_len; i++){
        int zeroes = 0;
        for(int j=0; j<max_len; j++){
           int i_dist = (n-i>0)?(n-i):(i-n);
           int j_dist = (n-j>0)?(n-j):(j-n);

           int dist = i_dist+j_dist;

           if(dist>n){
               cout<<" ";
           }
           else{
               cout<<n-dist;
               if(n==dist){
                   zeroes++;
               }
               if(i==0||i==max_len-1){
                   if(zeroes==1){
                       break;
                   }
               }
               else{
                   if(zeroes==2){
                       break;
                   }
               }
           }
           cout<<" ";
        }   
        cout<<endl;         
    }
}