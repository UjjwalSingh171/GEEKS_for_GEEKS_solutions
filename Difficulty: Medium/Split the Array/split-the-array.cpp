//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Helper function for modular exponentiation
    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countgroup(vector<int>& arr) {
        const int MOD = 1000000007;
        int totalXOR = 0;
        int n = arr.size();

        // Calculate XOR of all elements in the array
        for (int num : arr) {
            totalXOR ^= num;
        }

        // If totalXOR is non-zero, no valid splits exist
        if (totalXOR != 0) {
            return 0;
        }

        // If totalXOR is zero, calculate the number of ways
        long long result = modPow(2, n - 1, MOD) - 1;
        if (result < 0) result += MOD;  // Handle negative result due to modulo subtraction
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int ans = obj.countgroup(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends