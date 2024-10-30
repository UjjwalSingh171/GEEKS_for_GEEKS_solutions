//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int count = 0;

        // Store the frequency of each element in the map
        for (int num : arr) {
            mp[num]++;
        }

        // Check pairs with difference k
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int num = it->first;
            int freq = it->second;

            // Check if `num + k` exists in the map
            if (mp.find(num + k) != mp.end()) {
                count += freq * mp[num + k];
            }
        }

        return count;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends