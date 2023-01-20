#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// this function will take three inputs and will return 1st and second largest among them respectively
// ex input  7, 4, 11
//  ex output {11,7}

pair<int, int> greatestTwo(int a, int b, int c)
{
    pair<int, int> ans;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    sort(vec.begin(), vec.end());
    return {vec[0], vec[1]};
}

int main()
{
    return 0;
}