//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    sort(arr, arr + N);
	    vector<int>result;
	    int low=0, high=N-1;
	    while(low<=high){
	        if(low!=high){
	            result.push_back(arr[high]);
	            result.push_back(arr[low]);
	        }
	        else{
	            result.push_back(arr[low]);
	        }
	        low++;
	        high--;
	    }
	    return result;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends