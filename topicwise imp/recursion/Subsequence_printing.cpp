#include <iostream>
#include <climits>
#include <algorithm>

// this can also be done using concept of power set

using namespace std;

void printArray(int a[], int n)
{
    cout<<"{ ";
    if(n>=0){
    cout<<a[0];
    }
    for (int i = 1; i <= n; i++)
    {
        cout <<", "<< a[i];
    }
    cout<<" }";
    cout << endl;
}

void printSubsequences(int a[], int size, int output[], int i = 0, int outputIndex = 0)
{
    if (i == size)
    {
        return;
    }

    //not pick
    printSubsequences(a, size, output, i + 1, outputIndex);


    //pick
    output[outputIndex] = a[i];
    printSubsequences(a, size, output, i + 1, outputIndex + 1);

    printArray(output, outputIndex);
};

int main(void)
{
    int a[] = {6,2,3, 11};
    int output[50];

    printSubsequences(a,4,output);
}