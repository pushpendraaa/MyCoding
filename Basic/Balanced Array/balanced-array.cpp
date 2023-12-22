//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int i=0;
       int j=n-1;
       int m=i+(j-i)/2;
       int sum1 = 0;
       int sum2 = 0;
       for(int i=0;i<=m;i++){
           sum1=sum1+a[i];
       }
       for(int i=m+1;i<n;i++){
           sum2=sum2+a[i];
       }
       int c = abs(sum2-sum1);
       return c;
       
       
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
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends