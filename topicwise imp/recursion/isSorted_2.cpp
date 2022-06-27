#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

/*
isme hum fir se hr baar size km krenge, jaise hi size 0 ya 1 hoga hum true return kr denge
pr uske baad bhi hum hr baar check krenge ki hmaara a[0] agr a[1] se bda h to hum false return kr de
last tk jaane ke baad, jb recurssion waapis aa rha hoga, tb agr a[0], a[1] se bda ho gya to false return kr dega
agr hmaara kisi deeper recurssion se false aa rha h to hum uss case m bhi false hi return kr denge
uske baad hi a[0] aur a[1] ka comparision hoga
*/

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    bool isSmallerSorted = isSorted(arr + 1, size - 1);

    if(!isSmallerSorted){
        return false;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        return true;
    }
}

int main(void)
{
    int a[] = {-1, 5, 33, 2435, 345, 1222};
    int b[] = {1, 2, 3, 4, 7, 9};
    if (isSorted(a, 6))
    {
        cout << "a is sorted" << endl;
    }
    else
    {
        cout << " a is not sorted" << endl;
    }

    if (isSorted(b, 6))
    {
        cout << "b is sorted" << endl;
    }
    else
    {
        cout << "b is not sorted" << endl;
    }
}