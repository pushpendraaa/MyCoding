//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<long, long> indexes(vector<long long> v, long long x)
    {
        long long n = v.size();
        long long first = -1, last = -1;
        long long low = 0, high = n - 1;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            if (v[mid] == x)
            {
                first = mid;
                high = mid - 1;
            }
            else if (v[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        low = 0, high = n - 1;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            if (v[mid] == x)
            {
                last = mid;
                low = mid + 1;
            }
            else if (v[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {first, last};
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends