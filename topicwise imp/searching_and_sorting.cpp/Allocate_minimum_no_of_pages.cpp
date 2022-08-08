// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to find minimum number of pages.
    bool isValid(int A[], int N, int M, int max)
    {
        int no_of_students = 1;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum = sum + A[i];
            if (sum > max)
            {
                no_of_students++;
                sum = A[i];
            }
        }
        cout << "For max = " << max << " no of students are " << no_of_students << endl;
        if (no_of_students <= M)
        {
            return true;
        }
        else if (no_of_students > M)
        {
            return false;
        }
    }

    int findPages(int A[], int N, int M)
    {
        if (N < M)
        {
            return -1;
        }
        int start = *max_element(A, A + N);
        int end = accumulate(A, A + N, 0);
        cout << "start is " << start << " and end is " << end << endl;

        int candidate = -1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (isValid(A, N, M, mid))
            {
                candidate = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return candidate;
    }
};

// { Driver Code Starts.

int main()
{
    int n;
    cin >> n;
    int A[n];
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    Solution ob;
    cout << ob.findPages(A, n, m) << endl;
    return 0;
}
// } Driver Code Ends