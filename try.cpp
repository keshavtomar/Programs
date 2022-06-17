#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int maxs=INT_MIN;
    int second_max=INT_MIN;
    int curr;
    cin>>curr;
    curr=maxs=second_max;
   

    n=n-2;
    while(n--){
        cin>>curr;
        if(curr>maxs){
            second_max=maxs;
            maxs=curr;
        }
        else if(curr>second_max){
            second_max=curr;
        }
    }
    cout<<second_max;
}