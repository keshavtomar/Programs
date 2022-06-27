#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

/*
hm newly transferred array m se pehla element htate rahenge aur array ko agle element se shuru krte rahenge
jaise hi kisi bhi smaller array m first(0th) element second element se bda hoga recursion ruk jaayega aur false ko return kr dega
agr smaller array hote hote uska size 1 ya usse km ho gya to true return ho jaayega, it means array sorted h hi
*/

bool isSorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }

    if(arr[0]>arr[1]){  
        return false;
    }

    bool isSmallersorted = isSorted(arr+1, size-1);
    return isSmallersorted;

}  

int main(void){
    int a[] = {-1,5,33,245,345,1222};
    int b[] = {1,2,3,5,4,9};
    if(isSorted(a,6)){
        cout<<"a is sorted"<<endl;
    }
    else{
        cout<<" a is not sorted"<<endl;
    }

    if(isSorted(b,6)){
        cout<<"b is sorted"<<endl;
    }
    else{
        cout<<"b is not sorted"<<endl;
    }

}