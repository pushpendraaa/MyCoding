//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a, a+n);
        int minindex = 0;
        int maxindex =n-1;
        for(int i=0; i<n; i++){
            if(i%2==0){
                answer[i]=a[minindex];
                minindex++;
            }
            else{
                answer[i]=a[maxindex];
                maxindex--;
            }
        }
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
		int i, a[n+5], answer[n+5]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.Rearrange(a, n, answer);
		
		for(i=0;i<n;i++)
		cout<<answer[i]<<" ";
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends