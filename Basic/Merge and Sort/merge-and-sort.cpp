//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
    // Write your code here

class Solution {
public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[]) {
        int mergedSize = n + m;
        int *mergedArray = new int[mergedSize];
        for (int i = 0; i < n; ++i) {
            mergedArray[i] = a[i];
        }
        for (int i = 0; i < m; ++i) {
            mergedArray[n + i] = b[i];
        }
        sort(mergedArray, mergedArray + mergedSize);
        int uniqueSize = 1;
        for (int i = 1; i < mergedSize; ++i) {
            if (mergedArray[i] != mergedArray[i - 1]) {
                mergedArray[uniqueSize++] = mergedArray[i];
            }
        }

        for (int i = 0; i < uniqueSize; ++i) {
            answer[i] = mergedArray[i];
        }

        delete[] mergedArray;
        return uniqueSize;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}
// } Driver Code Ends