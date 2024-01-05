//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution {
public:
    void rearrangeArray(int arr[], int n) {
        sort(arr, arr + n);

        int temp[n];
        int small = 0, large = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                temp[i] = arr[small];
                small++;
            }
            else {
                temp[i] = arr[large];
                large--;
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends