//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes hereint n = arr.size();
        // Variable to store the maximum sum
        int maxSum = INT_MIN;
        int n = arr.size();

        // Iterate over the array and check adjacent pairs
        for (int i = 1; i < n; i++) {
            // Calculate the sum of current adjacent pair
            int currSum = arr[i] + arr[i - 1];
            // Update maxSum if the current sum is greater
            maxSum = max(maxSum, currSum);
        }
        
        // Return the maximum sum found
        return maxSum;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends