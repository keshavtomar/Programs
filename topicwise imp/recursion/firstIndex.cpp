#include <iostream>

using namespace std;

/* Using recursion
Given an array of length N and an integer x, you need to find and return
 the first index of integer x present in the array.
 Return -1 if it is not present in the array.
 */

int firstIndex(int input[], int size, int x)
{
    if(size==0){
        return -1;
    }

    int previousFoundIndex = firstIndex(input,size-1,x);
    
    if(previousFoundIndex==-1&&input[size-1]==x){
        return size-1;
    }
    else{
        return previousFoundIndex;
    }
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << firstIndex(input, n, x) << endl;
}