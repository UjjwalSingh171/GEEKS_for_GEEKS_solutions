//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

#include <vector>
#include <iostream>
#include <unordered_map> // Required for using the map
using namespace std;

class Solution {
public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int, int> sumIndexMap; // To store cumulative sum and its index
        int maxlen = 0; // To store the maximum length of subarray
        int sum = 0; // Cumulative sum

        // Traverse through the array
        for (int i = 0; i < n; i++) {
            sum += arr[i]; // Update cumulative sum
            
            // Check if the sum is zero
            if (sum == 0) {
                maxlen = i + 1; // Update maxlen to the current index + 1
            }

            // If this sum has been seen before
            if (sumIndexMap.find(sum) != sumIndexMap.end()) {
                // Calculate the length of the subarray
                maxlen = max(maxlen, i - sumIndexMap[sum]);
            } else {
                // Store the index of this sum only if it's the first time it's seen
                sumIndexMap[sum] = i;
            }
        }
        return maxlen; // Return the maximum length found
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends