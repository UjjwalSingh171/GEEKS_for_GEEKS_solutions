//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        // Sort the array to prepare for alternating pattern
        std::sort(arr.begin(), arr.end());

        // Create a new array to store the arranged elements
        std::vector<int> rearranged(n);
        int left = 0, right = n - 1;
        bool toggle = true;

        // Alternate between smallest and largest elements
        for (int i = 0; i < n; i++) {
            if (toggle) {
                rearranged[i] = arr[left++];
            } else {
                rearranged[i] = arr[right--];
            }
            toggle = !toggle;
        }

        // Calculate the sum of absolute differences
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += std::abs(rearranged[i] - rearranged[i + 1]);
        }
        // Add the difference between the last and first elements to complete the circular array
        sum += std::abs(rearranged[n - 1] - rearranged[0]);

        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends