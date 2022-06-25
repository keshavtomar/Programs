#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

bool binarySearch(int a[], int start, int end, int x){
    if(start>end){
        return 0;
    }
    int mid=(start+end)/2;
    if(a[mid]==x){
        return 1;
    }
    else if(a[mid]>x){
        end=mid-1;
    }
    else{
        start=mid+1;
    }

    return binarySearch(a, start, end, x);
}

int main(void){
        int a[] = {-65,-23,-4,0,5,11,24,53,59,123,234,777,5678};
        if(binarySearch(a,0,13,778)){
            cout<<"Element found in array";
        }
        else{
            cout<<"Element not found in array";
        }
}