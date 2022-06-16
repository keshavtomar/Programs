#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max, a[1000000];
        long long int stored_water = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int start_index = 0;
        bool start=0;

        int end_index = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] > a[i + 1] && !start)
            {
                start=true;
                start_index = i;
            }

            if (a[i] > a[i-1])
            {
                end_index = i;
            }
        }

        // cout<<start_index<<" "<<end_index;

        int highest_level=min(a[start_index],a[end_index]);

        for (int i = start_index+1; i < end_index; i++)
        {
            if(a[i]<=highest_level){
                stored_water+=highest_level-a[i];
            }
            else{
               highest_level=min(a[i],a[end_index]);
            }
        }
        
        cout<<stored_water<<endl;

    }
}