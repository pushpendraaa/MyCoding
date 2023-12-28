//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        unordered_map<long long, int> frequency;
        vector<int> duplicates;
        for(int i=0; i<n; i++){
            frequency[arr[i]]++;
        }
        
        for(auto it:frequency){
            if(it.second>1){
                duplicates.push_back(it.first);
            }
        }
        if(duplicates.empty()){
            duplicates.push_back(-1);
            
        }else{
            sort(duplicates.begin(), duplicates.end());
        }
        return duplicates;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends