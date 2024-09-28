//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int searchInSorted(int arr[], int N, int K) {
        int left = 0;
        int right = N-1;
        while(left<=right)
        {
            int mid = left + (right - left)/2;
            
            if(arr[mid]==K)
            {
                return 1;
            }
            
            else if(arr[mid]<K)
            {
                left = mid + 1;
            }
            
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

// } Driver Code Ends