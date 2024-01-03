//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int remove_duplicate(int a[], int n) {
        // Base case: if the array has 0 or 1 elements, there are no duplicates
        if (n <= 1) {
            return n;
        }

        int distinct_count = 1;

        for (int i = 1; i < n; i++) {
            // If the current element is different from the previous one
            if (a[i] != a[i - 1]) {
                // Update the array at the distinct_count position with the current element
                a[distinct_count] = a[i];
                distinct_count++;
            }
        }

        return distinct_count;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends