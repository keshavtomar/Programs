#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int a[100000], b[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);

    int c[100000];
    int j=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        while(a[i]>b[j]){
            j++;
        }
          if(a[i]==b[j]){
             j++;
             c[count]=a[i];        
             count++;
          }
    }
    cout<<"[";
    for(int i=0; i<count;i++){
        cout<<c[i];
        if(i!=count-1){
            cout<<", ";
        }
    }
    cout<<"]";
    
    
}