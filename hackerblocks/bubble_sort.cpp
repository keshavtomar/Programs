#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
 
    //bubble sort
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){

                //swapping using xor
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}