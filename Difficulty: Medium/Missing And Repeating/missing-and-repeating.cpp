//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeating = -1, missing = -1;

        // Step 1: Mark the visited elements
        for (int i = 0; i < n; i++) {
            int element = abs(arr[i]);  // Take the absolute value
            if (arr[element - 1] < 0) {
                // If the value is already negative, we have visited this index before
                repeating = element;
            } else {
                // Mark this index as visited by making it negative
                arr[element - 1] = -arr[element - 1];
            }
        }

        // Step 2: Find the missing element
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;  // The index + 1 is the missing number
            }
        }

        return {repeating, missing};
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends