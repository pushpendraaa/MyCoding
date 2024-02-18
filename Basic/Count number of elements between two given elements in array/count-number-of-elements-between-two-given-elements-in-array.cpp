//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int getCount(int arr[], int n, int num1, int num2) {
        int firstIndex = -1;
        int lastIndex = -1;
        int count = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == num1 && firstIndex == -1)
                firstIndex = i;
            if (arr[i] == num2)
                lastIndex = i;
        }

        if (firstIndex == -1 || lastIndex == -1)
            return -1;
        for (int i = firstIndex + 1; i < lastIndex; ++i) {
            count++;
        }

        return count;
    }
};
//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}

// } Driver Code Ends