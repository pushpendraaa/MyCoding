//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
#include <unordered_set>
#include <vector>

class Solution {
public:
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        std::unordered_set<int> set;
        std::vector<int> ans;
        
        for (int i = 0; i < n; ++i) {
            set.insert(a[i]);
        }
        for (int i = 0; i < m; ++i) {
            if (set.find(b[i]) != set.end()) {
                ans.push_back(b[i]);
                set.erase(b[i]);
            }
        }
        return ans.size();
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends